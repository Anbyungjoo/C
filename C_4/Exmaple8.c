#include<stdio.h>

int main(){
    int score;

    printf("성적을 입력하시오:");
    scanf("%d",&score);

    if (score>=90){
        printf("합격: 학점A");
    }
    else if(score>=80){
        printf("합격: 학점 B");
    }
    else if(score>=70){
        printf("합격: 학점 C");
    }
    else if(score>=60){
        printf("합격: 학점D");
    }
    else{
        printf("불합격: 학점F");
    }
    return 0;
}