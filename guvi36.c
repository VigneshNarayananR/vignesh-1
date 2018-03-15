#include<stdio.h>
#include<string.h>
void main()
{
    char a[2000];
    int s,e=0,f;
    printf("enter the string:");
    gets(a);
    for(s=0;a[s]!='\0';s++)
    {
        if((a[s]>='0')&&(a[s]<='9'))
        {
            e++;
        }
    }
    printf("the number of words:%d",e);
}
