//Title:Find Peak Element
//A peak element is an element that is greater than its neighbors.
//
//Given an input array where num[i] ≠ num[i + 1], find a peak element and return its index.
//
//The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.
//
//You may imagine that num[-1] = num[n] = -∞.
//
//For example, in array[1, 2, 3, 1], 3 is a peak element and your function should return the index number 2.
//
//click to show spoilers.
//
//Note:
//Your solution should be in logarithmic complexity.
#include <iostream>
#include <vector>
using std::vector;
class Solution {
public:
	int findPeakElement(const vector<int> &num) {
		vector<int>::size_type item_size = 0;
		item_size = num.size();
		vector<int>::size_type left = 0, right = item_size - 1;

		if (left == right)
		{
			return 0;
		}
		else
		{
			while (left < right)
			{
				vector<int>::size_type middle = (left + right) / 2;
				if (left == middle)
				{
					return num[left]>=num[right] ? left : right;
				}
				else
				{
					//if the selected middle one is zhe first or the last one, so it must be the one we want
					//if the middle one is bigger than its previous and next one, so middle one is what we need
					if (middle == 0 || middle == item_size || 
						( num[middle] > num[middle - 1] && num[middle] > num[middle + 1]))
					{
						return middle;
					}
					//下面是根据罗尔定律，如果数组两边，第一个比它的前一个大，最后一个比它的后一个大，那么这一段内必定有一个满足条件的点
					//之后便跟循环下去，与二分查找类似。
					else
					{
						if (num[middle] < num[middle - 1])
						{
							right = middle - 1;
							if (left == right)
							{
								return left;
							}
						}
						else
						{
							if (num[middle] < num[middle + 1])
							{
								left = middle + 1;
								if (left == right)
								{
									return left;
								}
							}
						}
					}
				}
			}
		}
	}

};

int main()
{
	int a[] = { 1,2,3,4,5,6 };
	vector<int> b(a, a + 6);
	Solution s1;
	
	vector<int>::size_type c = s1.findPeakElement(b);
	std::cout << c;
	system("pause");
}