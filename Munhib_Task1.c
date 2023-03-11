#include <Stdio.h>
int table(int n);
int main ()
{
	int number;
	char check;
	do {
		printf ("\n Enter the Number to show its table -->");
		scanf (" %d",&number);
		
		table(number);
		
	printf ("Do you want to print tanle Number? Press Y/N-->");
	scanf (" %c",&check);	
	
	if (check !='Y' && check != 'y' && check != 'N' && check != 'n')
	printf ("Invalid Input");
	
}
	while (check =='Y' || check == 'y');

		

	return 0;
}

int table(int n)
{


	for (int i=1; i<=10;i++)
		{
			printf ("%d x %d = %d\n", n , i, n*i);
		}
}