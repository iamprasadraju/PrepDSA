// Concatenation of Array (Arrays and Hashing)

// input: nums = [1,4,1,2]
// output: [1,4,1,2,1,4,1,2]

#include <iostream>
#include <vector>
using namespace std;

vector<int> Concatenate(vector<int>& nums){
	vector<int> nums_copy = nums;
	nums.insert(nums.end(), nums_copy.begin(), nums_copy.end());
	return nums;
}



int main(){
	vector<int> nums = {1,4,1,2};
	Concatenate(nums);
	
	for(int n : nums){
		cout << n << endl;
	}
	return 0;
}