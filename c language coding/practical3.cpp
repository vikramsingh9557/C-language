#include<stdio.h>
 #include<conio.h> 
 #include<string.h>
  #include<ctype.h>
   #include<stdlib.h>
   int main()
{
int i,j,flag=1,len;
 char str[10];
 
puts("Enter the string :: "); 
gets(str);
len=strlen(str); 
for(i=0,j=1;i<len;i++)
{
if(isdigit(str[j]))
{
flag=0;
 break;
}
else if(isalpha(str[i]))
{
	{
	
flag++;
 continue;
}
if(isalnum(str[i]))
{
flag++;
 continue;
}
else if(!isdigit(str[i]))
{
flag=0;
 break;
}
else 
flag++;
 
}
else if(!isalnum(str[i]))
{
flag=0; 
break;
}
}

if(flag==0)
puts("Not Identifier"); 
else
 puts("Identifier");
 getch();
}
