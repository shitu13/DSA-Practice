#include<bits/stdc++.h>
using namespace std;

int main()
{
      int test,n,i,j;
      int array[2001];
        while(scanf("%d",&test)==1){
            memset(array,0,sizeof array);
                for(i=1;i<=test;i++){
                    scanf("%d",&n);
                    array[n]++;
                    }
                for(i=0;i<2001;i++)
                    for(j=0;j<array[i];j++){
                        if(array[i]>0)
                        printf("%d aparece %d vez(es)\n",i,array[i]);
                        break;
                    }
                  }
      return 0;
      //Shuvongkar Roy 2015331035
}
