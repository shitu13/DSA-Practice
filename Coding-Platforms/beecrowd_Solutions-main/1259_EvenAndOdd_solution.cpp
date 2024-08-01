#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0,p=0,arr[100005],even[100005],odd[100005];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
   }
   for(int i=0,j=0;i<n;i++){
        if(arr[i]%2==0){
            even[j]=arr[i];
            c++;
            j++;
        }
        else if(arr[i]%2!=0){
            odd[p]=arr[i];
            d++;
            p++;
        }
   }
   sort(even,even+c);
   sort(odd,odd+d,greater<int>());
   for(int j=0;j<c;j++){
    printf("%d\n", even[j]);
   }
   for(int p=0;p<d;p++){
    printf("%d\n", odd[p]);
   }
   return 0;
}

