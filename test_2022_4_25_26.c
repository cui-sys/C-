#include <stdio.h>

#if 0
void test()
{
	int n = 0, r = 0;
	int x = (2 + 3) * 6;//30
	int y = (12 + 6) / 2 * 3;//27
	int z = n = (2 + 3) / 4;//1
	int m = 3 + 2 * (r = 7 / 2);//9
	printf("%d %d %d %d\n", x, y, z, m);
}

void test()
{
	int x = (int)3.8 + 3.3;//6 - 因为 (int)3.8 强转位3， 3+3.3
	int y = (2 + 3) * 10.5;//52 - 先计算完成再截取整数部分
	int z = 3 / 5 * 22.0;//0 - 3 、 5 默认为 int 所有 3/5 = 0
	int m = 22.0 * 3 / 5;//13
	printf("%d %d %d %d\n", x, y, z, m);
}


void test()
{
	int a = 30.0 / 4.0 * 5.0;//37
	int b = 30.0 / (4.0 * 5.0);//1
	int c = 30 / 4 * 5;//35 - 默认为 int 30/4=7 
	int d = 30 * 5 / 4;//37
	int e = 30 / 4.0 * 5;//37
	int f = 30 / 4 * 5.0;//37
	printf("%d %d %d %d %d\n", a, b, c, d, e, f);
}
#endif
void test()
{
	int i = 1;
	float n;
	while (i++ < 30);
	{
		n = 1.0/ i;
		printf(" %f\n", n);		
	}
}

int main()
{
	test();

	return 0;
}