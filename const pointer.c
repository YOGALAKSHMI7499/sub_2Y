 //constant pointer :

//constant pointer is a pointer variable whose value cannot be altered throughout the program.
//It does not allows modification of its value,
//however you can modify the value pointed by a pointer.


#include <stdio.h>

int main()
{
    int num1, num2;


    int * const const_ptr = &num1;
    *const_ptr = 10;

    printf("Num1 = %d\n", num1);
    printf("Num1 = %d\n", *const_ptr);

    return 0;
}

