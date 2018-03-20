#include<stdio.h>
#include<conio.h>
void main()
{
char ch[100];
int i;

printf("Enter string:");
for(i=0;i<100;i++)
{
scanf("%c",&ch[i]);
if(ch[i]=='k')
{
break;
}
}
for(i=0;ch[i]!='\0';i++)
{
printf("%c",ch[i]);
}

}
