#include<iostream>
#include<string>
using namespace std;
class sumeven{
	int m;
	int SUM=0;
public:
	int read(){
		cin>> m;
		return m;
	}
	bool even(int n){
		if (n%2==0){
			return true;
		}else{
			return false;
		}
	}
	void sum(){
		while (read()>0){
			
			if (!even(m)){
				SUM += m;
			}
		}
		cout<< SUM;
	}	
};

int main()
{
	sumeven first;
	first.sum();
	return 0;
}