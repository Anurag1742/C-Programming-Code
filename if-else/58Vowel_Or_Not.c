//  check whether the given character is Vowel or not

#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;

	printf( " Enter any Character : " );
	scanf( "%c", &ch );
		
	if( ( ch == 'a' ) || ( ch == 'e' ) || ( ch == 'i' ) || 
		( ch == 'o' ) || ( ch == 'u' ) || ( ch == 'A' ) ||   
		( ch == 'E' ) || ( ch == 'I' ) || ( ch == 'O' ) ||
		( ch == 'U' ) )
	{
		printf( "\n Character is a Vowel." );
	}
	else
	{
		printf( "\n Character is not a Vowel." );
	}

	getch();
	return 0;
}