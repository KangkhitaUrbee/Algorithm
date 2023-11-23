#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

int max(int x, int y)
{
    return (x > y)? x : y;
}

int lcs( char *a, char *b, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (a[m-1] == b[n-1])
        return 1 + lcs(a, b, m-1, n-1);
    else
        return max(lcs(a, b, m, n-1), lcs(a, b, m-1, n));
}


int main()
{
    char a[] = "ABCDEF";
    char b[] = "BFBDAB";

    int m = strlen(a);
    int n = strlen(b);


    cout<<"The length of the LCS = "<< lcs( a, b, m, n ) ;

   getch();
    return 0;
}
