#ifndef FUNC_H
#define FUNC_H

extern unsigned strlen(const char*);
extern int printf(const char*,...);

void get_user_input(char *user_input);
int strrev_inplace(char *str, unsigned len);	// reverses len of items in str inplace
char* find_delim(char *str);
int not_delim(char *check);

#endif
