#include<stdio.h>

int main()
{
    int a;

    printf("1~4�� �����ϼ���.\n");
    scanf("%d",&a);

    switch (a)
    {
        case 1: //a�� 1�ΰ�� 13���� �����Ű�� 14�����ΰ� switch�� �������´�
            printf("1�� �����ߴ�.\n");
            break;  //break;�� ���������� switch���� �����������ʰ� �����ڵ带 ��� �����Ѵ�.
        case 2:
            printf("2�� �����ߴ�.\n");
            break;
        case 3:
            printf("3�� �����ߴ�.\n");
            break;
        case 4:
            printf("4�� �����ߴ�.\n");
            break;
        default:    //a�� 1,2,3,4�� ����͵� �ش���� ������� �����Ѵ�
            printf("�� ���� ���� �����ߴ�.\n");
    }
}