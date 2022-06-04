#include <bits/stdc++.h>
using namespace std;

void conquer(int arr[], int st, int m, int en)
{
    int n1 = m-st + 1;
    int n2 = en-m;
    int arr1[n1], arr2[n2];
    for(int i=0; i<n1; i++)
        arr1[i] = arr[st+i];
    for(int i=0; i<n2; i++)
        arr2[i] = arr[m+1+i];
    int i=0, j=0, k=st;
    while(i<n1 && j<n2)
    {
        if(arr1[i]>=arr2[j])
        {
            arr[k] = arr2[j];
            j +=1;
        }
        else
        {
            arr[k] = arr1[i];
            i += 1;
        }
        k+=1;
    }
    while(i<n1)
    {
        arr[k] = arr1[i];
        i+=1;
        k+=1;
    }
    while(j<n2)
    {
        arr[k] = arr2[j];
        j+=1;
        k+=1;
    }
    
}

void divide(int arr[], int st, int en)
{
    if(st>=en)
        return;
    else
    {
        int m = (en-st)/2 + st;
        divide(arr, st, m);
        divide(arr, m+1, en);
        conquer(arr, st, m, en);
    } 
}
int main()
{
    int arr[] = {12,9,5,1,2,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    divide(arr, 0 , size-1);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}