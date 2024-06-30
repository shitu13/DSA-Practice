// problem link: https://www.naukri.com/code360/problems/replace-spaces_1172172?leftPanelTabValue=SUBMISSION
///////////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.

	string result ="";
	for(int i=0; i<str.length(); i++){
		if(str[i]==' '){
			result.push_back('@');
			result.push_back('4');
			result.push_back('0');
		}
		else
			result.push_back(str[i]);
	}
	return result;
}