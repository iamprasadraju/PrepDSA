// Group Anagrams (Arrays & Hashing)

/*
	Input: strs = ["eat","tea","tan","ate","nat","bat"]

	Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
 */



#include <iostream>
using namespace std;


vector<vector<string>> GroupAnagram(vector<string>& strs){
	unordered_map<string, vector<string>> m; 
	for(string str: strs){
		string sorted_str = str; 
		sort(sorted_str.begin(), sorted_str.end());
		m[sorted_str].push_back(str);
	}
	
	vector<vector<string>> result;
	for(auto& pair: m){
		result.push_back(pair.second);
	}
	return result;

}


int main(){
	vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	GroupAnagram(strs);
	
	return 0;
}