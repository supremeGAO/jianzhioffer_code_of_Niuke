/************************************************************************
    > File Name: NiukeTest/FindPath.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月12日 星期四 20时00分58秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
	void __FindPath(TreeNode* root,int expectNumber,int currentNum,vector<vector<int> >& res,vector<int>& path){
		if(!root->left && !root->right){
			currentNum += root->val;
			if(currentNum == expectNumber){
				path.push_back(root->val);
				res.push_back(path);
				path.pop_back();
			}
			return;
		}
		int rootVal = root->val;
		currentNum += rootVal;
		path.push_back(rootVal);
		if(root->left){
			__FindPath(root->left,expectNumber,currentNum,res,path);
		}
		if(root->right){
			__FindPath(root->right,expectNumber,currentNum,res,path);
		}
		path.pop_back();

	}
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
		vector<vector<int> > res;
		if(root == nullptr)
			return res;
		vector<int> path;
		__FindPath(root,expectNumber,0,res,path);
		return res;
    }
};
