#include<iostream>
#include<string.h>
using namespace std;

class Points{
	public :
		int p=10,q=20;
		void sum()
		{
			cout<<"Sum P + Q = "<<p+q<<endl;
		}
		void sum(int a)
		{
			cout<<"Sum P + A = "<<p+a<<endl;
		}
		void sum(int a,int b)
		{
			cout<<"Sum A + B = "<<a+b<<endl;
		}
		void sum(int x,int y, int z)
		{
			cout<<"Sum X + Y + Z = "<<x+y+z<<endl;
		}
		
		
	
};
int main(){
	Points p;
	p.sum();
	p.sum(45);
	p.sum(41,85);
	p.sum(34,66,55);
	
	
	return 0;
}
