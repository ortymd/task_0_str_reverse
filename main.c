#include <func.h>

int main()
{
	char *s1;
	get_user_input(s1);
	char len = strlen(s1);
	char *s2 = s1 + len;
	char *offset = s1 - 1;

	while( s2 != offset)
	{
		printf("%c", *s2);
		--s2;
	}

	return 0;
}
