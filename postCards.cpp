#include <iostream>
using namespace std;
int main()
{
    char curAlp;
    int count =0, handCap= 0;
    string copium;
    cin>>copium;
    for(int i=0; i<copium.length(); i++)
    {   
        if(((i==0) || (copium[i] == curAlp))&&(handCap<5))
            handCap = handCap + 1;
        else if((copium[i] != curAlp)||(handCap >=5))
        {
            count = count + 1;  
            handCap = 1;
        }
        curAlp = copium[i];    
    }
    cout<<count+1<<endl;
}