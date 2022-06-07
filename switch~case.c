#include<stdio.h>

int main()
{
    int a;

    printf("1~4중 선택하세요.\n");
    scanf("%d",&a);

    switch (a)
    {
        case 1: //a가 1인경우 13행을 실행시키고 14행으로가 switch를 빠져나온다
            printf("1을 선택했다.\n");
            break;  //break;를 쓰지않으면 switch문을 빠져나가지않고 다음코드를 계속 수행한다.
        case 2:
            printf("2를 선택했다.\n");
            break;
        case 3:
            printf("3을 선택했다.\n");
            break;
        case 4:
            printf("4를 선택했다.\n");
            break;
        default:    //a가 1,2,3,4중 어느것도 해당되지 않은경우 수행한다
            printf("그 외의 것을 선택했다.\n");
    }
}