#include<iostream>

using namespace std;
class jingquezhi{
	int a,b;
	char c;
public:
	void read(){
		cin>> a >> c >> b;
	}
	int cal(){
		int num,m;
		a=a*10;
		num=a%b;
		m=a/b;
		a=num;
		return m;
	}
	void print(){
		cout<<"0.";
		for (int i=0;i<200;i++){
			cout<<cal();
			if (a==0){
				break;
			}	
		}
		cout<<endl;
	}		
};

int main()
{
	jingquezhi first;
	first.read();
	first.print();
	return 0;
}