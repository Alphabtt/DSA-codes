#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>&arr, int start, int n)
{

    int minIdx=start;
    

    if(start>=n-1){
        return;
    }

    for(int i=start+1; i<n; i++)
    {
        if(arr[i]<arr[minIdx])
        {
            minIdx=i;
        }
    }

    swap(arr[minIdx],arr[start]);

    selectionsort(arr,start+1,n);

}




int main()
{


    int n;
    cin>>n;
    vector<int>arr(n);
   

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    selectionsort(arr,0,n);

    
     
    for(int i=0; i<n; i++)
    {
       cout<<arr[i]<<" ";
    }
    


}
