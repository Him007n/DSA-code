#include <iostream>
using namespace std;
int main()
{
   int i=1,b;
   cin>>b;
//    for ( i = 0; i<b ; i++)
//    {
//     for ( j = 0 ; j<b ; j++)
//     {
//         cout<<"*";
       
//     }
//     cout<<endl;

//    }
     while (i <=b)
     {
        int j=1;
        while (j<=b)
        {
            cout<<"*";
            j=j+1;
        }

        cout<<endl;

        i = i + 1;
        
     }
     
   

}