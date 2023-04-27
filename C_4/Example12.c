#include<stdio.h>

int main(){

    int i,n,main;

    printf("정수를 입력하시오:");
    scanf("%d",&n);

    i=0;
    sum=0;

    while(i <= n){

        sum += i;
        i++;
    }