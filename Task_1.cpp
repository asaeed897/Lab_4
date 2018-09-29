#include<iostream>
using namespace std;
class Account
{
public:
Account (double initalbalance )
{
  balance=initalbalance;
}
void credit ( double amount )
{
  balance+=amount;
}
double getBalance( )
{
return balance;
}
double debit(double withDraw_amount)
{
  if(withDraw_amount<=balance)
  {
    balance-=withDraw_amount;
  }
  else
  cout<<"Debit amount exceeded account balance"<<endl;
}
private:
double balance;
};
int main (  )
{
  double withDraw_amount;
Account acct1(45);
std::cout<<"Account 1 Balance is:"<<acct1.getBalance( )<<'\n';
acct1.credit(2323);
std::cout<<"Account 1 Balance is:"<<acct1.getBalance( )<<'\n';
cout<<"\nDo you want to withDraw some amount [y/n] ";
char choice;
cin>>choice;
if(choice=='Y' || choice=='y')
{
  cout<<"\nEnter withdraw amount: ";
  cin>>withDraw_amount;
  acct1.debit(withDraw_amount);
  std::cout<<"Account 1 Balance is:"<<acct1.getBalance( )<<'\n';
}
return 0;
}
