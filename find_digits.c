/*find divisible digits
written by Janvi Agravat
this program reads one number and tells the number of digits present in that number
which divides the number perfectly*/

#include<stdio.h>
int main()
{
    int num, q, digit, og_num, terms, k;
    printf("Enter the number of test cases: ");
    scanf("%d", &terms);

    if(terms>0 && terms<=15)
    {
        for(k=1; k<=terms; k++)
        {
            printf("Enter the number: ");
            scanf("%d", &num);
            og_num = num;

            digit = 0;
            while(num>0)
            {
                q = num%10; //seperating the digits
                switch (q)
                {
                    case 0: //to handle when q=0
                        break;
                    default:
                        if (og_num%q == 0) //if digit is divisible by original number
                        {
                            digit++; //increase the number of digits everytime any digit is divisible
                        }
                }
                num = num/10;
                
            }
            printf("There are %d digits in this number which perfectly divides this number\n", digit);
        }
    }
    else
    {
        printf("The number of terms should be between 1 and 15");
    }
    return 0;
}