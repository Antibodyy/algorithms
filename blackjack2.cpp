#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int band = n - 10;
    if(band == 10)  
        cout<<"15"<<endl;
    else if(band == 11 || (band < 10 && band>0))
        cout<<"4"<<endl;
    else
        cout<<"0"<<endl;    
}