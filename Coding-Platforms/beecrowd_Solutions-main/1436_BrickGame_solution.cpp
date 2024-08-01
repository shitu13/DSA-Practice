#include<stdio.h>
int main()
{
    int T,cas=0;
    scanf("%d", &T);
    while(T--){
        int n,i,j,temp,mal,arr[20];
        scanf("%d", &n);
        for(i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        cas++;

        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp= arr[j];
                    arr[j]= arr[j+1];
                    arr[j+1]= temp;
                }
            }
        }
        mal= n/2;
        printf("Case %d: %d\n",cas, arr[mal]);

        }
        return 0;
}
