#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i,sum=0;
	int a[6];
	 float average;
	printf("enter the numbers whose average is to be calculated");
	 for(i=0;i<6;i++)
	  {
	  	scanf("%d",&a[i]);
	  	sum=sum+a[i];
	  }
	  printf("The total sun is: %d", sum);
	  average=(float)sum/6;
	  printf("the average of given numbers is %f",average);
	return 0;
}
