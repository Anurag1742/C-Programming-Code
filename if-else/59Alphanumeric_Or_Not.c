// check whether the given character is Alphanumeric or not

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{ 
  	int ch;

 	printf( "\n Enter a character ::: " );
  	ch = getchar();

  	if( isalnum( ch ) )
	{
    	  printf( "\n It is alpha-numeric character.\n" );
	}
  	else
	{
    	  printf( "\n This is not an alpha-numeric character.\n" );
	}
  	getch();
	return 0;
}