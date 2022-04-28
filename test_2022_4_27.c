#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>

#define SPACE ' '

#if 0


void test()
{
	char ch;
	/*ch = getchar();
	while (ch != '\n')
	{
		if (ch == SPACE)
		{
			putchar(ch);
		}
		else
		{
			putchar(ch + 1);			
		}
		ch = getchar();
	}*/
	
	while ((ch = getchar()) != '\n')
	{
	if (isalpha(ch))
		{
			putchar(ch + 1);
		}
		else
		{
			putchar(ch);
		}
	}
	putchar(ch);
}


void test()
{
	char ch;
	while ((ch = getchar()) != '#')
	{
		putchar(ch);
	}
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