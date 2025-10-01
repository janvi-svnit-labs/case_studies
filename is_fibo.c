/*is fibo
by Janvi Agravat
this program reads one number and tells whether that number is a fibonacci number or not*/

#include<stdio.h>
#include<process.h>
int main()
{
    int terms, k;
    long int n, term=0, i=0, j=1;
    printf("Enter the number of test cases: ");
    scanf("%d", &terms);
    for(k=1; k<=terms; k++) //to enter desired number of terms
    {
        printf("Enter the number you want to check: ");
        scanf("%ld", &n);
        if(n>=0) //error proofing
        {
            switch (n)
            {
                case 0: //to handle when the entered value is 0
                    printf("Is Fibo");
                    break;
                default:
                    while(term<n) //to calculate the terms till the entered term arrives
                    {
                        term = i+j;
                        i=j;
                        j=term;
                    }
                    if(term == n)
                    {
                        printf("Is Fibo\n");
                    }
                    else
                    {
                        printf("Is not Fibo\n");
                    }

            }
        }
        else
        {
            printf("Enter valid number");
        }
    }
        
    return 0;
}