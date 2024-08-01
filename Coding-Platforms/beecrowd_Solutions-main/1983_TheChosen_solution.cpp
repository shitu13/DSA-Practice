#include<stdio.h>
#include<string.h>
main()
{
    int n;
    scanf("%d", &n);
    int a[n],fc,i;
    double b[n],max=0.0;
    for(i=0;i<n;i++)
        scanf("%d %lf", &a[i], &b[i]);
    for(i=0;i<n;i++){
        if(b[i]>max){
            max= b[i];
            fc=i;
        }
    }
    if(max<8) printf("Minimum note not reached\n");
    else printf("%d\n",a[fc]);
    return 0;
}
