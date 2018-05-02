#include <func.h>
#include <stdio.h>

extern unsigned input_sz;

void get_user_input(char *user_input){
	fgets(user_input, input_sz, stdin);
	unsigned len = strlen(user_input) - 1;
	if(user_input[len] == '\n')
		user_input[len] = '\0';
}
