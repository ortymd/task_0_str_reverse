#include <stdio.h>
#include <func.h>

unsigned input_sz = 1<<10;
const unsigned delim_start = 32;	// ascii num
const unsigned delim_end = 47;	// ascii num

void get_user_input(char *user_input)
{
	fgets(user_input, input_sz, stdin);
	unsigned len = strlen(user_input) - 1;
	if(user_input[len] == '\n')
		user_input[len] = '\0';
}

int strrev_inplace(char *str, unsigned len)
{
	char *s1 = str;
	char *s2 = s1 + len-1;
	char tmp;

	switch(len%2)
	{
		case 0:		// even
			while( s1 < s2 )
			{
				tmp = *s1;
				*s1 = *s2;
				*s2 = tmp;
				--s2;
				++s1;
			}
		break;

		case 1:		// odd
			while( s1 != s2 )
			{
				tmp = *s1;
				*s1 = *s2;
				*s2 = tmp;
				--s2;
				++s1;
			}
		break;

	}

	return 0;
}

char* find_delim(char *str)
{
	char *check = str;
	while( not_delim(check) && *check != '\0' )
	{
		++check;
	}
	return check;
}

int not_delim(char *check)
{
	for( char i = delim_start; i <= delim_end; ++i)
	{
		if(*check == i)
		{
			return 0;
			break;
		}
	}
	return 1;
}
