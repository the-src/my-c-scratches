#include<stdio.h>

int main() {
    // Pointer is a special type of variable that is capable of storing a memory address.
    // It is a special variable, not a normal variable.
    // It points to a memory location where the first byte of data is stored.
    // Base address
    int a = 10;
    int *p = &a;
    printf("%d\n", *p); // 10
    printf("%d\n", p); // 0x7fff5fbff8b8
    printf("%d\n", &a); // 0x7fff5fbff8b8
    printf("%d\n", &p); // 0x7fff5fbff8b8
    printf("%d\n", &*p); // 0x7fff5fbff8b8

    // General syntax of declaring a pointer:
    // data_type *pointer_name;
    // int *p; --> p is a pointer to an integer.
    // char *p; --> p is a pointer to a character.

    // How to initialize a pointer:
    // data_type *pointer_name = &variable_name;
    // Before using a pointer, you must initialize it.
    int x = 5;
    int *ptr = &x;
    // We can write as single line:
    int y = 5, *pointer = &y;

    // Value of operator *:
    // The value of the operator * is the address of the variable.

    int var = 10;
    int *ptr1 = &var;
    printf("%d\n", *ptr1); // 10
    // It says go to the address of var and read the value and print it.
    // We can also change the value of var by using the value of operator.
    *ptr1 = 20;
    printf("%d\n", *ptr1); // 20

    // Caution when using pointers:
    // 1. Never apply indirection operator on an uninitialized pointer.
    int *ptr2;
    printf("%d\n", *ptr2); // completely illegal
    // 2. Assigning value to an uninitialized pointer is not allowed.
    int *ptr3;
    *ptr3 = 10; // segmentation fault
    // What is segmentation fault?
    // It is a program error. It means that the program has tried to access memory that is not available.

    // Adding integer to a pointer:
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr4 = &arr[0];
    printf("%d\n", *ptr4); // 1
    ptr4 = ptr4 + 3;
    printf("%d\n", *ptr4); // 4
    /*
    Pointer Arithmetic (Increment & Decrement)
    */
    // Incrementing a pointer:
    int *ptr5 = &arr[0];
    ptr5++;
    printf("%d\n", *ptr5); // 2
    // Decrementing a pointer:
    ptr5--;
    printf("%d\n", *ptr5); // 1
    
}

// Returning pointers:
int *findMiddle(int a[], int n) {
    return &a[n / 2];
}

int func() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = findMiddle(a, n);
    printf("%d\n", *mid);
    return mid;
}

// Never ever try to return the address of an automatic variable.
// It will cause segmentation fault.
// Because after the execution of the function, the automatic variable will be destroyed.

// * symbol has different meaning in different contexts.
// * symbol is used to dereference a pointer.
/*
int a = 10;
int *pointer1 = &a;
*/
// * symbol is used to get the value of a variable.
// *pointer1 = 10;
/* How to print the address of a variable:
Using the %p format specifier:
printf("%p\n", pointer1); hexadecimal format

 */
