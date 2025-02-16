// Find a Any type of character

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char c;

	printf("Enter any character:>>\n");
	scanf("%c",&c);
	if(isupper(c))
		printf("It is UPPERCASE char.....!");
	else if(islower(c))
		printf("It is Lowercase char.....!");
	else if(isdigit(c))
		printf("It is DigiCase char.....!");
	else
		printf("It is Special char.....!");
	getch();
}