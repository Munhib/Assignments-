#include <stdio.h>
void attandance (float  classesAttended, float  classesTotal);

int main (){
	
	float total_classes;
	float class_attended;
	
	printf ("Enter your number of classes scheduled by instructor during the whole semester -->");
	scanf ("%f", & total_classes);
	
	printf ("and total number of classes you attended during the whole semester -->");
	scanf ("%f", &class_attended);
	
	attandance (class_attended,total_classes);
}

void attandance (float classesAttended   , float classesTotal )
{
	float percent = ( classesAttended/ classesTotal ) * 100;
	
	if (percent >= 80 && percent<=100)
	{
		printf ("Your Attandance is %.1f %, You can appear in your exam",percent);
		
	}
	
	else if (percent <80 && percent >=0){
		printf ("Your Attandance is %.1f, You cannot appear in your exam",percent);
	}
	
	else 
	{
		printf ("Enter the Valid Value");
	}
}