#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	int t1=0,t2=1;
	int nextTerm=t1+t2;
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	printf("Fibonacci Series:\n%d\n%d",t1,t2);
	for(i=3;i<=n;++i)
	{
		printf("\n%d",nextTerm);
		t1=t2;
		t2=nextTerm;
		nextTerm=t1+t2;
	}
	getch();
}
