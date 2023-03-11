#include <stdio.h>
int main ()
{
	int number;
	int sum=0;
	int factorial;
	
	
printf ("Enter the number --->");
scanf ("%d", &number);

for (int i=1 ; i <=number; i++ ){
	factorial =1;
	for (int n = i;n>=1; n--){
		factorial = factorial * n;
	}

	printf ("------------\n");
	printf ("%d  =  %d\n ", i,factorial);

	sum = sum + factorial;
}
printf ("\nSum  = %d",sum);

}