/*
	Valid Anagram (Arrays and Hashing)
	
	Input: s = "anagram" 	t = "nagaram"
	
	Output: True
*/


#include <iostream>
using namespace std;

bool isAnagram(string s, string t){
	if(s.size() != t.size()){
		return false;
	}
	for(char c: s){
		size_t pos = t.find(c);
		if(pos != string::npos){
			t.erase(pos, 1);
		}
		else{
			return false;
		}
	}
	return t.empty();
}



int main(){
	string s = "anagram";
	string t = "nagaram";

	bool result = isAnagram(s, t);
	cout << result << endl;

	return 0;
}