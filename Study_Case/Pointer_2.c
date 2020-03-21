#include <stdio.h>
#include <stdlib.h>

int *POINTER(void);

int main(void)
{
    int *p = POINTER();
    int po = *p;
    printf("%p\n",p);
    printf("%d\n",po);
    system("pause");
    return 0;
}
int *POINTER(void)
{
    int number = 1;
    int *p = &number;
    printf("%p__%d\n",p,*p);
    return p;
}
