/************************************************************************
    > File Name: NiukeTest/reOrderArray.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年11月26日 星期二 15时44分28秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
public:
    void reOrderArray(vector<int> &array) {
		vector<int> res(array.size(),0);
		int count = 0;
		for(auto it:array){
			if( (it&1)== 1)
				res[count++]= it;
		}
		for(auto it:array){
			if( (it&1) == 0)
				res[count++]= it;
		}
		array = res;
    }
};
