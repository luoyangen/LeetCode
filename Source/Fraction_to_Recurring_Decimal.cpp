//Title:Fraction to Recurring Decimal 
//Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.
//
//If the fractional part is repeating, enclose the repeating part in parentheses.
//
//For example,
//
//Given numerator = 1, denominator = 2, return "0.5".
//Given numerator = 2, denominator = 1, return "2".
//Given numerator = 2, denominator = 3, return "0.(6)".
#include <string>
#include <numeric>
#include <iostream>
#include <unordered_map>
#include <sstream>

using namespace std;
class Solution {
public:
	
	string fractionToDecimal(int numerator, int denominator) {
		string s1;
		if (denominator == 0)
		{
			return s1;
		}
		if (numerator == 0)
		{
			return "0";
		}
		if ((numerator < 0 ) ^ (denominator < 0))
		{
			s1.push_back('-');
		}
		//use long long type in case of influshion
		long long n = abs(numerator);
		long long d= abs(denominator);

		//ÕûÊýÎ»
		s1 += to_string(n / d);
		long long remainer = n % d;
		if (remainer != 0)
		{
			s1.push_back('.');

			// the thought is that using an unordered_map to store the remainer of each iterator
			// the hash value of a remainer is the position of its answer at that iterator in the string
			// Once a remainer is found in the remainer in the map, it indicates that the cycle begins
			// Then add '(' in the hash value position in the string and add ')' at the end of the string
			// Then output the string
			unordered_map<long long, int> remainer_map;
			for (string::size_type pos = s1.size(); remainer != 0; pos++, remainer = (remainer * 10) % d)
			{
				unordered_map<long long , int>::iterator now_iter = remainer_map.find(remainer);
				unordered_map<long long, int>::iterator end_iter = remainer_map.end();

				if (now_iter != end_iter)
				{
					s1.insert(s1.begin() + remainer_map[remainer], '(');
					s1.push_back(')');
					return s1;
				}
				s1.push_back((remainer * 10) / d +'0');
				remainer_map[remainer] = pos;
			}
		}
		
		return s1;
	}
};

int main()
{
	Solution sol;
	string s = sol.fractionToDecimal(7, -12);
	cout << s << endl;
	system("pause");
}