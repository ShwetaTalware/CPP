#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i=n-1;i>=1;i--)
    {
        for(k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(j=i;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

/*

Output :

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
    
*/