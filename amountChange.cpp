#include<stdio.h>
#include<conio.h>
int main()
{
	int amount;
	int  notes_1,notes_50,notes_10,notes_2,ru_1;
	printf("enter the desired amount. ");
	scanf("%d",&amount);
	notes_1=amount/100;
	amount=amount%100;
	notes_50=amount/50;
	amount=amount%50;
	notes_10=amount/10;
	amount=amount%10;
	notes_2=amount/2;
	amount=amount%2;
	ru_1=amount/1;
	printf("the denominations are-%d\n%d\n%d\n%d\n%d",notes_1,notes_50,notes_10,notes_2,ru_1);
	return 0;
}

