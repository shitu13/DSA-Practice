#include<bits/stdc++.h>
using namespace std;
main()
{
   int a,b, p, q ;
   float c, ans, l;
   scanf("%d %d %f %d %d %f",&a, &b, &c, &p, &q, &l);
   ans = ((b*c)+(q*l));
   printf("VALOR A PAGAR: R$ %.2f\n", ans);
}
