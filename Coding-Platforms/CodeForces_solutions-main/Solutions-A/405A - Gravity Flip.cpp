#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,arr[10000];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    sort(arr,arr+i);
    for(i=0;i<n;i++){
            if(i==0)
        printf("%d",arr[i]);
    else printf(" %d",arr[i]);
    }
    printf("\n");
    return 0;
}