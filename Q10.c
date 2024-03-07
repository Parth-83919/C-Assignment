#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *a, const void* b){

    return strcmp(*(const char**)a,*(const char**)b);
}
int main(){

    char name[10][50];
    char *p[]=&name;

    for(int i=0; i<10;i++){
        printf("enter the name: ");
        fgets(name[i],50,stdin);
    }

    for(int i=0; i<10;i++){
        printf("%s",name[i]);
    }

    qsort(name,10,sizeof(name[0]),compare);

    printf("sorted array\n");

    for(int i=0; i<10; i++){
        printf("%s\n",name[i]);
    }

}
