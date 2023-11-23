#include<iostream>
#include<conio.h>
using namespace std ;

int part(int Array[],int l,int h)
{
    int pivot,i,j,k;

    pivot=Array[h];
    for(i=l-1,j=l;j<h;j++)
    {
        if(Array[j]<pivot)
        {
            i+=1;
            k=Array[j];
            Array[j]=Array[i];
            Array[i]=k;
        }
    }
    k=Array[h];
    Array[h]=Array[i+1];
    Array[i+1]=k;
    return i+1;
}

void Quicksort(int Array[],int l, int h)
{
    if(l>=h)
    {
        return;
    }


     int pivot;

     pivot=part(Array,l,h);

      Quicksort(Array,l,pivot-1);
      Quicksort(Array,pivot+1,h);

}



int main()
{
    int n;
        cout<<"Hey there, please enter number of elements: ";
        cin>>n;
        int a[n];
        cout<<"please enter the array elements:\n";
        for(int i=0;i<n;i++)
       {
    	 cin>>a[i];
       }
       Quicksort(a,0,n-1);
      cout<<"After Quick Sort the array is:\n";
      for(int i=0;i<n;i++)
      {
    	 cout<<a[i]<<" ";
      }
    return 0;
      getch();
}
