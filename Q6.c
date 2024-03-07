#include<stdio.h>

int main(){

    int a[10][10],b[10][10],res[10][10];
    int r1,c1,r2,c2,i,j,k;

    printf("Enter the order of the first metrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the order of the second metrix : ");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2){
        printf("Can't do metrix multipication\n");
    }
    else{
        printf("Enter the elements for the first metirx:\n");
        for(i=0; i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter the element for second metrix:\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&b[i][j]);
            }
        }
    }


    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            int temp=0;
            for(k=0; k<r2;k++){
                temp = temp + a[i][k] * b[k][j];
            }
           res[i][j]=temp;
        }
    }
    printf("multipication of two metrix :\n");
    for(i=0; i<r1;i++){
        for(j=0; j<c2;j++){
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
}