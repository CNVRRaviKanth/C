// pointer_to_pointer or double pointer in which a pointer points to another pointer.

#include<stdio.h>

int main(){
    int a = 10;     // type of a is int
    int *p = &a;    // type of p is int*
    int **q= &p;    // q points to p and the type of q is int**
    int*** r = &q;
    printf("Dereferencing pointer p %d\n",*p);
    printf("Dereferencing pointer q which store address of p %d\n",*q);
    printf("De-Dereferencing pointer q which gives the value of a %d\n",*(*q));
    printf("%p\n",q);
    printf("%p\n",&p);

    ***r = 20;
    printf("%d\n",a);

    **q = *p + 2;    // the ouput will be 22
    printf("%d\n",a);
}