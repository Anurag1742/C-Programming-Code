// Multiple choise in Switch case

#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,n,i,basic,hra,da,pf,netsal,a,b,c;
	int choice;
	printf("\n1.Interest \n2.netsal");
	printf("\nEnter the value of choice:>>\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			printf("Enter the value P:\n");
			scanf("%f",&p);
			printf("Enter the value R:\n");
			scanf("%f",&r);
			printf("Enter the value N:\n");
			scanf("%f",&n);
				i=p*r*n/100;
			printf("Interest::%f",i);
			break;
		}
		case 2:
		{
			printf("Enter the value of basic:\n");
			scanf("%f",&basic);
			printf("Enter the value of A:\n");
			scanf("%f",&a);
			printf("Enter the value of B:\n");
			scanf("%f",&b);
			printf("Enter the value of C:\n");
			scanf("%f",&c);
				hra=basic*a;
				da=basic*b;
				pf=basic*c;
				netsal=basic+hra+da+pf;
			printf("Net Salary:%f",netsal);
			break;
		}
		default:	
		{
			printf("Invalid Choice");
		}	
	}
	getch();
}