#include<stdio.h>

int main()
{
    int a=101; 

    if(a<100)
    {   //{}를 쓰는 이유는 실행하는 문장이 2문장 이상이면 쓴다 (한문장인경우 쓰지않아도 된다.)
        printf("100보다 작다.\n");  //7행이 참이면 (a<100) 실행
        printf("참인경우 이 문장또한 보인다.\n");
    }
    else
    {
        printf("100보다 크다.\n");  //7행이 거짓인경우 (a>100) 실행
        printf("거짓인경우 이 문장이 보인다.\n");
    }

    printf("종료.\n");
}