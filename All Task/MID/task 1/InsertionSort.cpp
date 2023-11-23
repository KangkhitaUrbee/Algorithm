#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Hey there, please enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nplease enter the elements of this array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\tArray After sorting : ";
    insertionSort(arr,n);
}
