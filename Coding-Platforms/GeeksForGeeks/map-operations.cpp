//  https://www.geeksforgeeks.org/problems/map-operations/1?page=1&category%255B%255D=Map&sortBy=accuracy&utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=MapandsortBy


//Insert arr[i] as key and i as value
map<int,int> mapInsert(int arr[],int n){
    map<int,int>mp;  
    for(int i=0; i<n; i++){
        mp[arr[i]] = i;
    }
    
    return mp;  
}


                //Print every key and value pair in a new line
void mapDisplay(map<int,int>mp){ 
    for(auto &it: mp){
        cout << it.first <<" "<<it.second <<endl;
    } 
}


             //Write the if and else condition to erase x from map
void mapErase(map<int,int>&mp,int x){
    auto it = mp.find(x);
    if(it!=mp.end()){
        mp.erase(it);
        cout<<"erased "<<x;
    }else
    //else condition
    cout<<"not found";
    
    cout<<endl;
}