#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,P,i,dif;
    while(scanf("%d %d", &P,&N)!=EOF){
    int arr[N],c=0;
    for(i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]<arr[i+1])
            dif= arr[i+1]- arr[i];
        else
            dif= arr[i]-arr[i+1];
        if(dif<=P)
            c++;
    }
    if(c==(N-1))
        printf("YOU WIN\n");
    else
     printf("GAME OVER\n");
    }
    return 0;
}
