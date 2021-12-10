#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"\nenter the no of employes you neees to enter :";
	cin>>n;
	cout<<"\nHere you can find the absentism percentage of an employee in total year : ";
	cout<<"\nHere you have 15 columns you can enter you meta data elements : ";
	cout<<"\n_____________________________________________________________________________";
	string a[n+1][15];
	int b[n+1][15];
	int total = 0;
	int t[n+1];
	float per[n+1];
	for(i=0;i<n+1;i++){
		for(j=0;j<15;j++){
			if( i == 0 ){
				cout<<"\nenter the meta data elements ar column "<<(j+1)<<":\n";
				cin>>a[i][j];
			}else if( j == 0 && i > 0 ){
				cout<<"\nenter the employes names : \n";
				cin>>a[i][j];
			}else if( i > 0 && j > 1 && j <= 13 ){
				cout<<"\nenter the absent days in "<<a[0][j-1]<<":\n";
				cin>>b[i][j-1];
			}
		}
	}
	for(i=1;i<n+1;i++){
		total = 0;
		for(j=1;j<=13;j++){
			total = total + b[i][j];
		}
		t[i] = total;
		per[i] = (float)(t[i]/200) * 100;
	}
	for(i=0;i<n+1;i++){
		for(j=0;j<15;j++){
			if( i == 0 ){
				cout<<a[i][j]<<"\t";
			}else if( j == 0 && i > 0 ){
				cout<<a[i][j]<<"\t";
			}else if( i > 0 && j > 0 && j < 13 ){
				cout<<b[i][j]<<"\t";
			}else if( i > 0 && j == 13 ){
				cout<<t[i]<<"\t";
			}else if( j == 14 && i > 0 ){
				cout<<per[i]<<"\t";
			}
			//cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
