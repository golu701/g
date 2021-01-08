#include<iostream>
using namespace std;
int main()
{

    int i,j,n;
    cout<<"Enter no. of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(j=n;j>=1;j--)
        {

            if(j<=i)
            {

                cout<<j;
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }

}
