#include<iostream>
using namespace std;

void Bubblesort(int arr[],int n,bool flag)
{
	for (int i = 0; i < n - 1; i++)//执行n-1次循环
	{
		for (int j = 0; j < n - i - 1; j++)//每轮循环中需要对比的次数为： n-i-1
		{
			if (flag)//升序
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
			else//降序
			{
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}
int main()
{
	bool less = false;//降序排序参数
	bool greater = true;//升序排序参数
	int arr[6] = { 5,2,3,1,4,0 };
	Bubblesort(arr, 6,less);// 参数： （数组   数组元素数   bool判断升序或降序）
	for (int i = 0; i < 6; i++)//遍历数组打印排序后的数组
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}