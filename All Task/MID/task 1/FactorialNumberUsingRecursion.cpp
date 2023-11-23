#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n ==1 ||n==0)
    return 1;
        return n * factorial(n - 1);
}

int main(){
    int n;

    cout << "Hey there, please enter a positive integer: ";
    cin >> n;

    cout << "So,the factorial of " << n << " = " << factorial(n);

    return 0;
}
