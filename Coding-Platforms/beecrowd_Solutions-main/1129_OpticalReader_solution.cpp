#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, tmp, counter;

    while (scanf("%d", &n) && n != 0)
    {
        for (int i = 0; i < n; ++i)
        {
            counter = 0;
            for (int j = 1; j <= 5; ++j)
            {
                scanf("%d", &q);
                if (q <= 127) {
                    tmp = j;
                    counter++;
                }
            }

            if (counter > 1 || counter == 0) {
                printf("*\n");
            }else{
                if (tmp == 1) {
                    printf("A\n");
                }else if(tmp == 2){
                    printf("B\n");
                }else if(tmp == 3){
                    printf("C\n");
                }else if(tmp == 4){
                    printf("D\n");
                }else{
                    printf("E\n");
                }
            }
        }
    }

    return 0;
}
