/************************************************************************
    > File Name: NiukeTest/Mirror.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月03日 星期二 15时24分15秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
	return 0;
}
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
		if(pRoot==nullptr)
			return ;
		TreeNode* tmp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = tmp;
		Mirror(pRoot->left);
		Mirror(pRoot->right);
    }
};
