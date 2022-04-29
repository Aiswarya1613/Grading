#include<stdio.h>
main()
{
	int mark;
	printf("Enter your mark:");
	scanf("%d",&mark);
	if (mark>=85&&mark<=100)
	{
		printf("Your grade is 'A'");
	}
	else if(mark>=70&&mark<85)
	{
		printf("Your grade is 'B'");
	}
	else if(mark>=55&&mark<70)
	{
		printf("Your grade is'C'");
	}
	else if(mark>=40&&mark<55)
	{
		printf("Your grade is 'D'");
	}
	else 
	{
		printf("Your grade is 'F'");
	}
	return 0;
}
