#include<iostream>
class geweihe {
	int x;
public:
/*	int read(){
		int x;
		std::cin>>x;
		return x;
	}*/
	geweihe() {
		int x;
		std::cin>>x;
		this->x = x;
	}
	int daan(){
		int t=0;
		while(this->x!=0) {
			t += this->x%10;
			this->x /= 10;
		}
		return t;
	}	
};
int main() {
//	read;
	geweihe gwh;
	std::cout << gwh.daan() <<std::endl;
	return 0;
}