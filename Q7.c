#include<stdio.h>
#include<stdlib.h>

void table(int n){
    int sum=0;
    printf("table of %d is :",n);
    for(int i=1; i<11; i++){
        sum = n * i;
        printf("%d ",sum);
    }
}

int main(int argc, char *argv[]){

    int n = atoi(argv[1]);
    table(n);
}