//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    
    // for(int i=0;i<size;i++)
    // {    
    //     int val=abs(arr[i]-n);   
    //     int low=0;
    //     int high=size-1;     //low+(high-low)/2;
    //     while(low<=high)
    //     {
    //         int mid=(low+high)/2;
    //         if(arr[mid]==val && mid!=i)
    //             return true;
    //         else if(arr[mid]<val)
    //             low=mid+1;
    //         else
    //             high=mid-1;
    //     }
    // }
    // return false;
    int i=0;
    int j=1;
    while(i<size && j<size)
    {
        if(arr[j]-arr[i]==n && i!=j)
            return true;
        else if(arr[j]-arr[i]>n)
            i++;
        else 
            j++;
    }
    return false;
}