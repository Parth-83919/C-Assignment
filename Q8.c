#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    char rollNo[20];
    int marks;
};

struct student accept (){

    struct student temp;
   
    printf("Enter the name of student :");
    fgets(temp.name,50,stdin);
   
    printf("Enter the Rollon of student :");
    fgets(temp.rollNo,20,stdin);

    printf("Enter the marks of student :");
    scanf("%d",&temp.marks);

    return temp;
   
}

void dis( struct student *ptr){
    
    printf("Name of sudent %s \n", ptr->name);
    printf("Rollno of student %s \n",ptr->rollNo);
    printf("Marks of student %d\n",ptr->marks);
}
int main(){
   
    struct student stu;

    stu = accept();
    dis(&stu);
}
