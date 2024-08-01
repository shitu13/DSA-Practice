#include<stdio.h>
main()
{
     int n,m,i;
     scanf("%d%d", &n,&m);
     if(n<m){
     for(i=n+1;i<m;i++){
        if(i%5==2||i%5==3) printf("%d\n",i);
     }
}
    else if(n>m){{
        for(i=m+1;i<n;i++){
            if(i%5==2||i%5==3) printf("%d\n",i);
        }
    }
}
}
