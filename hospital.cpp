#include"hospital.h"
#include<iostream>
#include<string>
using namespace std;
double gethospitalexp(Patient & x)
{
	double temp=x.getbill();
	double gst=temp*5/100;
	return temp+gst;
}
int main ()
{

	Patient p(1200,2,24);
	int j,k,l;
	string str;

	cout<<"welcome to lilavati hospital mumbai"<<endl;
	
	cout<<"enter patient id : "<<endl;
	cin>>j;
       	cout<<"enter bed type 1 to 4 : "<<endl;
	cin>>k;
	cout<<"no. of days : "<<endl;
	cin>>l;
        cout<<"name of patient : "<<endl;
        cin>>str;
	p.set_patient_info(j,str,k,l);
        cout <<"name of patient : " <<p.get_name()<<endl;
	cout<<"total bill amount : " <<gethospitalexp(p)<<endl;
        
	
	InHousePatient i(1200,20,20,0.2);
	cout<<"enter patient id : "<<endl;
	cin>>j;
	cout<<"bed type 1 to 3 : "<<endl;
	cin>>k;
	cout<<"no. of days : "<<endl;
	cin>>l;
        cout<< "name of patient : "<<endl;
        cin>>str;
	i.set_patient_info(j,str,k,l);
	cout << "bill amount for hospital staff "<<endl;
	cout << "name of patient : " <<i.get_name()<<endl;
	cout<<"total bill amount : " <<gethospitalexp(i)<<endl;

	return 0;
}
