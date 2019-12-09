//
// Created by macbookpro on 2019/12/9.
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
//
//Symbol       Value
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.
//
//Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
//
//I can be placed before V (5) and X (10) to make 4 and 9. 
//X can be placed before L (50) and C (100) to make 40 and 90. 
//C can be placed before D (500) and M (1000) to make 400 and 900.
//Given an integer, convert it to a roman numeral. Input is guaranteed to be within the range from 1 to 3999.
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/integer-to-roman
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//

//解题：跟进制变化类似，一个有13位，取商则为当前位的值，除到最后即可
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    string intToRoman(int num){
        vector<string> romanStr = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> arab = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string res;

        for (int i = 0; i < romanStr.size() && num > 0; i++) {
            int value = num / arab[i];
            num = num % arab[i];
            if(value == 0)
                continue;
            while(value--)
                res += romanStr[i];
        }
        return res;
    }
};
int main(){
    int num = 58;
    Solution sol;
    cout << sol.intToRoman(num)<<endl;
}
