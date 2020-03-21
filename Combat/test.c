#include <stdio.h>

void O_T(void);
void TH(void);

int main(void)
{
    O_T();
    TH();
    return 0;
}

void O_T(void)
{
    printf("one\n");
    printf("two\n");
}

void TH(void)
{  
    printf("three\n");
}