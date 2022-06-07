#include <stdio.h>

int main()
{
    int a;

    printf("1부터 100중에 하나 입력.\n");
    scanf("%d",&a); 

    if(a<100)
    {
        if(a<50)
        {
            printf("50보다 작다.\n");   //10행과 12행이 모두 참인경우 실행
        }
        else
        {
            printf("100보다는 작지만 50보다는 크다.\n");    //10행은 참이지만 12행이 거짓인경우 실행
        }
    }
    else
    {
        printf("100이상의 숫자를 입력함.\n");   //10행이 거짓인경우 실행
    }
}