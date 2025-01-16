#include<bits/stdc++.h>
using namespace std;

//creating a 2D array in heap memory

int main()
{
    int row ,col;
    cin>>row>>col;

    int **arr = new int* [row];

    //taking how many cols there will be in the rows of 2D arrays

    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];

    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }

    //now releasing the memory

    for(int i=0; i<row; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;

    return 0;

}
