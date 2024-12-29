#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix , int target)
{
    
    int row= matrix.size();
    int col=matrix[0].size();

    int total= row * col;

    int start=0;
    int end=total-1;

    int mid= start + (end-start)/2;


    while(start<=end)
    {

        int element= matrix[mid/col][mid % col]; //here element is the mid in this 2D matrix/array

        if(element==target)
        {
            return 1;
        }

        else if(target>element)
        {
            start= mid + 1;
        }
        
        else if(target < element)
        {
            end = mid - 1;
        }
        
        mid = start + (end-start)/2;
    }
    return 0;

}


int main()
{

    int nRow, mCol;
    int target;
    cin>>nRow>>mCol;

     vector<vector<int>>matrix(nRow, vector<int>(mCol));
     

        for(int i=0 ; i<nRow; i++)
        {
            for(int j=0; j<mCol; j++)
            {
                cin>>matrix[i][j];
            }
        }
     

    cout<<"Enter the target"<<endl;
    cin>>target;

    if(searchMatrix(matrix, target))
    {
        cout<<"The element has been found";

    }
    else{
        cout<<"Not found";
    }
  
    return 0;
}
