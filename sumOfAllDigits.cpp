#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int a,b,c,d,e;
	int sum;
 printf("enter any 5 digits number");
 scanf("%d",&n);
 a=n%10;
 n=n/10;
 b=n%10;
 n=n/10;
 c=n%10;
 n=n/10;
 d=n%10;
 n=n/10;
 e=n%10;
  sum=a+b+c+d+e;
  printf("%d",sum);
 return 0;	
}
