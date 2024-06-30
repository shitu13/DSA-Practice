#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Australia";
    mp[15] = "Bangladesh";
    mp[2] = "United States";
    mp[3] = "Spain";
    mp[4] = "United Kingdom";
    mp[5] = "France";
    mp[6] = "Germany";
    mp[10] = "India";

    mp.insert( {11, "China"});

    for(auto i : mp)
        cout << i.first << " "<<i.second <<endl;

    cout<<"Is 15 present? " <<mp.count(15)<<endl;

    mp.erase(1);
    
    cout<<endl<<"After erase: "<<endl;
    for(auto i : mp)
        cout << i.first << " "<<i.second <<endl;

    cout <<endl<< "Countries from key 5: " << endl;

    auto it = mp.find(5);
    for(auto i = it; i!=mp.end(); i++ ){
        cout << (*i).first << " "<<(*i).second<<endl;
    }

    return 0;
}