#include<stdio.h>
#include<stdlib.h>

void compare(char *ch){

    int upper=0, lower=0, digit=0, spec=0;

    for(int i=0; *(ch+i)!='\0'; i++){
        
        if(*(ch+i) >= 'A' && *(ch+i) <= 'Z'){
            upper++;
        }
        else if( *(ch+i) >= 'a' && *(ch+i) <= 'z'){
            lower++;
        }
        else if( *(ch+i) >= '0' && *(ch+i) <= '9'){
            digit++;
        }
        else{
            spec++;
        }
    }

    printf("In this string : %d Uppercase char, %d Lowercase char, %d Digits, %d Special char\n",upper, lower, digit, spec);
}

int main(){

    char *ch = (char *) malloc(100);

    if(ch==NULL){
        printf("memory not allocated\n");
    }

    printf("Enter the string :");
    scanf("%[^\n]s",ch);

    compare(ch);
    free(ch);
    return 0;
}