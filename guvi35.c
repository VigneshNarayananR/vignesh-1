#include<stdio.h>
#include<string.h>
void main()
{
    char a[200];
    int s,d=0,f;
    printf("enter the string:");
    gets(a);
    for(s=0;a[s]!='\0';s++)
    {
        if((a[s]>='0')&&(a[s]<='9'))
        {
            d++;
        }
    }
    printf("the number of words:%d",d);
}
