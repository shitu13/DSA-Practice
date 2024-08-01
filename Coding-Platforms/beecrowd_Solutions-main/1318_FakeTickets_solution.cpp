#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,l,fake,m;
	int si[190],clon[10000];
	char st[51] ;
	while(scanf("%d %d", &n,&m)!=EOF&&n!=0&&m!=0) {
    	int sum = 0;

        for(i=0;i<=n;i++) clon[i] =0;


        while(m--){
           scanf("%d", &fake) ;
           if(clon[fake]==1)sum++;
           clon[fake]++;
        }

        printf("%d\n", sum);
}
	return 0;
	// Shuvongkar Roy 2015331035
}
