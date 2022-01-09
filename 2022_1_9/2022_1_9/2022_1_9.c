#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 好的代码风格
//int main()
//{
//	int num = 10;
//	if (5 == num)// 判断两个数时，把常数放在左边
//		printf("HH\n");
//	if (0 == num % 10)
//		printf("zz");
//	return 0;
//}
// 输出 1-100 之间的奇数
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

// switch 语句 -- 常用于 多分支 的情况
// 用 if 、else if 太麻烦 用 switch 更好
//int main()
//{
//	int day = 0;
//	scanf("%d", &day); 
//
//	switch (day)// 括号 中必须是 整型 变量
//	{
//	case 1: // 入口  case 后必须跟 整型常量表达式 
//		printf("星期一\n");
//		break;// 出口
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default: // 默认 / 错误
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

// 循环 语句 ：while 、for 、do while
//int main()
//{
//	// while 循环
//	// break -- 跳出当前循环体 
//	// continue -- 跳过 本次循环 continue 之后的代码 回到 判断部分，看是否进行下一次循环
//	int i = 1;
//	while (i <= 10) // 满足这个判断表达式 就继续执行
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

// getchar 是什么？ putchar 是什么？ EOF 是什么？
// stdin -- 标准输入 -- 键盘输入
// EOF -- end of file -- 文件的结束标志
//int main()
//{
//	int ch = 0;
//	// ch = getchar(); //读取一个字符 放到 ch 里面
//	// putchar() 输出一个字符
//	// putchar(ch);
//
//	while ((ch = getchar()) != EOF)// ctrl + z 表示getchar读取结束
//		putchar(ch);
//	// getchar 的逻辑 --  getchar() <--(读取: 回车也算作 一个字符 ASCII码 值 为 10)--- 缓冲区 <---（输入：回车 表示输入结束）--- 键盘
//	return 0;
//}