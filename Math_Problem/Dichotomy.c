#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void DE_F(void);
double F(double x);
void DIC(void);

double COE[3];

int main(void)
{
    for (;;)
    {
        DE_F();
        DIC();
    }

    return 0;
}

void DE_F(void)
{
    int n;
    printf("请输入各项的系数（次数从低到高，用‘，’隔开）：\n");
    scanf("%lf,%lf,%lf", &COE[0], &COE[1], &COE[2]);
}

double F(double x)
{
    double y = COE[2] * x * x + COE[1] * x + COE[0];
    return y;
}

void DIC(void)
{
    double l, r, acc, m; //l->左值  r->右值  Accuracy->精确度
    printf("请输入初始区间和精确度：\n");
    scanf("%lf,%lf,%lf", &l, &r, &acc);
    //double i = F(l) * F(r);
    if (F(l) * F(r) <= 0)
    {
        while (fabs(l - r) >= acc)
        {
            m = (l + r) / 2.0;
            if (fabs(F(m)) < acc)
            {
                break;
            }
            else if (F(l) * F(m) < 0)
            {
                r = m;
            }
            else if (F(r) * F(m) < 0)
            {
                l = m;
            }
        }
    }
    else
        printf(" 该区间内无零点！");
    printf("零点是%lf\n", m);
}