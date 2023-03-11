#include <Stdio.h>

int main ()
{
	int row;
	printf ("Enter the number of Rows -->");
	scanf ("%d",&row);
	
	int column=1;
	
	for (int i=1; i<row*2;i++)
	{
		for (int n=1;n<=column;n++)
		{
			printf ("*");
		}
		if (i < row)
		{
			column++;
		}
		else 
		{
			column--;
		}
		printf ("\n");
	}
}