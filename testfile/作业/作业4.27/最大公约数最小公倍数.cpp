#include<iostream>
#include<string>
using namespace std;
class FIRST{
	int A,B;
public:
	void read(){
		cin>> A >> B;
	}
	int commtp(){
		int m=A*B;
		m=m/(comdvs());
		return m;
	}
	int comdvs(){
		int a,b;
		if (A>B){
			a=A,b=B;
		}else{
			b=A,a=B;
		}
		int n;
		while(b!=0){
			n=a%b;
			a=b;
			b=n;
		}
		return a;
	}	
};

int main()
{
	FIRST first;
	first.read();
	cout<< first.comdvs()<<endl<<first.commtp();
	return 0;
}