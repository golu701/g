/*


    1
   121
  12321
 1234321
123454321

*/


#include<iostream>
using namespace std;
/*
int main()
{
    int n,num;
    cout<<"Enter no of lines: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        num=1;
        for(int j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i)
            {
                cout<<num;
                j<n?num++:num--;
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
}

*/

int main()
{
    int n, c, k, number = 1, space = n;
    cout<<"Enter no of lines ";
    cin>>n;
    cout<<"\n";
    space = n;

    for (c = 1; c <= n; c++)
    {
        for (k = space; k > 1; k--)
            cout<<" ";

        space--;

        for (k = 1; k <= 2 * c - 1; k++)
        {
            if (k <= c)
            {
                cout<<number;

                if (k < c)
                    number++;
            }
            else
            {
                number--;
                cout<<number;
            }
        }
        number = 1;
        cout<<endl;
    }
    
}
