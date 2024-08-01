#include<bits/stdc++.h>
using namespace std;
int main()
{
    double D,VF,VG;
    while(scanf("%lf %lf %lf", &D, &VF, &VG)!=EOF){
        double TW=12, TG, TF;
        double Z= sqrt((TW*TW)+(D*D));
        TF= TW/VF;
        TG= Z/VG;
        if(TG>TF)
            printf("N\n");
        else
            printf("S\n");
    }
    return 0;
}
