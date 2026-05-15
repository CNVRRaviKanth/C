// pointer_to_pointer or double pointer in which a pointer points to another pointer.

#include<stdio.h>

int main(){
    int a = 10;     // type of a is int
    int *p = &a;    // type of p is int*
    int **q= &p;    // q points to p and the type of q is int**
    printf("%p\n",q);
    printf("%p",&p);
}