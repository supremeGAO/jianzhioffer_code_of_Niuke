/************************************************************************
    > File Name: NiukeTest/VerifySquenceOfBST.cpp
    > Author: ggh
    > Mail: guanghao_gao@163.com 
    > Created Time: 2019年12月09日 星期一 20时08分17秒
************************************************************************/

#include<iostream>
using namespace std;
int main(){
    return 0;
}
class Solution {
	bool IsPostSequence(vector<int>& sequence,int start,int end){
		if(start >=  end)
			return true;
		int rootVal = sequence[end];
		int rootIndex = start-1;
		for(int i=start;i<=end;i++){
			if(sequence[i] >= rootVal){
				rootIndex = i - 1;
				break;
			}
		}
		for(int i = rootIndex+1;i<end;i++){
			if(sequence[i] < rootVal){
				return false;
			}
		}
		return IsPostSequence(sequence,start,rootIndex) && 
			IsPostSequence(sequence,rootIndex+1,end-1);
	}
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
		if(!sequence.size())
			return 0;
		if(IsPostSequence(sequence,0,sequence.size()-1)){
			return 1;
		}else{
			return 0;
		}
    }
};

