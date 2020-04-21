#include <stdio.h>
#include "findsubstr.h"
#include <string.h>

int find_sub_string(const char *str, const char *sub){
	if (strstr(str, sub)==NULL)
		return -1;
	else return (strstr(str, sub)-str);
}

