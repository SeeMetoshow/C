#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>

// ����Ļ�ϴ�ӡ ����ַ� �� ���� �� �м� ��۵�Ч����
//int main()
//{
//	char arr1[] = { "nice to see you !!!" };
//	char arr2[] = { "###################" };
//	// int sz = sizeof(arr1) / sizeof(arr1[0]);
//    int sz = strlen(arr1); 
//	int left = 0, right = 0;
//	// right = sz - 2;
//	right = sz - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(500); // չʾ ��̬ Ч��  --- ˯��һ��, ��Ҫ���� ͷ�ļ� windows.h
//		system("cls"); // �����Ļ
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//	
//	return 0;
//}

// ģ���û���¼���������� ��ֻ�����������Σ����ζ���Ļ����˳���
int main()
{
	// ���� ��ȷ������ "123456"
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������� ��\n");
		scanf("%s", password);

		//if(password == "123456")// ע�⣬�����ǲ��еġ������ַ����ıȽϲ����� == ,Ҫ���ַ����ȽϺ��� strcmp
		if (strcmp(password, "123456") == 0) // ��������ַ�����ȣ�strcmp�᷵��0
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}

	if (i == 3)
	{
		printf("��½ʧ�ܣ��˳�����\n");
	}

	return 0;
}