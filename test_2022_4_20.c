#include <stdio.h>

#if 0
#endif
//���� ���� ż�� ����
void move(int arr[], int n)
{
	int left = 0;
	int right = n - 1;
	for (int i = 0; i < n; i++)
	{		
		//�������ż��
		while (arr[left] % 2 == 1)
		{
			left++;
		}
		//���ұ�������
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