#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int mn;

    for (int i = 0; i < n-1; i++)
    {
        mn = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[mn])
                mn= j;
        }
        swap(arr[mn], arr[i]);
        cout << "\nArray after completing step "<<i+1<<" : ";
        for (int i=0; i < n; i++)
            cout << arr[i] << " ";
    }
    cout << "\n\n\tArray after sorting : ";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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
    int asize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<asize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr, asize);
}
