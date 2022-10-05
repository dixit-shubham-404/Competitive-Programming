#include<bits/stdc++.h>
using namespace std;

bool isMagicSquare(vector<int> v)
{
    int arr[3][3];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]=v[3*i+j];
        
        }
        
    }
	

    for(int i=0;i<3;i++)
    {
        if((arr[i][0]+arr[i][1]+arr[i][2])!=15)
        {
            return false;
        }
    }

    for(int i=0;i<3;i++)
    {
        if(arr[0][i]+arr[1][i]+arr[2][i]!=15)
        {
            return false;
        }
    }

    if(arr[0][0]+arr[1][1]+arr[2][2]!=15)
    {
        return false;
    }
    if(arr[0][2]+arr[1][1]+arr[2][0]!=15)
    {
        return false;
    }

    return true;
}


void findAllMagicSquares(vector<vector<int>> &ret)
{
    vector<int> v(9);
    for(int i=0;i<9;i++)
    {
        v[i]=i+1;
    }

    do{
    
        if(isMagicSquare(v))
        {
            ret.push_back(v);
        }
    }while(next_permutation(v.begin(),v.end()));
}

int differ(vector<int> v1,vector<int> v2)
{
    int cost=0;
    for(int i=0;i<9;i++)
    {
        cost+=abs(v1[i]-v2[i]);
    }
    
    return cost;
}

int cost(vector<int> v)
{
    vector<vector<int>> allMagicSquares;
    findAllMagicSquares(allMagicSquares);
    int ret=INT_MAX;
 
    
    
    for(int i=0;i<allMagicSquares.size();i++)
    {
        ret=min(ret,differ(v,allMagicSquares[i]));
    }

    return ret;
}

int main()
{
    vector<int> v(9);
    for(int i=0;i<9;i++)
    {
        cin>>v[i];
    }
    cout<<cost(v);
}
