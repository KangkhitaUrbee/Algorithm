#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

void min_coins(int coin_value[],int n,int amount)
{
  for( int i=0; i< n; i++ )
    while(amount >= coin_value[i])
    {

      amount= amount - coin_value[i];
      cout<< coin_value[i] <<" ";
    }
  cout<< endl;
}

int main()
{
  int i,j,n,amount;
  cout<<"Hey there, please enter amount to be paid: ";
  cin>>amount;
  cout<<"please enter total kinds of currency: ";
  cin>>n;
  int coin_value[n];
  cout<<"please enter all currency values: ";
  for(i = 0;i< n; i++)
    cin>> coin_value[i];
  sort(coin_value,coin_value+n,greater< int>());
  cout<<"The selected currecy values are: ";
  min_coins(coin_value,n,amount);
    getch();
    return 0;

}
