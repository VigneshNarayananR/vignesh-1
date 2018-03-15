#include<stdio.h>
#include<string.h>
void main()
{
    char a[200];
    int s,d=1,f;
    printf("enter the string:");
    gets(a);
    f=strlen(a);
    for(s=0;s<=f;s++)
    {
        if(a[s]=='.')
        {
            d=d+1;
        }
    }
    printf("the number of words:%d",d);
}
