#include <stdio.h>

int main()
{
    /* 여기에 코드작성 */
    printf("Hello World!");

    /* escape sequence */

    // 아버지가
    // 방에 들어가신다
    printf("아버지가\n방에 들어가신다");
    printf("\n");

    // 파월 연준 의장, "강한 긴축" 예고
    printf("파월 연준 의장, \"강한 긴축\" 예고");
    printf("\n");

    /* format sring */

    // 오늘은 5월 11일 습도 40%
    printf("%s은 %d월 %d일 습도 %d%%", "오늘", 5, 11, 40);

    return 0; // 프로그램 종료
}
