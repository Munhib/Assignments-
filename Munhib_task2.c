#include <stdio.h>
int main ()
{
int row;
	printf ("Enter the number of rows --> ");
	scanf ("%d",&row);
	
	for (int i=row; i>=1;i--)
	{
		for (int j=1; j<=row; j++)
		{
          if (i>j)
          {
          	printf (" ");
          	
		  }
		  else {
		  	printf ("*");
		  }
		}
		printf ("\n");
	}
}