#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// �õĴ�����
//int main()
//{
//	int num = 10;
//	if (5 == num)// �ж�������ʱ���ѳ����������
//		printf("HH\n");
//	if (0 == num % 10)
//		printf("zz");
//	return 0;
//}
// ��� 1-100 ֮�������
//int main()
//{
//	int i = 1;
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//			printf("%d\n", i);
//	}*/
//	for (i = 1; i <= 100; i+=2)
//	{
//			printf("%d\n", i);
//	}
//	return 0;
//}

// switch ��� -- ������ ���֧ �����
// �� if ��else if ̫�鷳 �� switch ����
//int main()
//{
//	int day = 0;
//	scanf("%d", &day); 
//
//	switch (day)// ���� �б����� ���� ����
//	{
//	case 1: // ���  case ������ ���ͳ������ʽ 
//		printf("����һ\n");
//		break;// ����
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default: // Ĭ�� / ����
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

// ѭ�� ��� ��while ��for ��do while
//int main()
//{
//	// while ѭ��
//	// break -- ������ǰѭ���� 
//	// continue -- ���� ����ѭ�� continue ֮��Ĵ��� �ص� �жϲ��֣����Ƿ������һ��ѭ��
//	int i = 1;
//	while (i <= 10) // ��������жϱ��ʽ �ͼ���ִ��
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

// getchar ��ʲô�� putchar ��ʲô�� EOF ��ʲô��
// stdin -- ��׼���� -- ��������
// EOF -- end of file -- �ļ��Ľ�����־
//int main()
//{
//	int ch = 0;
//	// ch = getchar(); //��ȡһ���ַ� �ŵ� ch ����
//	// putchar() ���һ���ַ�
//	// putchar(ch);
//
//	while ((ch = getchar()) != EOF)// ctrl + z ��ʾgetchar��ȡ����
//		putchar(ch);
//	// getchar ���߼� --  getchar() <--(��ȡ: �س�Ҳ���� һ���ַ� ASCII�� ֵ Ϊ 10)--- ������ <---�����룺�س� ��ʾ���������--- ����
//	return 0;
//}