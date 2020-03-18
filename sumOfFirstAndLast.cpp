#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum;
	int a,b,c,d;
	printf("enter a 4 digit number");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	sum=a+d;
	printf("%d",sum);
 return 0;
}
