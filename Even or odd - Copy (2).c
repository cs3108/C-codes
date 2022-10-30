#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter the n value\n");
	scanf("%d",&n);
	if (n%2==0)
	{
		printf("n is even");
	}
	else
	{
		printf("n is odd");
	}
	getch();
}
