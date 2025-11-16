// Contains Duplicates (Array and Hashing)


// input: nums = [1, 2, 3, 1]
// output: true


#include <iostream>
#include <unordered_set>

using namespace std;

bool Duplicates(vector<int>& nums){
	unordered_set<int> tmp;
	for(int n: nums){
		tmp.insert(n);
	}
	return tmp.size() == nums.size();
}

int main(){
	vector<int> nums = {1, 2, 3, 1};
	
	bool result = Duplicates(nums);
	cout << result << endl;
	return 0;
}