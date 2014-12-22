//Title:Excel Sheet Column Title 
//Given a positive integer, return its corresponding column title as appear in an Excel sheet.
//
//For example :
//
//1->A
//2->B
//3->C
//...
//26->Z
//27->AA
//28->AB

#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
	
	string convertToTitle(int n) {
		string title;
		if (n <= 0)
			return "";
		else
		{
			int a;
			while (true)
			{
				a = n % 26;
				n = n / 26 -( a==0?1:0);

				if (a == 0)
					a = 90;
				else
					a += 64;
				char b = (char)a;
				title = b + title;
				cout << title << endl;
				if (n == 0)
					break;
			}
		}

		return title;
		
	}
};

int main()
{
	Solution s1;
	int n = 26;
	string s2 = s1.convertToTitle(n);
	system("pause");
}