#include<iostream>
using namespace std;
int main()
{
    int x, y, n, a, z, s;
    cout<<"Enter no of lines: ";
    cin>>n;
    s = n;

    for (x = 0; x <= n; x++)
    {
        a = 1;
        for (z = s; z >= 0; z--)
            cout<<" ";

        s--;

        for (y = 0; y <= x; y++)
        {
            cout<<a<<" ";
            a = (a * (x - y) / (y + 1));
        }
        cout<<"\n";
    }
}