#include <iostream>
#include <bitset>

using namespace std;

unsigned a,b,c,d,e;

int main() {
	
	cout<<"Podaj a:";

		cin>>a;
		
	cout<<"Podaj b:";
	
		cin>>b;

	c = a | b;
	d = a & b;
	e = a ^ b;
	
	cout<<bitset<8>(c)<<endl;
	cout<<bitset<8>(d)<<endl;
	cout<<bitset<8>(e)<<endl;
	
	cout<<"przesuniecie w lewo: "<<bitset<8>(a>>=b).to_string()<<endl;
	
	cout<<"przesuniecie w prawo: "<<bitset<8>(b<<=a).to_string()<<endl;
	
return 0;
}

