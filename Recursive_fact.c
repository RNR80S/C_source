#include<stdio.h>
#include<conio.h>

void main ()

{
    int x,y;

    printf("Enter a number for it's factorial:");
    scanf("%d",&x);

    y = factrecur(x);

    printf("Factorial for %d is %d",x,y);
   getch();
}

    factrecur(int x)
    {
        int f;
        
        if (x==1)
            return 1;                      /*Most important point to remember is that return 
                                            statement returns the control to the calling function, 
                                            and not necessarily the main
                                            function. In this case the calling function
                                            is the function itself, that's why it stays in the f
                                            unction even when return 1 is hit.   
                                            f(3) returns 3*f(2) here, f(2) then returns 2*f(1)
                                            which makes it 3*2*f(1). */                                            


        else
            f = x*factrecur(x-1);    
        
        return f;
    }