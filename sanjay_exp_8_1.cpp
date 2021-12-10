#include<iostream>
using namespace std;
class account{
	private:
		string c_name, acc_type;
		long int c_number, balance;
		account();
};
account::account(){
	cout<<"\nenter your name : ";
	cin>>c_name;
	cout<<"\nenter account number : ";
	cin>>c_number;
	cout<<"\nenter account type : ";
	cin>>acc_type;
	cout<<"\nenter your balance amount : ";
	cin>>balance;
}
//.............................................................
class sav_acc : account{
	account *acc;
	private:
		long int deposit(long int amount);
		long int withdrawl(long int amount);
		sav_acc(account acc);
};
sav_acc::sav_acc(account acc){
	this->acc = &acc;
}
long int sav_acc::deposit(long int amount){
	acc.balance = acc.balance + amount;
	return acc.balance;
}
long int sav_account::withdrawl(long int amount){
	if( amount > acc.balance ){
		cout<<"\ninsufficient balance ";
		return 0;
	}else{
		acc.balance = acc.balance - amount;
	}
	return acc.balance;
}
//.....................................................
class cur_acc{
	private:
		long int deposit(account acc);
		long int withdrawl(account acc);
};
//....................................................................
int main(){
	account acc;
	sav_acc sa;
	sa.deposit()
}
