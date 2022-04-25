#include <stdio.h>

#if 0
void test1(int x)
{
	while (x < 21)
	{
		printf("%10d %10d\n", x, x * x);
		x++;
	}
}

void test2(int x)
{
	while (x < 21)
	{
		printf("%10.3d %10.3d\n", x, x * x++);//x++ 的值只在被使用之后才能体现出 ++ ;
		//【如果 x++ 是表达式的一部分 那么先试用 x ，再递增；而 ++x 先递增，再使用。】
	}
}

void test3(int x)
{
	int y = 0;
	y = x++ + x++;
	printf("%d %d\n", y, x);
}
//【如果一个变量，出现在一个函数的多个参数中，不要对改变量使用递增或递减运算符】；
//【如果一个变量多次出现在一个表达式中，不要对改变量使用递增或递减运算符】

void test()
{
	int count = 0, sum = 0;
	while (count++ < 21)
	{
		sum = sum + count;
		printf("sum = %d\n", sum);
	}
}



void test()
{
	int count, sum, ret;
	count = 0;
	sum = 0, ret=0;
	while (count < 21)
	{
		sum = sum + count;
		ret = printf("sum = %d count = %d\n", sum, count);
		count++;
	}
	printf("ret = %d\n", ret);//printf()的返回值：就是一直行完成后，输出的字符个数的值
}

void test()
{
	int n = 6, x = 3, y = 5, z = 0;;

	z = (y + x++) + (n + x++);
	printf("%d\n", z);
	int ret = x;
	printf("%d\n", ret);

}

void test()
{
	char ch;
	int i;
	float f1;

	f1 = i = ch = 'c';
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);

	ch = ch + 1;//100
	i = f1 + 2 * ch;//99+2*100
	f1 = 2.0 * ch + i;
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);

	ch = 1107;//0000 0000 0000 0000 0000 0100 0101 0011 - 取8位 0101 0011 - 83'S' - 降级
			  
	printf("Now ch = %c\n", ch);
	ch = 80.89;		// 80'P' -截断
	printf("Now ch = %c\n", ch);

}

void test()
{
	//自动类型转换
	int mice = 1.6 + 1.7;//1.6+1.7=3.3 -> 3.3 转换成 int类型，结果 3 //==（int）(1.6+1.7)
	printf("%d\n", mice);

	//强制类型转换
	mice = (int)1.6 + (int)1.7;//1.6和1.7分别转换成 int类型 1.6转换后是 1 ，1.7转换后也是1 -> 即 1+1 结果等于2
	printf("%d\n", mice);

}

void test()
{
	size
		_t intsize = sizeof(int);
	printf("%zd\n", sizeof(int));//sizeof 返回 size_t 类型的值。【这是一个无符号整型类型】
	printf("%d\n", (int)intsize);
	printf("%zu\n", sizeof(int));

}

void test()
{
	typedef double real;//现有类型创建别名，即 real 就是 double 的别名
	real deal = 5.3;
	printf("%.2f", deal);
}

void pound(int n)
{
	while (n-- > 0)
	{
		printf("#");
	}
	printf("\n");
}

void test()
{
	int times = 5;
	char ch = '!';//33
	float f = 6.0f;

	pound(times);
	pound(ch);
	pound((int)f);
}
#endif
void test()
{

}

int main()
{

	int num = 1;

	//test3(num);
	test();

	return 0;
}