//This code is applicable for all sort of given array/matrix, so more effective and efficient.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix , int target)
{
    
    int row=matrix.size();
    int col=matrix[0].size();

    int rowIndx=0;
    int colIndx=col-1;

    while(rowIndx<row && colIndx>=0)
    {

        int element=matrix[rowIndx][colIndx];

        if(element==target)
        {
            return 1;
        }
        else if(target<element)
        {
            colIndx--;
        }
        else if(target>element)
        {
            rowIndx++;
        }

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
