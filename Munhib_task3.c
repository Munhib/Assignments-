#include <stdio.h>
int main ()
{
	int number;
	printf ("Enter the number --->");
	scanf ("%d",&number);
	
	for (int i= 1; i<=number; i++)
	{
		for (int n= number; n >=i;n--)
		{
			printf ("%d  ",n);
		}
		printf ("\n");
	}
}