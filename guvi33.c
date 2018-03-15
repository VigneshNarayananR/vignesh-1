#include<stdio.h>
#include<string.h>
void main()
{
    char a[545];
    int s,d=1,f;
    printf("enter the string:");
    gets(a);
    for(s=0;s!='\0';s++)
    {
        if(a[s]==' ')
        {
            d++;
        }
    }
    printf("the number of words:%d",d);
}
