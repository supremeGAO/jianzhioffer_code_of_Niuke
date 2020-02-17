/************************************************************************
    > File Name: FindGreatestSumOfSubArray.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2020年02月17日 星期一 09时45分19秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
		if(array.size()== 1)
			return array[0];
		vector<int> maxArray(array.size(),0);
		maxArray[0]= array[0];
		int maxCurrent = array[0];
		for(int i=1;i<array.size();i++){
			int currentValue = maxArray[i-1]+ array[i];
			maxArray[i]=currentValue > array[i]?currentValue:array[i];
			maxCurrent = maxCurrent > maxArray[i]?maxCurrent:maxArray[i];
		}
		return maxCurrent;
    }
};
