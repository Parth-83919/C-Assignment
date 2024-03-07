#include<stdio.h>

int main(){

    int math;
    int ss;
    int sic;
    int eng;
    int guj;

    printf("enter the marks of student outof 20. For math, ss, sic, eng, guj :");
    scanf("%d %d %d %d %d",&math,&ss,&sic,&eng,&guj);

    int sum=math + ss + sic + eng + guj;
    
    if(sum >= 90){
        printf("Grede Ex\n");
    }
    else if(sum < 90 && sum >= 80){
        printf("Grade A\n");
    }
    else if(sum < 80 && sum >= 70){
        printf("Grade B\n");
    }
    else if(sum < 70 && sum >= 60){
        printf("Grade C\n");
    }
    else{
        printf("Grade F\n");
    }
}