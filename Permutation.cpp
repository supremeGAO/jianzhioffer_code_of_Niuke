/************************************************************************
    > File Name: Permutation.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2020年01月04日 星期六 12时50分40秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
	void _Permutation(string& str,int ith,vector<string>& res){
		if(ith>=str.size()){
			res.push_back(str);
			return;
		}
		for(int i=ith; i<str.size() ;i++){
			if(ith == i || str[ith] != str[i]){
				swap(str[ith],str[i]);
				_Permutation(str,ith+1,res);
				swap(str[ith],str[i]);
			}
		}
	}
public:
    vector<string> Permutation(string str) {
	vector<string> res;
    if(!str.size())
		return res;
	_Permutation(str,0,res);
     sort(res.begin(),res.end());
	return res;
    }
};
