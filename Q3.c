#include<stdio.h>

void fibo( int n){

    int t1=0,t2=1, sum;
    printf("The terms are :");
    for(int i = 0; i <= n; i++)
    {
        sum = t1+t2;
        t2=t1;
        t1=sum;
        printf("%d ",sum);
    }
}
int main(){

    int n;
    printf("Enter the number of term you want to print :");
    scanf("%d",&n);

    fibo(n);
}