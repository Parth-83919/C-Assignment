#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int temp=atoi(*(argv+1));

    for(int i=1; i<argc; i++){

        if(temp < atoi(*(argv+i))){
            temp = atoi(*(argv+i));
        }
    }
    printf("The maximum number is %d\n",temp);

    return 0;
}