#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int duration;
	int value;
	double score;
    }
data;

        bool acompare(data lhs, data rhs){
            return lhs.score > rhs.score;
            }

int main(){
	int n, t, idx=1;
	while (scanf("%d %d",&n,&t)==2) {
		if (!(n==0 && t==0)) {
			data arr[n];
			for (int i=0; i<n; i++) {
				scanf("%d %d",&arr[i].duration, &arr[i].value);
				arr[i].score = (double)arr[i].value / (double)arr[i].duration;
			}
			sort(arr, arr+n, acompare);
			int maxValue = -1;
			for (int i=0; i<n; i++)
			{
				int j = i;
				int scoreNow = 0;
				int timelimit = t;
				while (timelimit>0 && j<n) {
					if (timelimit>=arr[j].duration) {
						int x = timelimit/arr[j].duration;
						scoreNow += arr[j].value * x;
						timelimit -= (arr[j].duration*x);
					}
					j++;
				}
				if (scoreNow >= maxValue)
					maxValue = scoreNow;
			}
			printf("Instancia %d\n",idx);
			printf("%d\n\n",maxValue);
			idx++;
		}
	}
	return 0;

	//Shuvongkar roy 2015331035
}
