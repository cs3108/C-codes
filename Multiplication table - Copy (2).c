#include<stdio.h>
#include<conio.h>
main()
{
	int n,product,num,last;
	printf("Enter the value\n");
	scanf("%d",&n);
	printf("Enter the last value\n");
	scanf("%d",&last);
	num=1;
	while( num<=last)
	{
		product=num*n;
		printf("%d x %d=%d\n",n,num,product);
		num=num+1;
	}
}
