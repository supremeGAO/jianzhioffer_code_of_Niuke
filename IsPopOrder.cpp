/************************************************************************
    > File Name: NiukeTest/IsPopOrder.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月05日 星期四 19时48分58秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
		if(pushV.size() != popV.size())
			return false;
		int i =  0,k = 0;
		int j = pushV.size();
		stack<int> store;
		for(i; i<j;i++ ){
			store.push(pushV[i]);
			while(store.top() == popV[k]){
				k++;
				store.pop();
				if(k == j)
					break;
			}
		}
		return store.empty() ? true : false;
    }
};
