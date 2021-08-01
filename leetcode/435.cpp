// leetcode : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//435.给定多个区间，计算让这些区间互不重叠所需要移除区间的最少个数。起止相连不算重叠
/*输入是一个数组，数组由多个长度固定为 2 的数组组成，表示区间的开始和结尾。输出一个
整数，表示需要移除的区间数量。
Input: [[1,2], [2,4], [1,3]]
Output: 1
在这个样例中，我们可以移除区间 [1,3]，使得剩余的区间 [[1,2], [2,4]] 互不重叠。
*/
#include <iostream>
#include <vector>
#include <algorithm>
#using namespace std;

bool comp(<vector<int> &a, < vector<int>& b) {
	return a[1] < b[1];
}

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end(), comp);

}

int main()
{
	vector<vector<int>> intercals = { {1, 2}, {2, 4}, {1, 3} };
	int ret = eraseOverlapIntervals(intervals);
	std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
