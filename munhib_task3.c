#include <stdio.h>
#include <Stdbool.h>
#include <string.h>

int password_check (char password[]);

int main ()
{
	char name [20];
	char password [8];
	int check;
	
	printf ("Enter your name--->");
	scanf ("%s",&name);
	
	printf ("Enter your pass-->");
	scanf ("%s",&password);
	
	
	check = password_check (password);
	
	while (true)
	{
		if (check==1)
        {
            printf("Please Enter 8 values only.");
            scanf(" %s",password);
            check =password_check(password);
        }
        else if(check==2)
        {
            printf("Please Input Atleast 1 Special Character(%%, !, *, ^, &)\n Please Re-enter your password");
            scanf(" %s",password);
            check =password_check(password);
        }
        else if(check==0)
        {
 
            break;
                }
                

                
            }
            
            printf ("Your password has been set!!");
        }
        
    
	


int password_check(char password[])
{
	int check1;
	int length = strlen(password);
	int check2;
	
	
	for(int i=0;i<8;i++) 
    {
    check1=password[i];
        //if(check2=='' || check2==42 || check2==94 || check2==33 || check2==38)
        if(check1=='%' || check1=='!' || check1=='*' || check1=='^' || check1=='&')
        
		{
            check2 =0;
        }
        else
        {
            check2 =2;
        }
    }
    if (length<8 || length>8)
    {
        check2 = 1;
    }
    return check2;
}