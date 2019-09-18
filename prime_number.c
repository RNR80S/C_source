/* this program keeps taking input from the user until the user enters 0, and tells if the number entered 
is a prime number or not. the first two ifs take the negative and 2 exceptions.
*/

# include <stdio.h>


int main ()

{
    int num,flag;

   do
    {
       
        num=flag =0;
           printf("\nenter any number");
            scanf("%d",&num);
        if (num<=1)
            
               printf("Number is not a prime number");
              
            
    else if (num==2)
            
               printf("number is a prime number");
                 
    else
        {
            for (int i=2;i<=num/2;i++)
                {
                    if (num%i == 0)
                     {flag=1;
                    break;}      
                 }
           
    if (flag)
    printf("Number is not a prime number");
    else 
    printf("number is a prime number");

        } 
       
    }while (num);
}