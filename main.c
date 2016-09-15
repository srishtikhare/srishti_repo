#include <stdio.h>

char reverse_string(char *str, int length);

int main(void)
{
char strn1[50]= "This is a string.";
char strn2[50]= "some NUMmbers12345";
char strn3[50]= "Does it reverse \n\0\t correctly?";
int a,len1=0,len2=0,len3=0; 

for(a=0;strn1[a]!='\0';a++)
{
len1++;
}
reverse_string(strn1,len1-1); 

for(a=0;strn2[a]!='\0';a++)
{
len2++;
}
reverse_string(strn2,len2-1);

for(a=0;strn3[a]!='\0';a++)
{
len3++;
}
reverse_string(strn3,len3-1);

return 0;
}

