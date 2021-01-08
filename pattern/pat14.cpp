/*

    *    
   * *   
  * * *  
 * * * * 
* * * * *


*/

#include<iostream>
using namespace std;
int main()
{
   int x,k;
   cout<<"Enter no of lines: ";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        k=1;
        for(int j=1;j<=2*x-1;j++)
        {
            if(j>=x+1-i&&j<=x-1+i&&k)
            {
                cout<<"*";
                k=0;
            }
                
            else
            {
                cout<<" ";
                k=1;
            }
            
        }
        cout<<endl;
    }

}