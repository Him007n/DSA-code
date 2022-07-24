#include <iostream>
using namespace std;
int main()
{
    int a=1,sum = 0,b;
    cout<<"Enter the number: "<<endl;
    cin >> b;
    while(a<=b){
        sum=sum+a;
        a=a+1;
        
    }
    cout<<" "<<sum;
}