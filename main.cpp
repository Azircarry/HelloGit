#include <iostream>

//胡汉三添加sort 冒泡排序算法
void sort(int arr[], int size)
{
	int tmp = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if(arr[j] < arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	//数组修改
	int arr[] = {10,20,32,1,3,45,55,66,33,0};
	std::cout << "hello git" << std::endl;
    return 0;
}
