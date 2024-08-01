#include<bits/stdc++.h>
using namespace std;

int main()
{
 int N = 0, i = 0, x = 0;
 int array[10005];
 scanf("%d", &N);

    while(N!= 0)
    {
        x = 0;
        for(i = 0; i <N; i++){
        scanf("%d", &array[i]);
    }

    for(i = 0; i < N; i++){
        if(array[i] < array[(i + 1)%N])
    {
    if(array[(i + 1)%N] > array[(i + 2)%N]){
     x++;
    }
   }

    if(array[i] > array[(i + 1)%N]){
    if(array[(i + 1)%N] < array[(i + 2)%N])
    {
     x++;
    }
   }
  }
        printf("%d\n", x);
        scanf("%d", &N);

 }

 return 0;

}
