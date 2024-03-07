#include<stdio.h>
#include<string.h>

struct emp{
    double salary;
    char first_name[50];
    char last_name[50];
};

void emp_init(struct emp *e){

    printf("Enter the first name :");
    fgets(e->first_name,50,stdin);
    e->first_name[strcspn(e->first_name, "\n")] = '\0';
    printf("Enter the last name :");
    fgets(e->last_name,50,stdin);
    e->last_name[strcspn(e->last_name, "\n")] = '\0';

}

void set_salary(struct emp *e, double sal){
   
    sal = 12 * sal;
    e->salary=sal;
}

void emp_dis(struct emp *e){

    printf("Name of employee is %s %s and Yearly salary is %.2lf\n",e->first_name, e->last_name,e->salary);

}
int main(){
    struct emp e1;
    emp_init(&e1);
    set_salary(&e1,10000);
    emp_dis(&e1);

    struct emp e2;
    emp_init(&e2);
    set_salary(&e2,10000);
    emp_dis(&e2);

    printf("after giving hike of 10% :\n");

    set_salary(&e1,11000);
    set_salary(&e2,11000);
    emp_dis(&e1);
    emp_dis(&e2);

    return 0;
}