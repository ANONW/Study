#include <stdio.h>
void ANGLE(double a_angle);
const int CIRCUMFERENCE = 360;
//输入一个角度数值，返回一个0～360的等终边角的度数值

int main(void)
{
    double a_angle;

    while (1)
    {
        printf("\n请输入一个度数：");
        scanf("%lf", &a_angle);
        ANGLE(a_angle);
    }

    return 0;
}

void ANGLE(double angle)
{
    if (angle >= 0)
    {
        while (angle >= 360)
        {
            angle -= CIRCUMFERENCE;
        }
        printf("\n常用等终边角的度数 = %.3lf\n", angle);
    }
    else
    {
        while (angle <= 360)
        {
            angle += CIRCUMFERENCE;
        }
        printf("\n常用等终边角的度数 = %.3lf\n", angle);
    }
}