/*
 Floyd's triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n,num=1;
    cout<<"Enter no of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            cout<<" "<<num++;
        }
        cout<<endl;
    }
}