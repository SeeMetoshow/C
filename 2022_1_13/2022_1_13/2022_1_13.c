#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// ���� n �Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int a = 1;
//
//	scanf("%d", &n);
//
//	// for ѭ��
//	/*for (i = 1; i <= n; i++)
//	{
//		a = a * i;
//	}*/
//
//	// while ѭ��
//	/*while (i <= n)
//	{
//		a = a * i;
//		i++;
//	}*/
//
//	// do while ѭ��
//	/*do
//	{
//		a = a * i;
//		i++;
//	} while (i <= n);*/
//	// ����д�� a *= i;
//
//	printf("%d", a);
//
//	return 0;
//}

// ���� 1! + 2! + 3! + ... + 10!
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//
//	// �Ƚ��鷳��д��, Ч�ʱȽϲ�
//	/*for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1; // ÿ��ѭ����Ҫ��֤ret�� 1 
//	}*/
//
//	// ����ЧһЩ :
//	for (i = 1; i <= 10; i++)
//	{
//		ret = i * ret;
//		sum = sum + ret;
//	}// 1! = 1, 2! = 1! * 2; 3! = 2! * 3
//
//	printf("%d", sum);
//	return 0;
//}

// ��һ�����������в��Ҿ����ĳ������ n ��λ��
//int main()
//{
//	// �� 1 �� 10������ĳ�����֣����ǿ��Բ��� ȫ������ �ķ�����-- ��Ϊ�漰������Ŀ��
//	// ����� �� 0 �� 500�أ������е�ʵ�� -- �׺���˵���������Ʒ500���ڵļ۸���ģ����һ�°ѡ�
//	// ��ʱ���²������˴�0 �� 500�����α����� �� �ɡ�
//	// ����ȻЧ��̫���ˡ�
//	
//	// ���ֲ���
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 7; // �涨Ҫ���� 7 
//
//	int sz = sizeof(arr) / sizeof(arr[0]); // �������ĳ���/ Ԫ�صĸ���
//	int left = 0;
//	int right = sz - 1;// ������ұ�Ԫ�ص� �±�
//	int mid = 0;
//
//	while(left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��� �� �� %d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}