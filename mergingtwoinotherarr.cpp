#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int n, int arr1[], int m, int arr3[])
{

    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m)
    {

        if(arr[i]<arr1[j])
        {
            arr3[k++]=arr[i++];
        }
        else{
            arr3[k++]=arr1[j++];
        }
    }

    while(i<n)
    {
        arr3[k++]=arr[i++];
    }

    while(j<m)
    {
        arr3[k++]=arr1[j++];
    }


}

int main()
{

    int arr[5]={1,5,6,7,9};
    int arr1[5]={2,4,7,8,9};
    int arr2[10];
    
    merge(arr, 5, arr1, 5,  arr2);

    for(int i=0; i<10; i++)
    {
        cout<<arr2[i]<<" ";
    }
}

