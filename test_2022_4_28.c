#include <stdio.h>

#if 0


void test()
{
	int input = 0;
	int ret = scanf_s("%d", &input);
	printf("%d\n", ret);
}
#endif

void test()
{
	int ch;
	while ((ch = getchar()) != EOF)// EOF == Ctrl+Z
	{
		putchar(ch);
	}
}



int main()
{
	test();

	return 0;
}