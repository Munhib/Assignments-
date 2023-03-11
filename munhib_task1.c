#include <stdio.h>

int main ()
{
	int maximum=0;
	int minimum=100;
	float average;
	int marks[10];
	float sum=0;
	

	
	for (int i=0;i<10;i++)
	{
			printf ("Enter the Marks -->");
			scanf ("%d",&marks[i]);
			
	}
	
	for (int j=0;j<10;j++)
	{
	if (marks[j]>maximum)
	{
		maximum=marks[j];
	}
	if (marks[j]<minimum)
	{
		minimum = marks[j];
	}
	
	sum= sum + marks[j];
	}
	
	average= sum/10;
	
	printf ("\nMaximum Marks are %d\n",maximum);
	printf ("Minimum Marks are %d\n",minimum);
	printf ("Average Marks are %.2f",average);
}