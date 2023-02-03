//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        pair<int,int> ans;
        int i=0;                           //      up - 1
        int j=0;                           //left-0      right-2
        int dir=2;                         //      down-3
        int ans_i=0;
        int ans_j=0;
        
        while(i>=0 && j>=0 && j<C && i<R)  // standard
        {
            ans_i=i;
            ans_j=j;
            if(matrix[i][j]==0)
            {
                if(dir==2) j++;
                if(dir==3) i++;
                if(dir==0) j--;
                if(dir==1) i--;
            }
            else if(matrix[i][j]==1)
            {
                matrix[i][j]=0;
                if(dir==1)  dir=2;
                else if(dir==2)  dir=3;
                else if(dir==3)  dir=0;
                else  dir=1;
            }
        }
        return {ans_i,ans_j};
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends