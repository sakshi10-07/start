#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int r,n;
 printf("enter any 5 digit number.");
 scanf("%d",&n);
  while(n>0)
  {
  	a=n%10;
  	r=r*10;
  	r=r+a;
  	n=n/10;
  }
  printf("%d",r);
 return 0; 
}
