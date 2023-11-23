#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

struct Activitiy
{
    int start, finish;
};

bool activityCompare(Activitiy sp1, Activitiy sp2)
{
    return (sp1.finish < sp2.finish);
}



void printMaxActivities(Activitiy arr[], int n)
{

    sort(arr, arr+n, activityCompare);

    cout << "Here the following activities are selected ";


    int i = 0;
    cout << "(" << arr[i].start << ", " << arr[i].finish << "), ";


    for (int j = 1; j < n; j++)
    {

      if (arr[j].start >= arr[i].finish)
      {
          cout << "(" << arr[j].start << ", "
              << arr[j].finish << ") ";
          i = j;
      }
    }
}


int main()
{
    Activitiy arr[] = {{4, 8}, {2, 3}, {4, 5}, {0, 5},
                                       {6, 8},{8,10}};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMaxActivities(arr, n);
    getch();
    return 0;
}
