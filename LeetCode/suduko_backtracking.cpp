//This program checks whether the given suduko can be solved or not

#include <iostream>
using namespace std;

bool safeBox(int arr[9][9],int row,int col,int n)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i+row][col+j]==n)
            {
                return false;
            }
        }
    }
    return true;
}

bool safeCol(int arr[9][9],int col,int n)
{
    for(int row=0;row<9;row++)
    {
        if(arr[row][col]==n)
        {
            return false;
        }
    }
    return true;
}

bool safeRow(int arr[9][9],int row,int n)
{
    for(int col=0;col<9;col++)
    {
        if(arr[row][col]==n)
        {
            return false;
        }
    }
    return true;
}

bool safe(int arr[9][9],int row,int col,int n)
{
    if(arr[row][col]==0)
    {
    if(safeRow(arr,row,n))
    {
        if(safeCol(arr,col,n))
        {
            if(safeBox(arr,row-row%3,col-col%3,n))
            {
                return true;
            }
        }
    }
    }
    return false;
}

bool FindEmpty(int arr[9][9],int& row,int& col)
{
    for(row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            if(arr[row][col]==0)
            {
                return true;
            }
        }
    }
    return false;
}

bool solveSuduko(int arr[9][9])
{
    int col=0,row=0;
    if(!FindEmpty(arr,row,col))
    {
        return true;
    }
    
    for(int i=0;i<9;i++)
    {
        if(safe(arr,row,col,i))
        {
            arr[row][col]=i;
            
            if(solveSuduko(arr))
            {
                return true;
            }
            
            arr[row][col]=0;
        }
    }
    return false;
}

int main() {
	//code
	int t,arr[9][9];
	cin>>t;
	while(t>0)
	{
	    for(int i=0;i<9;i++)
	    {
	        for(int j=0;j<9;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    if(solveSuduko(arr))
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	    
	    t--;
	}
	return 0;
}