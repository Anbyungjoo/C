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

```C
#include<stdio.h>

int main()
{
    int money, change;
    int price, c1000, c500, c100, c10;

    printf("물건 값을 입력하시오 :");
    scanf("%d", &price);

    printf("투입한 금액을 입력하시오 :");
    scanf("%d",&money);

    change = money - price;

    c1000 = change / 1000;
    change = change % 1000;

    c500 = change / 500;
    change = change % 500;
    
    c100 = change / 100;
    change = change % 100;

    c10 = change / 10;
    change = change % 10;

    printf("천원권 : %d개\n", c1000);
    printf("오백원 동전 : %d개\n", c500);
    printf("백원 동전 : %d개\n",c100);
    printf("십원 동전 : %d개\n", c10);

    return 0;
}

```


```C
#include<stdio.h>

int main()
{
    int n1, n2;

    printf("값을 입력하시오 : %d\n",n1);
    scanf("%d",&one)

    printf("두번째 값을 입력하시오 : %d\n",n2);
    scanf("%d",two);

    int n3 = n1 * (n2 % 10);
    int n4 = n1 * (n2 %10 %10);
    int n5 = n1 * (n2 %100);

    printf(첫번째 값 = )
}
```
