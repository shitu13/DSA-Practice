#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,j,l,m,n;

	while(scanf("%d%d", &n, &m) && n && m){
     int ar[m];
		long long int k =0;
     for(i=0;i<m;i++){
       scanf("%d", &ar[i]);
       	if(i){
       		if(ar[i-1] > ar[i])
       		  k += ar[i-1] - ar[i] ;
       	    }else
       		 k +=  n - ar[i] ;
	}
	printf("%lld\n", k);
}
  return 0;

  // Shuvongkar roy 2015331035
}
