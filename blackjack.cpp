#include <bits/stdc++.h>
using namespace std;
int dealer(int a)
{
    int noOfWays;
    if(a == 10)
        noOfWays = 15;        
    else if((a>=1 && a<=9) || (a == 11))
        noOfWays = 4;
    else
        noOfWays = 0;      
    return noOfWays;    
}
int main()
{
    int n;
    cin>>n;
    int band = n - 10;
    cout<<dealer(band)<<endl; 
}