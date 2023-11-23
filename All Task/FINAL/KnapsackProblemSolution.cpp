#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int knapsack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapsack(W, wt, val, n - 1);
    else
        return max(
            val[n - 1]
                + knapsack(W - wt[n - 1],
                           wt, val, n - 1),
            knapsack(W, wt, val, n - 1));
}


int main()
{
    int val[] = { 100, 150, 170 };
    int wt[] = { 50, 60, 70 };
    int W = 100;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack(W, wt, val, n);
    getch();
    return 0;
}
