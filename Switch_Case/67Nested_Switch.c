// Nested switch case example

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int choice,ch1,ch2;
	printf("\n1.Pen \n2.Fruits");
	printf("\nEnter value of choice:>>");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			printf("\n1.Micro \n2.Renold \n3.Cello:");
			printf("\nEnter the value of Ch1:>>\n");
			scanf("%d",&ch1);
			switch(ch1)
			{
				case 1:
				{
					printf("\nMicro");
					break;
				}
				case 2:
				{
					printf("\nRenold");
					break;
				}
				case 3:
				{
					printf("\nCello");
					break;
				}
				default:
				{
					printf("Invalid case");
				}
			}
			break;
		}
		case 2:
		{
			printf("\n1.Mango \n2.Orange \n3.Pineple");
			printf("Enter the value of Ch2:>>\n");
			scanf("%d",&ch2);
			switch(ch2)
			{
				case 1:
				{
					printf("\nMango");
					break;
				}
				case 2:
				{
					printf("\nOrange");
					break;
				}
				case 3:
				{
					printf("\nPineple");
					break;
				}
				default:
				{
					printf("Invalid case");
				}
			}
			break;
		}
		default:
		{
			printf("Invalid Choice");
		}
	}
	getch();
}