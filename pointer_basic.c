#include<stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    printf("The address of a using pointer: %p\n",p);
    printf("The address of a: %p\n",&a);
    printf("The size of int is: %lu\n",sizeof(int));
    printf("Dereferencing the pointer: %d\n",*p);
    printf("Address of pointer %p\n",&p);

    // pointer arithmetic
    printf("pointer arithmetic: %p\n",p+1);
}
