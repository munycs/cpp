#include <iostream>
using namespace std;
class B
	{
	  public:
		int m ,a ;
	  public:
		int Product1 () { return a*m;}
	};
class D:public B
	{
	public:
		int n ;
		int Product2 () { return n* Product1();}
	} ; // End of class D

int main()
	{
		D C1; // C1 is an object of class D
		C1.m = 5; // data directly accessed by object
		C1.a = 4 ;
		C1.n = 3 ;
		cout<<"Product1 = "<<C1.Product1()<<endl;
		cout<<"Product2 = "<<C1.Product2()<<endl;
		return 0;
	}



