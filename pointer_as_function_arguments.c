// pointer as function arguments also called as call by reference
// heap, stack/call stack, static and global, code, stack frame 

// call by value, call by reference
#include<stdio.h>

// call by value
void Increment(int a){  // formal argument or parameters
    a = a + 1;
}

// call by reference
void Increment_using_pointer(int *p){
    *p = *p+1;
}

int main(){
    int a = 10;
    Increment(a);   // actual argument or arguments
    Increment_using_pointer(&a);
    printf("%d",a);
}