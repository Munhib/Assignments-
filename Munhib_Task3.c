#include <stdio.h>
int main (){
	int row;
	printf ("Number from 1 till 50 will be printed.\n");
	printf ("Enter the Number of row   ");
	scanf ("%d",&row);
	
	for (int i=1; i<=50;i++)
	{
		printf ("%02d\t ",i);
		if (i % row ==0){
			printf ("\n");
		}
	}
}