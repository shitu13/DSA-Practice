#include <iostream>
using namespace std;

void sortDNF(int *arr, int n){
   int mid =0, low=0, high = n-1;

   while(mid<=high){
     if (arr[mid] == 0) {
       swap(arr[low], arr[mid]);
       low++, mid++;
     }
     else if(arr[mid]==1){
        mid++;
     }
     else{
        swap(arr[mid],arr[high]);
        high--;
     }
   }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
        
    sortDNF(arr, n);

    for(auto i: arr)
        cout <<i<<" ";
    return 0;
}