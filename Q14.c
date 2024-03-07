#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int palindrome(const char *ch){
    
    int l=0;
    int h= strlen(ch) - 1;

    while (h > l){
        if (ch[l] != ch[h] ){
            return 0;
        }
        l++;
        h--;
   }
   return 1;
}
int main(){

    char *ch= (char*) malloc (100);

    if(ch==NULL){
        printf("memory not allocated\n");
    }

    printf("Enter the string :");
    scanf("%[^\n]s",ch);

    if(palindrome(ch)){
        printf("String is Palindrome\n");
    }
    else{
    printf("String is not Palindrome\n");
    }

    free(ch);

    return 0;
}

