#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(int i=1;i<=n*2-1;i++)
    {
        i<=n?k++:k--;
        for(int j=1;j<=n*2-1;j++)
        {
            if(j<=n+1-k||j>=n-1+k)
                cout<<" " ;
            else
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }
}
