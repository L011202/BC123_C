#define _CRT_SECURE_NO_DEPRECATE    
//只有VS编译器需要这个语句，防止有些C关键词使用的时候会报警告

/*BC123  小乐乐找最大数
	@author:liang
	time:2024年3月31日10点40分
	题目描述：{小乐乐获得4个最大数，请帮他编程找到最大的数。
	};
*/

/*输入描述
	一行，4个整数，用空格分开
*/

/*输出描述
	一行，一个整数，为输入的4个整数中的最大整数
*/

/*示例
	输入:5 8 2 5
	输出:8
*/

#include <stdio.h>
int main()
{
	int arr[4] = { 0 };					//创建并初始化数组
	int i, temp, num= 0;						//temp用于存储临时变量
	scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);//scanf输入数值
	for (i = 0; i < 3;i++) {			//for循环
		if (arr[i] < arr[i + 1])		//第一个数小于第二个数
		{
			;
		}
		if (arr[i] > arr[i + 1]) {
			temp = arr[i];
			num = arr[i + 1];
			arr[i] = num;
			arr[i + 1] = temp;
		}
		else {
			;
		}
	}
	printf("%d\n", arr[3]);
	return 0;
}