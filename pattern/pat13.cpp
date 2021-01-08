/*

    *
   ***
  *****
 *******
*********

*/


#include<iostream>
using namespace std;

/*
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter no of lines: ";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=2*x-1;j++)
        {
            if(j>=x+1-i&&j<=x-1+i)
                cout<<"*";
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}*/


#include<iostream>
using namespace std;
int main()
{
    int row,c,n,temp;
    cout<<"Enter no of lines: ";
    cin>>n;
    temp=n;
    for(row=1;row<=n;row++)
    {
        for(c=1;c<temp;c++)
            cout<<" ";
        
        temp--;

        for(c=1;c<=2*row-1;c++)
            cout<<"*";
        
        cout<<"\n";
    }
}