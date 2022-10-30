#include<stdio.h>
#include<conio.h>
main()
{
	int physics,chemistry,biology,mathematics,computer,total;
	float avg;
	printf("Enter five subjects marks\n");
	scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer);
     total=physics+chemistry+biology+mathematics+computer;
     avg=total/5.0;
	  if (avg>=90)
	 {
	 	printf("A grade");
	 	
	 }
	 else if (avg>=80)
	{
		printf("B grade");
	}
	else if (avg>=70)
	{
		printf("C grade");
	}
	else if (avg>=60)
	{
		printf("D grade");
	}
	else if (avg>=40)
	{
		printf("E grade");
	}
	else 
	{
		printf("F grade");
	}
	getch();
	}
