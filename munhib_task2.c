#include <Stdio.h>

int main ()
{
	int array[10];
	int even=0;
	int odd=0;
	
	printf ("Enter the Numbers -->");
	
	for (int i=0;i<10;i++)
	{
		scanf ("%d",&array[i]);
	}
	
	for (int j=0;j<10;j++)
	{
		if (array[j]%2==0)
		{
			printf ("%d is even number\n",array[j]);
			even =even+1;
		}
		
		else {
				printf ("%d is odd number\n",array[j]);
			odd =odd+1;
		
		}
	}
	
	printf ("Total Number of Even are-->%d\n",even);
	printf ("Total Number of Odd are-->%d",odd);
	
	
}