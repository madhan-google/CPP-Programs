#include<iostream>
using namespace std;
int ABOVE_100 = 60;
int ABOVE_200 = 80;
int ABOVE_300 = 90;
double getAmount(double unit, int rs){
	double x = unit * rs;
	return x / 100;
}
int main(){
	int n;
	cout<<"enter no. users ";
	cin>>n;
	for(int i=0;i<n;i++){
		string name;
		double units;
		double total_cost;
		cout<<"\nEnter Name : ";
		cin>>name;
		cout<<"Enter Units : ";
		cin>>units;
		if( units >= 200 ){
			total_cost = getAmount(units,ABOVE_200);
		}else if( units >= 300 ){
			total_cost = getAmount(units,ABOVE_300);
		}else{
			total_cost = getAmount(units,ABOVE_100);
		}
		if( total_cost < 50 ){
			total_cost = 50;
		}
		cout<<"Name : "<<name<<endl;
		cout<<"Elcetricity bill : "<<total_cost;
	}
	return 0;
}
