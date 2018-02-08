#include <stdio.h>
#include<conio.h>
void main()
{
	int n,r,a,sum=0;
	printf("Enter the integer:");
	scanf("%d",&n);
	a=n;
  while(a!=0)
{
	r=a%10;
	sum=sum*10+(r);
	a=a/10;
}
  if(n==sum)
{
	printf("Yes,The integer is Palindrome");
}
else
{
	printf("No,The integer is Not Palindrome");
}
	return 0;
}
