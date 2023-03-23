4주차 C언어 실습

- 연습
- 연습

```C
#include<stdio.h>

int main()
{
    double x, y, result;

    printf("두개의 실수를 입력하시오:");
    scanf("%lf %lf", &x, &y);

    result = x + y; //덧셈 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    result = x - y; //뺄셈 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    result = x * y; //곱셈 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    result = x / y; //나눗셈 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    return 0;
}
```
