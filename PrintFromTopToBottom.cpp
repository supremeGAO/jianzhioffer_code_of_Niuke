/************************************************************************
    > File Name: NiukeTest/PrintFromTopToBottom.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月07日 星期六 18时26分20秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
		vector<int> result;
		if(root == nullptr)
			return result;
		TreeNode* tmp = root;
		queue<TreeNode*> store;
		store.push(tmp);
		while(!store.empty()){
			tmp = store.front();
		    store.pop();
			if(tmp->left)
				store.push(tmp->left);
			if(tmp->right)
				store.push(tmp->right);
			result.push_back(tmp->val);
		}
	return result;
    }
};
