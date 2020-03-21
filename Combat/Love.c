#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define I 20
#define R 340

int main()
{
    int i, j, e, a;

    for (i = 1, a = I; i < I / 2; i++, a--)
    {
        for (j = (int)(I - sqrt((double)(I * I - (a - i) * (a - i)))); j > 0; j--)
            printf(" ");
        for (e = 1; e <= 2 * sqrt((double)(I * I - (a - i) * (a - i))); e++)
            printf("⚝");
        for (j = (int)(2 * (I - sqrt((double)(I * I - (a - i) * (a - i))))); j > 0; j--)
            printf(" ");
        for (e = 1; e <= 2 * sqrt((double)(I * I - (a - i) * (a - i))); e++)
            printf("⚝");
        printf("\n");
    }
    
    for (i = 1; i < 80; i++)
    {
        if (i == 25)
        {
            printf("         I LOVE YOU!         ");
            i += 30;
        }
        printf("⚝");
    }

    printf("\n");
    
    for (i = 1; i <= R / 2; i++)
    {
        if (i % 2 || i % 3)
            continue;
        for (j = (int)(R - sqrt((double)(R * R - i * i))); j > 0; j--)
            printf(" ");
        for (e = 1; e <= 2 * (sqrt((double)(R * R - i * i)) - (R - 2 * I)); e++)
            printf("⚝");
        printf("\n");
    }
    //以下是以time做时间变量来控制变色
    //这种超耗cpu的算法代替
    //最好不要这么写 以下代码仅供娱乐
    long time;
    for (;;)
    {
        system("color b");
        for (time = 0; time < 99999999; time++)
            ;
        system("color c");
        for (time = 0; time < 99999999; time++)
            ;
        system("color 9");
        for (time = 0; time < 99999999; time++)
            ;
    }
    return 0;
}