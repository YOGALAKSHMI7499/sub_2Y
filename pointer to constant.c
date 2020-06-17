#include <stdio.h>

int main()
{
    int num = 10;
    const int * ptr_const;
    ptr_const = &num;
    num = 20;


    printf("Num = %d\n", num);
    printf("Num = %d\n", *ptr_const);

    return 0;
}
