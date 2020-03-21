#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// 运用“表驱动法”
int DAY(int year, int month); // 声明函数
bool YEAR(int year);

int main(void)
{
    int a, b;

    printf("请输入年份与月份（用‘.’隔开）：");
    scanf("%d.%d", &a, &b); //取值
    printf("\n共%d天哦！\n", DAY(a, b));
    system("pause");
    return 0;
}
int DAY(int year, int month) // 利用数组管理数据
{
    const int DAYS[12] = {31, YEAR(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return DAYS[month - 1];
}
bool YEAR(int year) // 利用_bool类型函数判断是否闰年
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}