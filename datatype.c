#include<stdio.h>// stdio.h = standard input output.header
int main(){
    /*char myName = "Porto";
    int num = 5, anyNum;
    printf("Type any ASCII number = ");
    scanf("%i", &anyNum);
    printf("your ASCII value is = %c", anyNum);*/
    //printf("pointer location is= %p %p", &myName, &num);
    // lowercase to uppercase
    char letter;
    printf("Type any word=");
    scanf("%c",&letter);
    printf("uppercase= %c", letter-32);
}
