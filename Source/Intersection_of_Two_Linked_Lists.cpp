//Title: Intersection of Two Linked Lists 
//Write a program to find the node at which the intersection of two singly linked lists begins.
//
//For example, the following two linked lists :
//
//A : a1 �� a2
//	�K
//	c1 �� c2 �� c3
//	�J
//B : b1 �� b2 �� b3
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
		//˼·�Ǽ�ȻҪ�ҵ���һ������ģ���ô˵����������ж�һ����Ҳ����˵��������洦֮�󳤶�һ��
		//��ô�������ҳ������ĳ��ȣ�Ȼ�󽫸�������һ��ƫ��ʹ����̵Ķ��룬Ȼ��˳����ʣ������ǲ���һ����
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