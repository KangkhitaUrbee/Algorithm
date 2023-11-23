#include<iostream>
using namespace std;
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
    int size=sizeof(arr)/sizeof(arr[0]);


    cout<<"Array Before Sorting : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        cout<<"Array after completing step "<<i+1<<" : ";
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n\tArray After Sorting : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
