#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age; //创建变量

    printf("请输入您的年龄：");   //
    scanf("%d", &age);          //读取数据
    printf("\n结论：");         //

    if (age < 18) //逻辑判断
    {
        printf("未成年\n\n");
    }
    else
    {
        if (age < 30)
        {
            printf("成年\n\n");
        }
        else
        {
            if (age < 45)
            {
                printf("中年\n\n");
            }
            else
            {
                printf("老年\n\n");
            }
        }
    }

    system("pause");
    return 0;
}