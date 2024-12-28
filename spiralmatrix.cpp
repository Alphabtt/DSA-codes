#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>SprialMatrix(vector<vector<int>>&matrix)
{
    vector<int>ans;

    int row=matrix.size();
    int col=matrix[0].size();

    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
    
    int count=0;
    int total= row * col;

    while(count<total)
    {
      for(int index=startingCol; count<total &&  index<=endingCol; index++)
      {
        ans.emplace_back(matrix[startingRow][index]);
        count++;
      }  
      startingRow++;

      for(int index=startingRow; count<total && index<=endingRow; index++ )
      {
        ans.emplace_back(matrix[index][endingCol]);
        count++;
      }
      endingCol--;

      for(int index=endingCol; count<total && index>=startingCol; index--)
      {
        ans.emplace_back(matrix[endingRow][index]);
        count++;
      }
      endingRow--;

      for(int index=endingRow; count<total &&  index>=startingRow; index--)
      {
        ans.emplace_back(matrix[index][startingCol]);
        count++;
      }
      startingCol++;
   }
return ans;

}

int main()
{
int nRow, mCols;
cin>>nRow>>mCols;
//intializing a 2d vector as matrix and taking input
vector<vector<int>>matrix(nRow, vector<int>(mCols));
{
    for(int i=0; i<nRow; i++)
    {
        for(int j=0; j<mCols; j++)
        {
            cin>>matrix[i][j];
        }
    }
}

vector<int>res = SprialMatrix(matrix);

for(auto i: res)
{
    cout<<i<<" ";
}

return 0;
}
