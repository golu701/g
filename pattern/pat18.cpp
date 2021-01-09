/*


1
AB
234
CDEF
56789

*/


#include<iostream>
using namespace std;
int main()
{
    int n,num=1,data=1;
    char ch='A';
    cout<<"Enter no of lines: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            if(data)
            {
                for(int j=1;j<=i;j++)
                {
                data=0;
                cout<<num++<<" ";
                }
            }
            else
            {
                for(int j=1;j<=i;j++)
                {   
                data=1;
                cout<<ch++<<" ";
                }
            }
            
        cout<<"\n";
    }
}

/*

int main()
{
    int num, r, c;
    int i = 1;
    char ch = 'A';
    cout<<"Enter number of lines: ";
    cin>>num;
    cout<<"\n";

    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            if (r % 2 == 0)
            {
                cout<<ch++;
            }
            else
            {
                cout<<i++;
            }
        }
        cout<<endl;
    }
}


*/
