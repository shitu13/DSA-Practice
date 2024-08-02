#include <bits/stdc++.h>
using namespace std;

vector<int> myNums(int choco){
    int temp;
    vector<int> res;
    while(choco!=0){
        int temp = choco%10;
        
        if(temp<=4)
          res.push_back(temp);
        else if(temp==9)
          res.push_back(9);
        else
            res.push_back(9-temp);
        choco = choco/10;
    }
    return res;
};



int main() {
    int x;
    cin>>x;
    vector<int> res = myNums(x);

    for(int i=0; i<res.size(); i++){
        cout <<res[i];
    }
}


