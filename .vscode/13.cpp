// #include <iostream>
// using namespace std;
// int main ()
// {
//     int a,i,j;
//     cin>> a;

//     for ( i = 1; i <= a; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
    
// }

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
            cout<<(char)(65+i-1)<<" ";
          
        }
        cout<<endl;
    }
    
}