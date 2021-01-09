/*C Language 👨‍💻, [11.06.18 20:57]
34. Pyramid 2

    *
   *A*
  *A*A*
 *A*A*A*
*A*A*A*A*

*/

#include<iostream>
using namespace std;

int main()
{
    int n, c, k, space, count = 1;


    cout<<"Enter the number of rows : ";
    cin>>n;

    space = n;

    for (c = 1; c <= n; c++)
    {

        for (k = 1; k < space; k++)
           cout<<" ";

        for (k = 1; k <= c; k++)
        {
            cout<<"*";

            if (c > 1 && count < c)
            {
                cout<<"A";
                count++;
            }
        }

        printf("\n");
        space--;
        count = 1;
    }
    
}