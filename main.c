#include <func.h>

extern const unsigned delim_start;
extern const unsigned delim_end;

int main()
{
	char *s1;
	get_user_input(s1);

	char *start = s1;
	char *delim;

	while(*start != '\0')
	{
		delim = find_delim(start);
		if(start+1 != delim)
		{
			unsigned len = delim - start;
			strrev_inplace(start, len);
		}

		start = delim+1;
	}

	return 0;
}
