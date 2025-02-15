#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int n, int arr1[], int m)
{

    int i=n-1;
    int j=m-1;
    int k=n + m-1;

    while(i>=0 && j>=0)
    {

        if(arr[i]>arr1[j])
        {
            arr[k--]=arr[i--];
        }
        else{
            arr[k--]=arr1[j--];
        }
    }

   
    while(j>=0)
    {
        arr[k--]=arr1[j--];
    }


}

int main()
{

    int arr[10]={1,5,6,7,9};
    int arr1[5]={2,4,7,8,9};
   
    
    merge(arr, 5, arr1, 5);

    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
}

