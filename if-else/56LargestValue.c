#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Entar Value A : \n");
	scanf("%d",&a);
	printf("Enter Value B : \n");
	scanf("%d",&b);
	printf("Enter Value C : \n");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is Big Value.");
		}
		else
		{
			printf("\nC is Big Value.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nB is Big Value.");
		}
		else
		{
			printf("\nC is Big Value.");
		}
	}
	getch();
}