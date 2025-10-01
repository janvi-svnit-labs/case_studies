/*filling jars
written by Janvi Agravat
this program calculates the average number of candies per jar after M number of operations*/

#include <stdio.h>
 int main()
{
    int n, m;
    printf("Enter the number of jars(N), and the number of operations(M) to be performed: ");
    scanf("%d %d", &n, &m);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int a, b, k;
        printf("Enter the a, b, k values: \n");
        scanf("%d %d %d", &a, &b, &k);
        sum = sum + (b - a + 1)*k;
    }
    float average = sum*(1.0)/n;
    printf("The average candies: %f", average);
    return 0;
}