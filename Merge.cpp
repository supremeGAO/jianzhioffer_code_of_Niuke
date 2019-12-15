/************************************************************************
    > File Name: NiukeTest/Merge.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年11月30日 星期六 20时17分17秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
		if(pHead1==nullptr)
			return pHead2;
		if (pHead2 == nullptr)
			return pHead1;
		if(pHead1->val<pHead2->val){
			pHead1->next = Merge(pHead1->next,pHead2);
			return pHead1;
		}else{
			pHead2->next = Merge(pHead1,pHead2->next);
			return pHead2;
		}
    }
};
