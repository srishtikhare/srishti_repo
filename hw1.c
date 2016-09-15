#include "hw1.h"
#include <stdio.h>

char reverse_string(char *str, int length)
{
int i,r=0;
char rstr[50]; 
char *revstr = rstr;

for(i=length;i>=0;i--)
{
*(revstr+r)= *(str+i); 
r++;
}
*(revstr+r+1)='\0';
printf("%s\n",rstr);
}
