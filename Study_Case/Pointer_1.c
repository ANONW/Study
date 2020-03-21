#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int number;
    int* pointer = &number;

    printf("请输入一个数字：");
    scanf("%d",&number);
    printf("\n变量值：%d\n储存在：%p\n",number,pointer);

    system("pause");
    return 0;
}