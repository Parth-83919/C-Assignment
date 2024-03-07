#include<stdio.h>
#include<string.h>

void duplicate(char *arr[], int si){

    for(int i=0; i<si; i++){
       char temp[20];
       strcpy(temp,*(arr+i));

        for(int j = i+1; j<si; j++)
        {
            int t = strcmp(temp,*(arr+j));
            if(t==0){
                printf("duplicate string: %s\n",temp);
            }
        }
    }
}

int main(){

    char *arr[]={"sunbeam","esd","sunbeam","hello","surat","parth","esd"};
    int si = sizeof(arr)/sizeof(*arr);
    duplicate(arr,si);
}