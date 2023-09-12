#include<iostream>
#include<string.h>
using namespace  std;

class points{
	public:
		int x;
		
		 void set(int x)
		 {
		 	this-> x=x;
		 }
		 void get()
		 {
		 	cout<<"x ="<<x<<endl;
		 }
		  
		  operator++(int)
		  {
		  	this->x++;
		  }
		  
		  operator--(int)
		  {
		  	this->x--;
		  }
};

int main()
{
	points p;
	p.set(20);
	p.get();
	p++;
	p.get();
	p--;
	p.get();
}
