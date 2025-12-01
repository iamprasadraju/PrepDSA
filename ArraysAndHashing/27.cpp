/*
	Remove element (Arrays & Hashing)
	
	Input: nums = [1,1,2,3,4], val = 1
	Output: 3 -> size of [2, 3, 4]
	
 */
 
#include <iostream>
#include <algorithm>
using namespace std;


int RemoveElement(vector<int>& nums, int val){
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] == val){
			nums.erase(nums.begin() + i);
			i--;
		}
	}
	size_t k = nums.size();
	return k;
}

int main(){
	vector<int> nums = {1, 1, 2, 3, 4};
	int val = 1;
	size_t result = RemoveElement(nums, val);
	
	cout << result << endl;
	
	return 0;

}