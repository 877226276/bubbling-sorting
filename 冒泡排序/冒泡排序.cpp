#include<iostream>
using namespace std;

void Bubblesort(int arr[],int n,bool flag)
{
	for (int i = 0; i < n - 1; i++)//ִ��n-1��ѭ��
	{
		for (int j = 0; j < n - i - 1; j++)//ÿ��ѭ������Ҫ�ԱȵĴ���Ϊ�� n-i-1
		{
			if (flag)//����
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
			else//����
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
	bool less = false;//�����������
	bool greater = true;//�����������
	int arr[6] = { 5,2,3,1,4,0 };
	Bubblesort(arr, 6,less);// ������ ������   ����Ԫ����   bool�ж��������
	for (int i = 0; i < 6; i++)//���������ӡ����������
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}