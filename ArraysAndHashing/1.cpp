// Two sums (Arrays and Hashing)

// Input: nums = [2, 7, 11, 15], target = 9
// Output: [0, 1] (indicies)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> Twosum(vector<int>& nums, int target){
	int len = nums.size();
	
	unordered_map<int, int> tmp;
	for(int i = 0; i < len; i++){
		int comp = target - nums[i];
		if(tmp.find(comp) != tmp.end()){
			return {tmp[i], i};
		}
		tmp[nums[i]] = i;  
	}

	return {};
}


int main(){
	vector<int> nums = {2, 7, 11, 15};
	int target = 13;

	auto result = Twosum(nums, target);
	for(int n: result){
		cout << n << " " ;
	}
	return 0;
}