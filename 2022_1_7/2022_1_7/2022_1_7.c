#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//// 操作符 -- ~ : 把对应二进制数 按位取反
//int main()
//{
//	int a = 0;
//	printf("%d", ~a); // 输出的值 是 -1
//	// 整数 的数据 在内存中 存储的是 补码
//	/*  整数a  0  变成了 11111111111111111111111111111111
//	* 这对应 是 -1对应 00000000000000000000000000000000
//	* 按位取反之后 的 补码
//	*/
//	return 0;
//}

//// ++  和  -- 操作符
//int main()
//{
//	int a = 10;
//	int b = ++a; // 前置 ++ 是 先 ++ ，后使用 
//	int c = a++; // 后置 ++ 是 先使用 ，后 ++
//	printf("%d\n", b);
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}

//// () -- 强制类型转换
//int main()
//{
//	int a = (int)3.14; // 因为 a 是 int型 ，无法 被 3.14(浮点型) 赋值
//	return 0;
//}

// 关系操作符 <= >= == !=
// 逻辑操作符 &&(逻辑与) 和 ||(逻辑或)
//int main()
//{
//	int a = 0; // 非 0 为 真
//	int b = 1; // 0 为 假
//	int c = a && b;
//	printf("%d",c);
//	return 0;
//}

//// 三目操作符 ? :
//// exp1 ? exp2 : exp3
//// 表达式 exp1 成立 ，exp2 计算，整个表达式的结果是：exp2 的结果
//// 表达式 exp1 成立 ，exp2 计算 ，整个表达式的结果是： exp3 的结果
//int main()
//{
//	int a = 3;
//	int b = 1;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = a > b ? a : b;
//	printf("%d", max);
//	return 0;
//}

// 逗号表达式
//int main()
//{
//	int a = 0;
//	int b = 52;
//	int c = 12;
//	int d = (a = b + 4, b = 1 + a, c = a + b);
//	// 逗号表达式 的逻辑是 ：将括号里的式子 从左向右依次执行 
//	//整个表达式结果 取(是) 最后一个表达式的 结果
//	printf("%d %d", c, d);
//	return 0;
//}

// 下标引用操作符 [] 
//int main()
//{
//	int arr[5] = { 1,2,3,5,4 }; // 这里 的 [] 不是操作符
//	printf("%d", arr[1]); // 这里的 [] 就是 下标引用操作符
//	return 0;
//}

// 函数调用操作符 ()
//int main()
//{
//	printf("hahah"); // () -- 函数调用操作符 
//	return 0;
//}

// c 语言 提供的关键字 keyword 
// 1. 是 c语言提供的 ，不能自己创建关键字
// 2. 变量名 不能是关键字
//int main()
//{
//	// auto -- 自动的 -- 每个局部变量 都是 auto 修饰的
//	//{
//	//	int a = 10; // a 是个自动变量 -- 自动创建 自动销毁 (auto) ing a = 10; -- 省略掉了
//	//}
//
//	return 0;
//}
// 计算机中，数据 可以存储在  寄存器 、高速缓存 、内存 、硬盘 、网盘 
// 从右往左 -- 造价越高 、 存取速度越快、 空间越小
// define 和 include 不是关键字， 它们是 预处理指令.

//// typedef -- 类型重定义
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//	// unsigned int 和 u_int 一个意思
//	return 0;
//}

// static -- 静态的
// 1.static 修饰局部变量  -- 改变了局部变量的生命周期。 本质上改变了变量的存储类型,将它 从栈区改变到了静态区
// 2.static 修饰全局变量  -- 使这个全局变量只能在自己所在源文件中使用，其它源文件不可以使用
//   全局变量，在其他源文件内部可以使用，是因为它本身具有外部链接属性。
//   但是被static修饰之后，就变成了内部链接属性，其他源文件不能链接到这个静态全局变量
// 3.static 修饰 函数 -- 和static修饰全局变量类似。
//   使得函数只能在自己所在的源文件的内部使用，不能在其他源文件内部使用
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 内存 会划分为几个区域：栈区（局部变量、函数的参数）、堆区（动态内存分配）、静态区 （全局变量和 static修饰的静态变量）

// #define 定义常量和宏
// 1.define 定义符号
//   #define MAX 100
// 2.define 定义宏
//#define ADD(X,Y) (X + Y)
//int main()
//{
//	printf("%d", ADD(2, 4));// 输出 6
//	// printf("%d",4*ADD(2, 4)); 输出会是 12  -- 4*2+4
//	printf("%d", 4 * ADD(2, 4)); // 加上括号之后 ，输出 了 24
//	return 0;
//}

// 指针
//int main()
//{
//	int a = 10;
//	printf("%p ", &a); // %p 是专门用来打印指针的
//	int *pa = &a; // pa 用来存放地址，在c语言中 pa叫做 指针变量
//	// * 说明 pa 是指针变量
//	// int 说明的是pa指向的是 int 类型的变量
//
//	char ch = 'w';
//	char * pc = &ch;
//	return 0;
//}

//通过指针找到所要操作的对象
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 30; // * 解引用操作 *pa 通过 pa里面的地址，找到 a
//	printf("%d", a);
//	return 0;
//}

// 指针大小
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	// 指针是用来存放地址的，指针需要多大的空间 取决于 地址的存储需要的大小
//	// 比如 64位的电脑，64bit位的二进制序列作为地址，
//	// 那么这个二进制序列在内存中的存储是固定的大小，都是 64/8 = 8个字节
//	return 0;
//}

// 结构体 -- 让我们有了能力描述复杂对象
// 现实生活中，我们常常要描述一个对象，而一个对象 往往不只具有一个属性，它常常是具有多个属性的，
// 那么如何更好的描述它就变得尤为关键。
//创建一个学生
//struct Stu
//{
//	char name[10];
//	int age;
//	double score;
//};
//struct Book
//{
//	char name[10];
//	float price;
//	char bookId[20];
//};
//int main()
//{
//	struct Stu s = {"阿强",20,45.52};
//	printf("%s %d %lf\n",s.name,s.age,s.score);// . 操作符
//	struct Stu* p = &s;
//	printf("2: %s %d %lf\n", (*p).name, (*p).age, (*p).score);
//	printf("3: %s %d %lf", p->name, p->age, p->score);
//	return 0;
//}