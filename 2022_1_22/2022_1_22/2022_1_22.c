#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

// дһ����������Ϸ
// �Զ�����һ�� 1 - 100֮������֡�
// ������������
void menu()
{
	printf("****************\n");
	printf("*****1.play*******\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}
void game()
{
	// ����Ҫ���������
	// �����������Ҫ����һ���⺯����rand()
	// rand ���� ������һ�� 0 - 32767 �������
	// �涨 1 - 100 ������� ?
	// time() ����ʱ���
	int ret = rand()%100;// %100 ��������Χ�� 0-99��Ȼ�� +1�ͱ���� 1-100
	int guess = 0;
	// ������
	while(1)
	{
		printf("������:> ");
		scanf("%d", &guess);
		if (guess < ret)
		{
			Sleep(100);
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			Sleep(100);
			printf("�´���\n");
		}
		else if (guess == ret)
		{
			Sleep(100);
			printf("�¶���\n");
			break;
		}
	}
	/*printf("������Ϸ�����˳�?\n");
	printf("1. ������0. �˳�\n");*/
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu(); // ��ӡ�˵�
		printf("��ѡ��: >  ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			// ������
			game();
			break;
		case 0:
			// �˳���Ϸ
			Sleep(100);
			printf("�˳���Ϸ�ɹ�\n");
			break;
		default:
			// ѡ�����, ����ѡ��
			printf("����ѡ���\n");
			break;
		}
	} while(input);

	return 0;
}