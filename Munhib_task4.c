#include <stdio.h>

int main ()
{
	char character;
	int rows;
	
	printf ("Enter a Character--->");
	scanf ("%c",&character);
	
	printf ("Enter Number of rows --->");
	scanf ("%d",&rows);
	
	for (int i=1; i<=rows; i++)
	{
		for (int n= rows; n>= i; n-- )
		{
			printf ("%c",character);
		}
		printf ("\n");
	}
	
}