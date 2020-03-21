#include <stdio.h>
#include <math.h>

void FR(double a, double b, double c);

int main(void)
{
    for (;;)
    {
        double a, b, c;
        printf("请输入各项的系数（按次数由高到低）：");
        scanf("%lf,%lf,%lf", &a, &b, &c);
        FR(a, b, c);
    }
    return 0;
}

void FR(double a, double b, double c)
{
    double n = (b * b) - (4.0 * a * c);
    double p = -b / (2.0 * a);
    if (n > 0)
    {
        double q = (sqrt(n)) / (2.0 * a);
        printf("\n该方程有两个实数根分别为%lf，%lf\n", p + q, p - q);
    }
    else if (n == 0)
    {
        printf("\n该方程有一个实数根，值为%lf\n", p);
    }
    else
    {
        printf("\n该方程无实数根。\n");
    }
}