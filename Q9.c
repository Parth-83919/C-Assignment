#include<stdio.h>
#include<math.h>
void dec_to_bin(int n){

    int i=0;
    int ans=0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        n= n>>1;
        i++;
    }

    printf("Binary number is :%d\n",ans);
    
}
void dec_to_octal(int n){
    printf("Octal number is :%o\n",n);
}
void dec_to_hexa(int n){
    printf("Hexadecimal number is :%x\n",n);
}
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Given number: %d\n",n);
    dec_to_bin(n);
    dec_to_octal(n);
    dec_to_hexa(n);

    return 0;
}