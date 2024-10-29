#include <iostream>
using namespace std;

int main(){

  double InitialBalance, DepositedMoney, Withdrawedmoney;

  Cout << "Please enter your initial balance? " << endl;
  Cin >> InitialBalance;

  Cout << "How much money do you want to deposit? " << endl;
  cin >> DepositedMoney;

  InitialBalance += DepositedMoney;
  Cout << "The amount you already have in bank is " << InitialBalance << " Rs" << endl;

  Cout << "Please enter the amount of money you want to withdraw from your account? " << endl;
  Cin >> Withdrawedmoney;

  InitialBalance -= Withdrawedmoney;
  cout << "Your remaining balance is " << InitialBalance << " Rs" << endl;

  return 0;

}