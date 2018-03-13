#include<stdio.h>
void main()
{
int h1,h2,m1,m2,h,m,t;
printf("first");
scanf("%d%d",&h1,&m1);
printf("second");
scanf("%d%d",&h2,&m2);
t=((h1*60)+m1)-((h2*60)+m2);
h=t/60;
m=t%60;
printf ("Ans %d %d",h,m);
    
}
