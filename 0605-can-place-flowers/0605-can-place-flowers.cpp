class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int previous=1;
        for(int i=0;i<arr.size();i++)
        {
            if(previous==1 && arr[i]==0){   
                if(i+1<arr.size() && arr[i+1] == 0)   // for the array out of index problem
                {
                    previous=0;
                    n--;
                }
                else if(i+1==arr.size())
                {
                    previous=0;
                    n--;
                }
            }
            else if(arr[i]==0) 
                previous=1;
            else 
                previous=0;
        }
        return n<=0;
    }
};