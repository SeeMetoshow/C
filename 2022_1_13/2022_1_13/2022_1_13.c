#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 计算 n 的阶乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int a = 1;
//
//	scanf("%d", &n);
//
//	// for 循环
//	/*for (i = 1; i <= n; i++)
//	{
//		a = a * i;
//	}*/
//
//	// while 循环
//	/*while (i <= n)
//	{
//		a = a * i;
//		i++;
//	}*/
//
//	// do while 循环
//	/*do
//	{
//		a = a * i;
//		i++;
//	} while (i <= n);*/
//	// 可以写成 a *= i;
//
//	printf("%d", a);
//
//	return 0;
//}

// 计算 1! + 2! + 3! + ... + 10!
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//
//	// 比较麻烦的写法, 效率比较差
//	/*for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1; // 每次循环都要保证ret是 1 
//	}*/
//
//	// 更高效一些 :
//	for (i = 1; i <= 10; i++)
//	{
//		ret = i * ret;
//		sum = sum + ret;
//	}// 1! = 1, 2! = 1! * 2; 3! = 2! * 3
//
//	printf("%d", sum);
//	return 0;
//}

// 在一个有序数组中查找具体的某个数字 n 的位置
//int main()
//{
//	// 从 1 到 10，查找某个数字，我们可以采用 全部遍历 的方法。-- 因为涉及到的数目少
//	// 但如果 是 0 到 500呢，生活中的实例 -- 甲和乙说：我这个物品500以内的价格买的，你猜一下把。
//	// 这时恐怕不会有人从0 到 500，依次遍历的 猜 吧。
//	// 这显然效率太低了。
//	
//	// 二分查找
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 7; // 规定要查找 7 
//
//	int sz = sizeof(arr) / sizeof(arr[0]); // 算出数组的长度/ 元素的个数
//	int left = 0;
//	int right = sz - 1;// 算出最右边元素的 下标
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
//			printf("找到了 ： 在 %d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}