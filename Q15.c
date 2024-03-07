#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void cal_str(int len, char *str);
int main(){

    char *str= (char*)malloc(100);

    if(str == NULL){
        printf("Memory can't be allocted\n");
    }
    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    int len = strlen(str);

    cal_str(len,str);

    free(str);

}

void cal_str(int len, char *str){

    int ch[26]={0};

    for(int i=0; i<len; i++){
        switch (*(str+i))
        {
        case 'A':
        case 'a': 
            ch[0]++;
            break;
        case 'B':
        case 'b': 
            ch[1]++;
            break;
        case 'C': 
        case 'c': 
            ch[2]++;
            break;
        case 'D':  
        case 'd':
            ch[3]++;
            break;
        case 'E':
        case 'e':
            ch[4]++;
            break;
        case 'F':
        case 'f':
            ch[5]++;
            break;
        case 'G':
        case 'g':
            ch[6]++;
            break;
        case 'H': 
        case 'h':
            ch[7]++;
            break;
        case 'I':
        case 'i':
            ch[8]++;
            break;
        case 'J':
        case 'j':
            ch[9]++;
            break;
        case 'K':
        case 'k':
            ch[10]++;
            break;
        case 'L':
        case 'l':
            ch[11]++;
            break;
        case 'M':
        case 'm':
            ch[12]++;
            break;
        case 'N': 
        case 'n':
            ch[13]++;
            break;
        case 'O': 
        case 'o':
            ch[14]++;
            break;
        case 'P': 
        case 'p':
            ch[15]++;
            break;
        case 'Q':
        case 'q':
            ch[16]++;
            break;
        case 'R': 
        case 'r':
            ch[17]++;
            break;
        case 'S':
        case 's':
            ch[18]++;
            break;
        case 'T':
        case 't':
            ch[19]++;
            break;
        case 'U':
        case 'u':
            ch[20]++;
            break;
        case 'V':
        case 'v':
            ch[21]++;
            break;
        case 'W':
        case 'w':
            ch[22]++;
            break;
        case 'X':
        case 'x':
            ch[23]++;
            break;
        case 'Y':
        case 'y':
            ch[24]++;
            break;
        case 'Z':
        case 'z':
            ch[25]++;
            break;
        }
    }
    printf("input: %s\n",str);

    for (int i = 0; i < 26; i++)
    {
        if(ch[i] >= 1)
            printf("%c : %d\n",65+i,ch[i]);
    }
}

