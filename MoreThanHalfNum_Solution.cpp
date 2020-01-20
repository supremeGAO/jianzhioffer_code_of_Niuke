/************************************************************************
    > File Name: MoreThanHalfNum_Solution.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2020年01月20日 星期一 16时24分04秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
		if(numbers.size() == 0)
			return 0;
		int numberNeed = numbers[0];
		int numberTmp = 0;
		int count = 1;
		for(int i=1;i<numbers.size();i++){
			numberTmp = numbers[i];
			if(numberNeed == numberTmp){
				count++;
			}else{
				count--;
				if(!count){
					numberNeed = numberTmp;
					count=1;
				}
			}
		}
		if(count == 0){
			return 0;
		}else{
			count = 0;
			for(auto &i :numbers){
				if(i == numberNeed)
					count++;
			}
			if(count > numbers.size()/2)
				return numberNeed;
			else
				return 0;
		}
    }
};
