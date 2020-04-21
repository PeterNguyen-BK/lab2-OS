#include "readline.h"
#include <stdio.h>
#include <string.h>

int read_line(char *str){
	size_t size=32;
	int check=0;
	check=getline(&str, &size, stdin);
	if (check!=EOF){
		int length=strlen(str);
		//check=getline(&str, &size, stdin);
		return length;
	}
	else return -1;
}

