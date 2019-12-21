/************************************************************************
    > File Name: clone.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月21日 星期六 14时54分06秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
	void copyNode(RandomListNode* pHead){
		RandomListNode* pCurrent = pHead;
		while(pCurrent){
			RandomListNode* pNew = new RandomListNode(pCurrent->label);
			pNew->next = pCurrent->next;
			pCurrent->next = pNew;
			pCurrent = pNew->next;
		}
	}
	void copyRandomNode(RandomListNode* pHead){
		RandomListNode* pCurrent = pHead;
		while(pCurrent){
			if(pCurrent->random)
				pCurrent->next->random = pCurrent->random->next;
			pCurrent = pCurrent->next->next;
		}
	}
	RandomListNode*  splitListNode(RandomListNode* pHead){
		RandomListNode* pNew = pHead->next;
		RandomListNode* pCurrent = pHead;
		while(pCurrent->next->next){
			RandomListNode* pNext = pCurrent->next;
			pCurrent->next = pNext->next;
			pNext->next = pNext->next->next;
			pCurrent = pCurrent->next;
		}
		pCurrent->next = nullptr;
		return pNew;
		
	}
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
		if(pHead == nullptr)
			return nullptr;
		copyNode(pHead);
		copyRandomNode(pHead);
		return splitListNode(pHead); 
    }
};
