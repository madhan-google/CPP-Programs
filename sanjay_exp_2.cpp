#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
using namespace std;
class cricket{
	public:
		string name;
		int runs, innings, times_not_out;
		
		string getName();
		void setName(string name);
		
		int getRuns();
		void setRuns(int run);
		
		int getInnings();
		void setInnings(int inning);
		
		int getTimesNotOut();
		void setTimesNotOut(int not_out);
		
};

string cricket::getName(){
	return this->name;
}
void cricket::setName(string name){
	this->name = name;
}

int cricket::getRuns(){
	return this->runs;
}
void cricket::setRuns(int run){
	this->runs = run;
}

int cricket::getInnings(){
	return this->innings;
}
void cricket::setInnings(int inning){
	this->innings = inning;
}

int cricket::getTimesNotOut(){
	return this->times_not_out;
}
void cricket::setTimesNotOut(int times_nout){
	this->times_not_out = times_nout;
}

int main(){
	cricket c;
	vector<cricket> li;
	int n;
	cout<<"enter the no. of records :";
	cin>>n;
	for(int i=0;i<n;i++){
		string name;
		int run, inns, tno;
		cout<<"\nname: ";
		cin>>name;
		cout<<"runs : ";
		cin>>run;
		cout<<"innings : ";
		cin>>inns;
		cout<<"times not out :";
		cin>>tno;
		c.setInnings(inns);
		c.setName(name);
		c.setRuns(run);
		c.setTimesNotOut(tno);
		li.push_back(c);
	}
	cout<<"NAME\t\tRUNS\tINNINGS\tTIMES NOT OUT\tAVERAGES"<<endl;
	for(int i=0;i<li.size();i++){
		float avg = li[i].getRuns() / li[i].getInnings();
		cout<<li[i].getName()<<"\t\t"<<li[i].getRuns()<<"\t"<<li[i].getInnings()<<"\t"<<li[i].getTimesNotOut()<<"\t\t"<<avg<<endl;
	}
	return 0;	
}
