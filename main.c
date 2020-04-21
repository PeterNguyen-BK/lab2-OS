#include <stdio.h>
#include "findsubstr.h"
#include "readline.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
	char* inputStr;
	inputStr=(char*) malloc(100 * sizeof(char));
	int k=0;
	char result[1024][100];
	int check1=0;
	bool check=false;
	while (check1!=-1){
		check1=read_line(inputStr);
		if (find_sub_string(inputStr, argv[1])!=-1 && check1!=-1){
			for (int i=0;i<strlen(inputStr);i++){
				result[k][i]=inputStr[i];
			}
			check=true;
			k++;
		}
	}
	if (check){
		printf("Line contain string:\n");
		for (int i=0;i<k;i++){
			printf("%s", result[i]);
		}
	}
	else printf("Not found");
	free(inputStr);
	return 0;
}
