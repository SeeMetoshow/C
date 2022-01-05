#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//字符类型
//	char a = 'a';
//	//整型
//	int i = 3;
//	//浮点型
//	float f = 1.0; // 单精度浮点型
//	double b = 1.2321; // 双精度浮点型
//
//	// 研究各个数据类型的大小
//
//	//int 
//	printf("%d\n", sizeof(i));
//	//也可以写成
//	printf("%d\n", sizeof(int));
//	//char
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(char));
//	//double 
//	printf("%d \n", sizeof(double));
//	//float
//	printf("%d\n", sizeof(float));
//	return 0;
//
//}

//int main()
//{
//	// 创建一个变量
//	// 格式: 类型  变量名  = 变量值; （推荐使用）
//	int x = 0;
//	// 类型 变量的名字; 不推荐
//	return 0;
//}

//int a = 0; //全局变量  定义在{}之外
//int main()
//{
//	int a = 10; // 局部变量 在{}之内
//	printf("%d", a);
//	return 0;
//}// 局部变量和全局变量命名相同时，优先用局部变量

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);//输入函数scanf()
//	int sum = a + b;
//	printf("%d",sum);
//	return 0;
//}

// 作用域  -- 全局变量 和 局部变量 讨论
//int global = 10;// 全局变量 -- 作用域 为 整个工程
//// 局部变量作用域为其 所在 {} 内 或者说 其所在的局部范围
//
//int main()
//{
//	printf("1 : %d\n", global);
//	{
//		printf("2:%d\n", global);
//	}
//	int a = 5;
//	/*{
//		int a;   这样的话，是用不了的.打印不出来
//	}   printf 在(作用域)局部范围之外  */
//	printf("3:%d\n", a);
//	return 0;
//}

// 生命周期
// 局部变量的生命周期   ： 进入局部范围时生命开始， 出了局部范围生命周期结束.
// 全局变量的生命周期   ： 随着整个程序的生命周期开始与结束.

//// 常量 
//#define MAX 100
//
////定义枚举常量
//enum Sex
//{
//	// 枚举类型的变量的  未来 可能取值
//	MALE,
//	FEMALE
//};
//int main()
//{
//	// 字面常量 比如 ：3.14 、10 、 ‘a’
//
//	// const 修饰的常变量 表示 这个变量不可被修改
//	
//	const int num = 1; // num是常变量  具有常属性  不可再被更改 - -  但注意：它不是常量
//	//num = 2; 报错 可见不能被修改了
//	printf("%d \n ", num);
//	// int arr[num] = {0}; 会报错. 因为这个num本质上还是变量
//
//	// #define 定义的 标识符常量  
//	int n = MAX;
//	printf("%d \n",n);
//
//	// 枚举常量  -- 可以进行一一列举的常量 用到的关键字 enum
//	printf("%d\n", MALE);// 在没有赋初值的情况下，默认从 0 开始。
//	return 0;
//}

//// 字符串  -- 就是一串字符 例如 : "avas" 、 "我是谁"
//int main()
//{
//	// 字符数组  -- 字符串在结尾位置隐藏了一个 \0 的字符
//	char arr1[] = "abcda"; // 调试 F10
//
//	char arr2[] = { 'a', 'b', 'c', 'd', 'a' ,'\0'}; // 添加 \0 后 不在出现乱码
//	printf("%s \n", arr1);
//	printf("%s \n", arr2);// <--- 打印时出现了乱码
//
//	// '\0' 是个字符串的结束标志, 不算字符串内容
//
//	//求一下字符串长度 string_lenth 使用时需要引入头文件 string.h
//	int len = strlen("abcda");
//	printf("%d\n", len);
//
//	//求一下 两个数组的长度
//	printf("%d\n", strlen(arr1));// 求长度时 \0 不算在里面
//	printf("%d\n", strlen(arr2));// 没有 \0 结束标志 ， 打印出了 21 , 这个 21 是 随机值 -- 因为没有结束标志 , 没找到 \0 
//	// 放了 \0 之后 便 正确了
//	return 0;
//}