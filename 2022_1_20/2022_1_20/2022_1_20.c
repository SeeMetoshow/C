#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>

// 在屏幕上打印 多个字符 从 两边 向 中间 汇聚的效果。
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
//		Sleep(500); // 展示 动态 效果  --- 睡眠一秒, 需要引入 头文件 windows.h
//		system("cls"); // 清空屏幕
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//	
//	return 0;
//}

// 模拟用户登录，输入密码 ，只允许输入三次，三次都错的话就退出。
int main()
{
	// 假设 正确密码是 "123456"
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码 ：\n");
		scanf("%s", password);

		//if(password == "123456")// 注意，这样是不行的。两个字符串的比较不能用 == ,要用字符串比较函数 strcmp
		if (strcmp(password, "123456") == 0) // 如果两个字符串相等，strcmp会返回0
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}

	if (i == 3)
	{
		printf("登陆失败，退出程序\n");
	}

	return 0;
}