/************************************************************************
    > File Name: NiukeTest/HasSubtree.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月01日 星期日 19时38分12秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
	bool IsSubTree(TreeNode* pRoot1,TreeNode* pRoot2){
		if(pRoot2==nullptr)
			return true;
		if(pRoot1==nullptr && pRoot2 != nullptr)
			return false;
		if(pRoot2->val==pRoot1->val)
			return IsSubTree(pRoot1->right,pRoot2->right) &&  IsSubTree(pRoot1->left,pRoot2->left);
		else
			return false;
	}
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
		if(pRoot1==nullptr || pRoot2==nullptr)
			return false;

		return   IsSubTree(pRoot1,pRoot2) ||HasSubtree(pRoot1->left,pRoot2) || HasSubtree(pRoot1->right,pRoot2);
    }
};
