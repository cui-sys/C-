#include <stdio.h>
#define S_TO_M 60
#define FORMAT "%s! C is cool! \n"
#define TEN 10
#define MESG "COMPUTER BYTES DOG"

#if 0

void test()
{
	int i = 1;
	float n;
	while (i < 30)
	{
		n = 1.0 / i;
		printf(" %f\n", n);
		i++;
	}
}

void test()
{
	int sec, min, left;
	scanf_s("%d", &sec);
	while (sec > 0)
	{		
		min = sec / S_TO_M;
		left = sec % S_TO_M;
		printf("sec:%d  min:%d.%d\n", sec, min, left);
		scanf_s("%d", &sec);
	}
	
	printf("Bye\n");
}

void test()
{
	int num = 10;
	printf(FORMAT, FORMAT);
	//printf("%s! C is cool! \n", "%s! C is cool! \n");
	printf("%d\n", ++num);//11 - 先递增完成再用
	printf("%d\n", num++);//11 - 先用再递增
	printf("%d\n", num--);//12 - 先用完在递减
	printf("%d\n", num);//11

}

void test()
{
	char c1, c2;
	int diff;
	float num;

	c1 = 'S';
	c2 = 'O';
	diff = c1 - c2;
	num = diff;

	printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
}

void test()
{
	int n = 0;

	while (n++ < TEN)
	{
		printf("%5d", n);
	}
}

void test()
{

	//方法1
	char n[] = "abcdefg";
	int i = 0;
	int sz = sizeof(n) / sizeof(n[0])-1;
	while (i < sz)
	{
		printf("%5c", n[i++]);
		//i++;
	}

	//方法2
	/*char n = 'a';
	while (n <= 'g')
	{
		printf("%5c", n++);
	}*/

}

void test()
{
	//a
	/*int n = 0;
	while (++n < 3)
	{
		printf("%3d", n);
	}*/

	//b
	/*int n = 100;
	while (n++ < 103)
		printf("%3d\n", n);
	printf("%3d\n", n);*/

	//c
	char ch = 's';
	while (ch < 'w')
	{
		printf("%2c\n", ch);
		ch++;
	}
	printf("%2c\n", ch);
}

void test()
{
	int n = 0;
	while (n < 5)
	{
		printf("%s\n", MESG);
		n++;
		printf("That's all.\n");
	}
}

void test()
{
	int x1 = 0;
	int x1 = x1 + 10;
	int x2 = 0;
	int x2 = x2 + 1;
	int a = 2, b = 3, c = 0;
	c = 2 * (a + b);
	c = a + 2 * b;
}

void test()
{
	int n = 5, k = 2, m = 0;
	int q = 9, b = 3, a = 2, p = 0;
	int c = 4, d = 3;
	int x = 3;
	x--;
	m = n % k;
	p = q / (b - a);
	x = (a + b) / (c * d);

}

void test()
{
	int input = 0;
	printf("请输入一个整数:>");
	scanf_s("%d", &input);
	for (int i = input; i <= (input+10); i++)
	{
		printf("%d ", i);
	}
}

void test()
{
	const int w_d = 7;
	int day = 0, week = 0, reminder = 0;
	printf("请输入天数:>");
	scanf_s("%d", &day);
	while (day > 0)
	{
		week = day / w_d;
		reminder = day % w_d;
		printf("%d周%d天\n", week, reminder);
		printf("请输入天数:>");
		scanf_s("%d", &day);
	}
	printf("bye\n");
}

void test()
{
	const double coefficient = 0.394;
	int input = 0;
	double	inch = 0;
	scanf_s("%d", &input);
	while (input > 0)
	{
		inch = coefficient * (double)input;
		printf("%d cm -> %.3f in\n", input, inch);
		scanf_s("%d", &input);
	}
	printf("bye!");
}
#endif
void test()
{

}
int main()
{
	test();
	return 0;
}