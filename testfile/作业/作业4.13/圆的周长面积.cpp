#include<iostream>
using namespace std;
class circle{
	int r;
	float X=3.14;
public:
	void read(){
		cin>>r;
	}
	void diameter(){
		cout<<"直径="<<2*r<<endl;
	}
	void periment(){
		cout<<"周长="<<2*r*X<<endl;
	}
	void area(){
		cout<<"面积="<<r*r*X<<endl;
	}
	void print(){
		read();
		diameter();
		periment();
		area();
	}
};
int main()
{
	circle s;
	s.print();	
	return 0;
}