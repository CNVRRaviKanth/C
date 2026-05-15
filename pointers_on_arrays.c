// the first index element of an array acts like a pointer so, we can use pointer operations

#include<stdio.h>

int main(){
    int arr[] = {2,4,9,0,1};
    int *p = &arr[0];

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%d\n",*(p+i));
    }
}