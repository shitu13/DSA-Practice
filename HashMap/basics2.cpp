// Hashmap - Ordered, Unordered

#include <bits/stdc++.h>
using namespace std;


int main() {
    map<string, int> mp;

    //insertion -1
    pair<string, int> p = make_pair("entry", 3);
    mp.insert(p);

    //insertion =2
    pair<string, int> p2("insert", 2);

    //insertion - 3
    mp["input"] = 1;
    cout << mp["input"]<<endl;
    
    //updation
    mp["input"] = 0;

    
    ////Searching
    //prints updated value
    cout << mp["input"]<<endl;

    cout << mp.at("entry") <<endl;

    // Deleting
    mp.erase("insert");

    cout << mp.count("insert") <<endl;

    //iterative method of traversing
    map<string, int> :: iterator it = mp.begin();
    while(it!=mp.end()){
        cout << it -> first << " "<<it -> second <<endl;
        it++;
     }

    cout<< endl;

    //Iterating through loop
    for(auto &ele: mp){
        cout<< ele.first<<" "<< ele.second <<endl;
    }
    
    return 0;
}