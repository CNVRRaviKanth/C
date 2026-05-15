// pointer variables are strongly typed

#include<stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;

    //type casting
    char *p0 = (char*)ptr;
    printf("%d\n",*p0);

    // void pointer -> does not has any datatype 
    // we can't deference void pointer as it is not mapped to any data type
    void *p1 = ptr;   // not need of explicit type casting
    printf("%p",p1);

}