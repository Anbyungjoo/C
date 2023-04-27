#include<stdio.h>

int main(){
    int num1;
    printf("정수를 입력하시오");
    scanf("%d",&num1);

    if(num1>=100){
        printf("large");
    }
    else{
        printf("small");
    }
    return 0;
}