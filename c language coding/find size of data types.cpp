#include<stdio.h>
#include<string.h>

int main()
{
char s1[30];
char s2[30];
gets(s1);
gets(s2);

printf("%s\n",strcmp(s1,s2));
printf("%s\n",strlwr(s1));
printf("%s\n",strcat(s1,s2));
printf(" upper case of string =%s\n",strupr(s2));

return 0;


