#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,c,s,b;
    while(scanf("%d", &n)!=EOF){
     if(n<0) printf("NO\n");
     else if(n==0) printf("YES\n");
     else{
     s= sqrt(n);
     c=0;
    for(i=0;i<=s;i++){
        for(j=0;j<=s;j++){
            b= (i*i)+(j*j);
            if(b==n){
                c=1;
                break;
            }

        }
        if(c) break;
    }
    if(c)
        printf("YES\n");
    else
        printf("NO\n");
    }
    }
    return 0;
}
