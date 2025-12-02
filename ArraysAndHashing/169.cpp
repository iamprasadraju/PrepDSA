/*
 
 	Majority element
	
	Input: [2, 2, 1, 1, 1, 3, 3]
	
	Output: 1
 
 */


#include <iostream>
#include <unordered_map>
using namespace std;


int MajorityElement(vector<int>& nums){
	unordered_map<int, int> tmp;
	for(int n: nums){
		tmp[n]++;
	}
	
	int MajorityKey = nums[0];
	int MaxCount = 0;
	for(auto& p: tmp){
		if(p.second > MaxCount){
			MaxCount = p.second;
			MajorityKey = p.first;
		}
	}
	return MajorityKey;

}

int main(){
	vector<int> nums = {2, 2, 1, 1, 1, 3, 3, 3, 3, 1, 1};
	auto result = MajorityElement(nums);
	
	cout << result << endl;
	return 0;
}