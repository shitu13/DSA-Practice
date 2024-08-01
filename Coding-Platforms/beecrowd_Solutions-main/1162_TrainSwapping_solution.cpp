#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,T,arr[60];
    scanf("%d", &T);
    while(T--){
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
        
       int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                c++;
                }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
