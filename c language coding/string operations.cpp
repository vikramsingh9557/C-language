#include<stdio.h>
#include<string.h>

int main()
{
char s1[30];
char s2[30];
gets(s1);
gets(s2);


printf(" length of string - %d\n",strlen(s1));
printf(" length of string - %d\n",strlen(s2));
printf(" join two string- %s \n",strcat(s1,s2));
printf(" uppercase - %s\n",strupr(s1));
printf(" lowercase - %s\n",strlwr(s1));
printf(" compare two strings = %d\n",strcmp(s1,s2));
return 0;


}
