#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

// 写一个猜数字游戏
// 自动产生一个 1 - 100之间的数字。
// 接下来猜数字
void menu()
{
	printf("****************\n");
	printf("*****1.play*******\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}
void game()
{
	// 首先要生成随机数
	// 生成随机数需要调用一个库函数，rand()
	// rand 函数 返回了一个 0 - 32767 的随机数
	// 规定 1 - 100 的随机数 ?
	// time() 返回时间戳
	int ret = rand()%100;// %100 的余数范围是 0-99，然后 +1就变成了 1-100
	int guess = 0;
	// 猜数字
	while(1)
	{
		printf("请输入:> ");
		scanf("%d", &guess);
		if (guess < ret)
		{
			Sleep(100);
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			Sleep(100);
			printf("猜大了\n");
		}
		else if (guess == ret)
		{
			Sleep(100);
			printf("猜对了\n");
			break;
		}
	}
	/*printf("继续游戏还是退出?\n");
	printf("1. 继续，0. 退出\n");*/
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu(); // 打印菜单
		printf("请选择: >  ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			// 猜数字
			game();
			break;
		case 0:
			// 退出游戏
			Sleep(100);
			printf("退出游戏成功\n");
			break;
		default:
			// 选择错误, 重新选择
			printf("重新选择吧\n");
			break;
		}
	} while(input);

	return 0;
}