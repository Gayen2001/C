/*
Q-43: int arr[]={1,2,3,4,5,} for the given array what will the flowing given?
        1.*(arr+2)
        2.*(arr+5)
*/
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+5));
    return 0;
}