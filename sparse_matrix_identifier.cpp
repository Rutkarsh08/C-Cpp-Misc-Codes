#include <iostream>
using namespace std;
int main()
{
    
    int i,j,p,q;
    int z=0,nz=0;
    cout<<"Enter number of rows = ";
    cin>>p;
    cout<<"Enter number of columns = ";
    cin>>q;
    int arr[p][q];
    cout<<"Enter values to array: \n";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            if(arr[i][j]==0)
            {
                z=z+1;
            }
            else
            {
                nz=nz+1;
            }
          
        }
    }
    if(z>nz)
    {
        cout<<"Matrix is sparse matrix \n";
    }
    else
    {
        cout<<"Matrix is not a sparse matrix \n";
    }
    cout<<"\n";
    cout<<"The Matrix: \n";
    for(i=0;i<p;i++)
    {
        
        for(j=0;j<q;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\t \t \n";
    }
    cout<<"\n";
    cout<<"Rows \t"<<"Columns \t"<<"Values \t"<<"\n";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            if(arr[i][j]!=0)
            {
                cout<<i<<"\t"<<j<<"\t \t"<<arr[i][j]<<"\n";
            }
        }
    }
}