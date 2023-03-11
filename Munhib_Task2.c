#include<stdio.h>
#include<stdbool.h>

int prime_num(int n);
int main ()

{
	int last,first;
	printf ("Enter the Starting Number ---->");
	scanf ("%d",&first);
	
	printf ("Enter the Final number ---->");
	scanf ("%d",&last);
	
	printf("Prime Number between %d to %d are:\n ",first,last);
	
	for(int i=first+1;i<last;i++){
		if(prime_num(i)){
			
			printf ("%d ",i);
		}
	}
	return 0;
}
	
	
int prime_num(int n){

bool prime_check=true;

	if(n==1 || n==0){
		prime_check= false;
	}
	for (int i=2; i<n;i++ )
	{
		if(n % i==0)
		{
			prime_check=false;
		    break;
		}

	}
	return prime_check;
}	

	