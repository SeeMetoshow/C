#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// getchar() 的 用法 与 场景
//int main()
//{
//	char password[20] = { 0 };
//	printf("输入密码：\n");
//	scanf("%s", password);// scanf 遇到 空格或者回车 意味着 读取结束
//	printf("请确认密码: Y/N  \n");
//
//	// 清理缓冲区
//	// getchar(); // 这样就处理了 scanf 没拿的 \n
//
//	// 清理缓冲区的多个字符
//	int temp = 0;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar(); // 注意 getchar 的返回值 是 int 型
//
//	// getchar 和 scanf 不是直接从键盘拿数据，而是从缓冲区里拿数据
//	// 键盘键入信息，当回车时，告诉了输入函数去 缓冲区 拿 数据。
//	//注意：其中scanf不拿 回车，getchar可以拿 回车 \n
//
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else if (ch == 'N')
//		printf("确认失败\n");
//
//	return 0;
//}

// for 循环
//int main()
//{
//	// 循环中 包括 三个部分：初始化、判断部分、调整部分
//	// while 的这 3 个部分 比较分散
//	// for 相对集中
//	// for(初始化;判断;调整)  初始化部分只会执行一次
//
//	int i = 0;
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	/*if (i == 5) // 打印 1到4
//	//		break;*/
//
//	//	if (i == 5) // 跳过5 打印 所有数
//	//		continue;
//
//	//	printf("%d ", i);
//	//}
//	// break 和 continue 在 for 循环中
//
//	// 注意：不要随便在for循环中 修改 循环变量,防止发生一些意想不到的结果
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//		// i = 5; // 因为在 for循环中 随意修改了 循环变量；导致了死循环
//	}
//
//	return 0;
//}

// 建议 for 循环 控制循环变量的写法 建议左闭右开的写法
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) // 左闭右开 区间 的 写法
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;) // for 循环中 任意部分都可以省略
//	// 判断部分 的 省略 ，意味着 恒为真
//	{
//		printf("heheh\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++) // 现在的话，会打印 9 次，但是如果去掉 j = 0的话，会打印 3 次
//		{
//			printf("hahah\n");
//		}
//	}
//
//	return 0;
//}
// for 循环可以 用两个循环变量控制
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++) // j = 0 是 假，j = 1 是 真
//		// 这就意味着，一个是一次都不执行，一个是死循环 因为一直满足
//		j++;
//	return 0;
//}

// do while 循环
// 代码格式:
//do
//循环语句;
//while (表达式);
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}