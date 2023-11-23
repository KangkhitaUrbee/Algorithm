#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
 int i, key, j;
 for (i = 1; i < n; i++)
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
}
void printArray(int arr[], int n)
{
 int i;
 for (i=0; i < n; i++)
 cout<<arr[i]<<" ";
 cout<<endl;
}
int binarySearch(int arr[], int l, int r, int x)
{
 if (r >= l) {
 int mid = l + (r - l) / 2;

 if (arr[mid] == x)
 return mid;

 if (arr[mid] > x)
 return binarySearch(arr, l, mid - 1, x);

 return binarySearch(arr, mid + 1, r, x);
 }

 return -1;
}
int main()
{
 int n,x,i;
 cout<<"Enter size of array: ";
 cin>>n;
 int arr[n];
 cout<<"Enter Array Elements: ";
 for(i=0;i<n;i++)
 {
 cin>>arr[i];
 }
 insertionSort(arr, n);
 cout<<"After sorting..."<<endl;
 printArray(arr,n);
 cout<<endl;
 cout<<"Enter Item to search for: ";
 cin>>x;
 int result = binarySearch(arr, 0, n - 1, x);
 if (result == -1)
 cout<<x<<" is not present in array";
 else
cout<<x<<" is present at index " <<result;
 return 0;
}
