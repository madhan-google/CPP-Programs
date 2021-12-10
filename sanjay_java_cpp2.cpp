#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cout<<"\nenter the no of employes you neees to enter :";
	cin>>n;
	cout<<"\nHere you can find the absentism percentage of an employee in total year : ";
	cout<<"\nHere you have 15 columns you can enter you meta data elements : ";
	cout<<"\n_____________________________________________________________________________";
	string mons[] = {"january","febraury","march","april","may","june","july","august","september","october","november","december"};
	string students[n];
	int absent_days[n][12];
	for(int i=0;i<n;i++){
		cout<<"\nEnter "<<(i+1)<<" Student Name : ";
		cin>>students[i];
		for(int j=0;j<12;j++){
			cout<<"\nenter absents days in "<<mons[j]<<": ";
			cin>>absent_days[i][j];
		}
	}
	cout<<"\nNames\tJan\tFeb\tMar\tApr\tMay\tJune\tJuly\tAug\tSep\tOct\tNov\tDec\tTotal\tPercentage\n";
	for(int i=0;i<n;i++){
		cout<<students[i]<<"\t";
		double total = 0;
		double per = 0.0;
		for(int j=0;j<12;j++){
			cout<<absent_days[i][j]<<"\t";
			total = total + absent_days[i][j];
		}
		cout<<int(total)<<"\t";
		per = (total/200)*100;
		cout<<fixed<<setprecision(2)<<per;
		cout<<endl;
	}
	return 0;
}
