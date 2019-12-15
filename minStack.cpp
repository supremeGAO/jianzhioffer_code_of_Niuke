/************************************************************************
    > File Name: NiukeTest/minStack.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月04日 星期三 19时22分21秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
	stack<int> dataStack;
	stack<int> minStack;
public:
    void push(int value) {
		dataStack.push(value);
		if(minStack.empty() || value < minStack.top())
			minStack.push(value);
		else if(value >= minStack.top())
			minStack.push(minStack.top());
    }
    void pop() {
		minStack.pop();
		dataStack.pop();
    }
	int top() {
		return	dataStack.top();   
    }
    int min() {
		return minStack.top();
    }
};
