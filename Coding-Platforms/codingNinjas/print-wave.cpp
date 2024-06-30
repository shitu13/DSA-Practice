///////               https://www.naukri.com/code360/problems/print-like-a-wave_893268?leftPanelTabValue=PROBLEM


#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>result;
    //Write your code here
    for(int col=0; col<mCols; col++){
        if(col&1){
            //odd index -> Bottom to top

            for(int row = nRows-1; row>=0; row--){
                result.push_back(arr[row][col]);
            }
        }

        else{
        //even index -> top to bottom

            for(int row =0; row<nRows; row++){
                result.push_back(arr[row][col]);
            }
        }
    }
    return result;
}