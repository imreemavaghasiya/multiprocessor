#include<iostream>
#include<string.h>
using namespace std;

class xyz{
	public :
	 int a,b;
	void set(int a, int b){
		this->a = a;
		this->b = b;
	}
	void print()
	{
			cout<<"A = "<<a<<" "<<"B = "<<b<<endl;
	}
	xyz operator+(xyz n)
	{
		xyz x;
		x.a = this->a + n.a;
		x.b = this->b + n.b;
		return x;
	}
};
int main()
{
	xyz x,x1,x2;
	
	x.set(10,20);
	x.print();
	x1.set(15,25);
	x1.print();
	cout<<"==== Sum A + A & B + B ====="<<endl;
	x2 = x + x1;
	x2.print();
	
	
	return 0;
}
