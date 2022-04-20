#include <stdio.h>

#if 0
#endif
//调整 奇数 偶数 排序
void move(int arr[], int n)
{
	int left = 0;
	int right = n - 1;
	for (int i = 0; i < n; i++)
	{		
		//从左边找偶数
		while (arr[left] % 2 == 1)
		{
			left++;
		}
		//从右边找奇数
		while (arr[right] % 2 == 0)
		{
			right--;
		}
		if (left<right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}

		printf("%d ", arr[i]);
		
	}
	
}
void test()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	
}

int main()
{
	test();
	return 0;
}