// https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/651072/offering/10442100?goalRedirection=true

#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	
	str[0] = toupper(str[0]);

	for(int i=1; i<str.size(); i++){
		if(str[i]==' ')
			str[i+1] = toupper(str[i+1]);
	}
    
	return str;
}