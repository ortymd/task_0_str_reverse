extern unsigned strlen(const char*);
extern int printf(const char*,...);

int main()
{
	char *s1 = "abcd";
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

