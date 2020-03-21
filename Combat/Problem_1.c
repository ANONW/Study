#include <stdio.h>
#include <stdlib.h>

int Prime(int number);

int main(void)
{
    int result;

    printf("n=1,2,3,4,5时的值：\n");

    for (int n = 1; n <= 5; n++)
    {
        result = n * n - 3 * n + 7;
        printf("result = %d\t", result);
        if (Prime(result) == 1)
            printf("是质数。\n");
        else
            printf("是合数。\n");
    }

    system("pause");
    return 0;
}

int Prime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
        else
            return 1;
    }
}