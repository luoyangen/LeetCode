//Title: Intersection of Two Linked Lists 
//Write a program to find the node at which the intersection of two singly linked lists begins.
//
//For example, the following two linked lists :
//
//A : a1 → a2
//	↘
//	c1 → c2 → c3
//	↗
//B : b1 → b2 → b3
//	begin to intersect at node c1.
//
//
//Notes :
//1. If the two linked lists have no intersection at all, return null.
//2. The linked lists must retain their original structure after the function returns.
//3. You may assume there are no cycles anywhere in the entire linked structure.
//4. Your code should preferably run in O(n) time and use only O(1) memory.

#include <iostream>
#include <cstdio>
using namespace std;

struct ListNode {
    int val;
	ListNode *next;
	//ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		//思路是既然要找到第一个交叉的，那么说明后面的序列都一样，也就是说从这个交叉处之后长度一样
		//那么可以先找出两个的长度，然后将更长的那一个偏移使得与短的对齐，然后顺序访问，看看是不是一样的
		int lengthA = 0, lengthB = 0;
		ListNode *pointA = 0, *pointB = 0;

		if (headA == NULL || headB == NULL)
		{
			return NULL;
		}
		pointA = headA;
		pointB = headB;

		while (pointA!=NULL)
		{
			lengthA++;
			pointA = pointA->next;
		}
		while (pointB!=NULL)
		{
			lengthB++;
			pointB = pointB->next;
		}

		pointA = headA;
		pointB = headB;
		while (lengthA<lengthB)
		{
			pointB = pointB->next;
			lengthB--;
		}
		while (lengthA>lengthB)
		{
			pointA = pointA->next;
			lengthA--;
		}
		while (lengthA!=0)
		{
			if (pointA == pointB)
				return pointA;
			else
			{
				pointA = pointA->next;
				pointB = pointB->next;
				lengthA--;
			}
		}
		return NULL;
	}
};

void main()
{
	//no test 
}