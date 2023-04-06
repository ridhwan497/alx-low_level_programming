------------------ RECURSION ----------------------------

Recursion is a special way of nesting functions, where a function calls itself inside it. We must have certain conditions in the function to break out of the recursion otherwise it will call itself infinitely. Imagine when screensharing in a videocall and you go to to that window of the videocall while screensharing... there is an infinite screenshare of the videocall :)

--> Recursion:

function1()
{   
    // function1 body
    function1();
    // function1 body
}

--> Example of a recursive function: (Factorial of a number) i got from studytonight.com

#include <stdio.h>

int factorial(int x); //declaring the function

void main()
{
    int a, b;
    
    printf("Enter a number...");

    scanf("%d", &a);

    b = factorial(a); //calling the function named factorial

    printf("%d", b);
}

int factorial(int x) //defining the function

{
    int r = 1;

    if (x == 1)
    {
        return 1;
    }
    else 
    {
        r = x*factorial(x-1); //function calls itself
    }
    
    return r;
}

