/// https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1

class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux) {
        if(n==1){
            cout<<"move disk " << n << " from rod " <<from <<" to rod "<<to<<endl;
            return 1;
        }
        
        int cnt = toh(n-1, from, aux, to);
        cout<<"move disk " << n << " from rod " <<from <<" to rod "<<to<<endl;
        
        cnt+=1;
        
        cnt+= toh(n-1, aux, to, from);
        
        return cnt;
    }

};