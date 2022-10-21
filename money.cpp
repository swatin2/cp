#include"money_class.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
//	money m();

	double a=0,b=0;
	cout<<"enter rupees and paise "<<endl;
	cin>>a;
	cin>>b;
	money n(a,b);
	cout<<"enter rupees and paise "<<endl;
        cin>>a;	cin>>b;
	money m(a,b);
	money n(a,b);
        money p=m+n;
      	cout<<"1st transaction " <<n.cash()<<endl;
      	cout<<"2st transaction " <<m.cash()<<endl;
      	cout<<"Total transaction money " <<p.cash()<<endl;
     
       	//cout<<p.cash()<<endl;


}
