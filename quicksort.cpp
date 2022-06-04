#include <iostream>
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void quickers(int arr[], int st, int en)
{
    if(st>=en)
        return;
    int pivot = st, i=st, j=st+1;
    while(j<=en)
    {
        if(arr[j]<=arr[pivot])
        {
            swap(arr, i+1, j);  
            i++;j++;
        }
        else
            j++;
    }
    j=en;
    swap(arr, pivot, i);
    quickers(arr,0,i-1);
    quickers(arr, i+1, j);

}
int main()
{
    int size = 6;
    int arr[size] = {9,3,1,5,6,2};
    quickers(arr, 0, size-1);
    for(int i=0; i<size;i++)
        std::cout<<arr[i]<<" ";
    
}