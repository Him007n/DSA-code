#include <iostream>
using namespace std;
int main ()
{
    int a,i,j;
    cin>> a;
    char ch = 'A';
    for ( i = 1; i <= a; i++)
    {
        for ( j = 1; j <= a; j++)
        {
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
}