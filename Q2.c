#include<stdio.h>

int fact(int n){
    int sum;
    if(n == 0)
        return 1;

    sum = n * fact(n-1);

    return sum;
}
int main(){
    int n;
    printf("enter the number to get factorial :");
    scanf("%d",&n);

    int fact_num = fact(n);

    printf("factorial is %d", fact_num);
}