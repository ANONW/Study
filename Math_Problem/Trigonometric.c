//三角函数符号训练  Trigonometric symbol training
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Fun_type(void);
int Angle(void);
void Judge(int t, int a, int ans, int j);
void YES(void)
{
    printf("正确！");
}
void NO(void)
{
    printf("错误！");
}

int main(void)
{
    printf("请判断下列三角函数值的正负（有具体值请打出，正为2，负为3,无为.）\n");
    for (;;)
    {
        int F, A, J, an;
        F = Fun_type();
        A = Angle();
        J = scanf("%d", &an);

        Judge(F, A, an, J);
    }
    return 0;
}

int Fun_type(void) //随机输出三角函数
{
    srand(time(NULL));
    int F = rand() % 2 + 1;
    switch (F)
    {
    case 1:
        printf("\nsin");
        break;
    case 2:
        printf("\ncos");
        break;
    default:
        printf("\ntan");
        break;
    }
    return F;
}

int Angle(void) //随机输出角度
{
    srand(time(NULL));
    int A = rand() % 360 + 1;
    printf("%d°\n", A);
    return A;
}

void Judge(int t, int a, int ans, int j)
{
    if (a < 90)
    {
        if (ans == 2)
        {
            YES();
        }
        else
        {
            NO();
        }
    }
    else if (a == 90)
    {
        if ((t == 1 && ans == 1) || (t == 2 && ans == 0) || (t == 3 && j == 0))
        {
            YES();
        }
        else

        {
            NO();
        }
    }
    else if (a > 90 && a < 180)
    {
        if ((t == 1 && ans == 2) || ((t == 2 || t == 3) && ans == 3))
        {
            YES();
        }
        else
        {
            NO();
        }
    }
    else if (a == 180)
    {
        if (((t == 1 || t == 3) && ans == 0) || (t == 2 && ans == -1))
        {
            YES();
        }
        else
        {
            NO();
        }
    }
    else if (a > 180 && a < 270)
    {
        if (((t == 1 || t == 2) && ans == 3) || (t == 3 && ans == 2))
        {
            YES();
        }
        else
        {
            NO();
        }
    }
    else if (a == 270)
    {
        if ((t == 1 && ans == -1) || (t == 2 && ans == 0) || (t == 3 && j == 0))
        {
            YES();
        }
        else
        {
            NO();
        }
    }
    else if (a > 270 && a < 360)
    {
        if (((t == 1 || t == 3) && ans == 3) || (t == 2 && ans == 2))
        {
            YES();
        }
        else
        {
            NO();
        }
    }
    else if (a == 360)
    {
        if (((t == 1 || t == 3) && ans == 0) || (t == 2 && ans == 1))
        {
            YES();
        }
        else
        {
            NO();
        }
    }
}