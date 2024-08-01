 #include<stdio.h>
main()
{
    int N,n;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &n);
        printf("%d\n",(((n*n)+n+2)/2));
    }
    return 0;
}
