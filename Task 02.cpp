#include <iostream>
using namespace std;

int main(){

  double InitialBalance, DepositedMoney, Withdrawedmoney;

  cout << "Please enter your initial balance? " << endl;
  cin >> InitialBalance;

  cout << "How much money do you want to deposit? " << endl;
  cin >> DepositedMoney;

  InitialBalance += DepositedMoney;
  cout << "The amount you already have in bank is " << InitialBalance << " Rs" << endl;

  cout << "Please enter the amount of money you want to withdraw from your account? " << endl;
  cin >> Withdrawedmoney;

  InitialBalance -= Withdrawedmoney;
  cout << "Your remaining balance is " << InitialBalance << " Rs" << endl;

  return 0;

}
