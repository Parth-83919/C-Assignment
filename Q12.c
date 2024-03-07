#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char *str){

    int len = strlen(str);
    int start=0, end = len-1;

    for(int i=0; start<=end; i++){
        char temp=str[end];
        str[end]=str[start];
        str[start] = temp;
        start++;
        end--;
    }
    printf("%s",str);

}
int main(){

    char *str = (char*) malloc(sizeof(char) *50);
    printf("Enter the string within 50 alpabets :");
    scanf("%[^\n]s",str);
    
    reverse(str);
    free(str);

    return 0;
}