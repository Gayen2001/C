// Sum of first n natural number use Recursion
#include<stdio.h>
int sum( int n);
int main(){
    int n;
    printf("Enter any natural Number:");
    scanf("%d",&n);
   printf("Sum of your given natural number:%d",sum(n));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}