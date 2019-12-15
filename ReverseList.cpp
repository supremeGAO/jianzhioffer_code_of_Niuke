/************************************************************************
    > File Name: NiukeTest/ReverseList.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年11月28日 星期四 20时37分28秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if(pHead==nullptr||pHead->next==nullptr)
			return pHead ;
		ListNode* newHead = ReverseList(pHead->next);
		pHead->next->next = pHead;
		pHead->next = nullptr;
		return newHead;
    }
