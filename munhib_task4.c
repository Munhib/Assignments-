#include<stdio.h>
int main()
{
 int numbers[15];
 int count;

 printf("Enter the Numbers:");
 for(int i=0;i<15;i++ )
    {
     printf("number %d:",i);
     scanf("%d", &numbers[i]);
    }
printf("Unique elements and the unique numbers are:");
for(int i=0;i<15;i++)
   { 
    count=0;
    for(int j=0,k=15;j<15+1;j++)
       {
        if(i!=j)
         {
          if(numbers[i]==numbers[j])
           {
            count++;
           }
       }
   }
   if(count==0)
   {
    printf("elements are %d= %d, ", i,numbers[i]);
   }
 }
 printf("\n");  
}
