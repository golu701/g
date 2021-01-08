/*
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1


*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter number of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            if(j<=i)
                cout<<j;
            else
                cout<<" ";
        }

        for(j=n;j>=1;j--)
        {
            if(j<=i)
                cout<<j;
            
            else
            {
                    cout<<" ";
            }
            
        }
        cout<<endl;

    }
}
