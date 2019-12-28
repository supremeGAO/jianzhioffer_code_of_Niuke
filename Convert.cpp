/************************************************************************
    > File Name: Convert.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月28日 星期六 14时42分20秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
	void _Convert(TreeNode* pRoot,TreeNode**& newHead ,TreeNode*& lastHead){
		if(pRoot == nullptr){
			return;
		}
		if(pRoot->left == nullptr){
			if(*newHead == nullptr)
				*newHead = pRoot;
		}
		_Convert(pRoot->left,newHead,lastHead);
		pRoot->left = lastHead;
		if(lastHead)
			lastHead->right = pRoot;
		lastHead = pRoot;
		_Convert(pRoot->right,newHead,lastHead);
	}
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
		if(pRootOfTree == nullptr)
			return nullptr;
		TreeNode** newHead = nullptr;
		TreeNode* lastHead = nullptr;
		_Convert(pRootOfTree,newHead,lastHead);
		return *newHead;
    }
};
