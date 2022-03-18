//typedef unsigned int uint;//类型重定义
//
//signal 是一个函数声明
//signal(int, void(*)(int))
//signal 函数的参数有两个,第一个是int，第二个是函数指针，该函数指针指向的函数参数是 int，返回类型是 void。
//signal 函数的返回类型也是一个函数指针；该函数指针指向的函数参数是 int，返回类型是 void。
//void(    *signal( int,   void(*)(int)   )    )(int);
//
//简化
//typedef void(*pfun_t)(int);//类型重定义
//pfun_t signal(int, pfun_t);



#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//
//	int (*p)(int, int) = Add;
//
//	printf("%d\n", p(a, b));//ok
//	printf("%d\n", Add(a, b));//ok
//
//	printf("%d\n", (*p)(a, b));//ok
//	//printf("%d\n", *p(a, b));//err
//
//
//	return 0;
//}



//函数指针数组
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5] = { 0 };//指针数组
//	int (*p)(int, int) = Add;//Sub/Mul/Div
//	//需要一个数组，能够存放4个函数地址的数组 - 函数指针数组
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](6, 3));
//	}
//	
//	return 0;
//}
//

//char* my_strcpy(char* dest, const char* src){}
////写一个函数指针 pf，能够指向 my_strcpy
//char* (*pf)(char*, const char*) = my_strcpy;
//// 
////写一个函数指针数组pfarr，能够存放4个 my_strcpy函数的地址
//char* (*pfarr[4])(char*, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };
////

void menu()
{
	printf("********************************\n");
	printf("**** 1.add            2.sub ****\n");
	printf("**** 3.mul            4.div ****\n");
	printf("*********    0.exit    *********\n");
	printf("********************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 0, x = 0, y = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		
//		switch (input)
//		{
//		case 0:
//			printf("退出\n");
//			break;
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

int main()
{
	int input = 0, x = 0, y = 0;
	int (*parr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);		
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:>");
			scanf_s("%d%d", &x, &y);
			int ret = parr[input](x, y);
			printf("%d\n", ret);

		}
		else if (input == 0)
		{
			printf("退出\n");	
		}
		else
		{
			printf("请重新选择\n");
		}

	} while (input);

	return 0;
}