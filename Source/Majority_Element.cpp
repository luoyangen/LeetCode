//Title:Majority Element 
//Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
//You may assume that the array is non - empty and the majority element always exist in the array.

//Thoughts:遍历整个数组，使用一个count变量，从第一个开始，把第一个当作majority，碰到连续的count就自增1，没有连续的就减1，如果count=0，就将当前访问的点当作
//		   majority。由于这个数组里面majority的次数超过n/2个，那么这个方法可行，否则如测试案例{ 1,2,1,2,3,1,3}，那么就不能找到。
#include <vector>
#include <iostream>
using namespace std;
int majorityElement(vector<int> &num) {
	int maj;
	vector<int>::size_type num_size = num.size();
	for (vector<int>::size_type count = 0, i = 0; i < num_size && count <= num_size / 2; i++){
		if (count == 0){
			maj = num[i];
			count++;
		}
		else num[i] == maj ? count++ : count--;
	}
	return maj;
}
int main()
{
	vector<int> a = { 1,2,1,2,3,1,3};
	int b = majorityElement(a);
	cout << b << endl;
	system("pause");
}