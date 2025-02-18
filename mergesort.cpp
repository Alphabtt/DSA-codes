#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int s, int e)
{

    int mid =(s+e)/2;
    
    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second= new int[len2];


    int minarrIndex=s;

    for(int i=0; i<len1; i++)
    {
        first[i] = arr[minarrIndex++];
    }

    minarrIndex=mid+1;

    for(int i=0; i<len2; i++)
    {
        second[i]=arr[minarrIndex++];
    }

    minarrIndex=s;

    int indx1=0;
    int indx2=0;


    while(indx1<len1 && indx2<len2)
    {
        if(first[indx1]<second[indx2])
        {
            arr[minarrIndex++]=first[indx1++];
        }
        else{
            arr[minarrIndex++]=second[indx2++];
        }
    }

    while(indx1<len1)
    {
        arr[minarrIndex++]=first[indx1++];
    }
    while(indx2<len2)
    {
        arr[minarrIndex++]=second[indx2++];
    }

    delete [] first;
    delete [] second;




}

void mergesort(int arr[],  int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int mid= (s+e)/2;

        //sorting left side
    mergesort(arr, s, mid);

        //sorting right side
    mergesort(arr, mid+1, e);

    merge(arr,s,e);

}

int main()
{

    int arr[7]={5,4,2,6,8,3,9};

    mergesort(arr,0,6);

    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}

