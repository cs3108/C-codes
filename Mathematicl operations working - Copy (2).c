#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,addition,subtraction,multiplication,division;
	float mod;
	printf("Enter the a and b values\n");
	scanf("%d%d",&a,&b);
	addition=a+b;
	subtraction=a-b;
	multiplication=a*b;
	division=a/b;
	mod=a%b;
	printf(" addition=%d\n",addition);
	printf("subtraction=%d\n",subtraction);
	printf("multiplication=%d\n",multiplication);
	printf("division=%d\n",division);
	printf("mod=%f",mod);
	getch();
	
	
}
	
