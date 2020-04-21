#include <stdio.h>
#include <string.h>

int main(){
    int k=0;
   char *str="Nguyen van Thuan";
   char *str3="Thuan";
   char str2[100][100];
   
   for (int i=0;i<strlen(str);i++){
       str2[k][i]=str[i];
   }
   k++;
    for (int i=0;i<strlen(str3);i++){
       str2[k][i]=str3[i];
   }
    //str2[0][0]=str[1];
   printf("%s\n", str2[0]);
   printf("%s", str2[1]);
    return 0;
}