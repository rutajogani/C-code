#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = number; i <= 1; i--)
    {
        for (int j = number; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}