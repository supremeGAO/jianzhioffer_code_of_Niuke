/************************************************************************
    > File Name: NiukeTest/FindKthToTail.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年11月27日 星期三 20时11分32秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
	void _FindKthToTail(ListNode* pListHead,unsigned int& k,ListNode*& res){
		if(pListHead == nullptr || k == 0)
			return ;
		_FindKthToTail(pListHead->next,k,res);
		if(k>0){
			k--;
			if(k==0)
				res = pListHead;
		}
	}
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if(pListHead == nullptr)
			return nullptr;
		ListNode* res = nullptr;
		_FindKthToTail(pListHead,k,res);
		return res;
    }
};
