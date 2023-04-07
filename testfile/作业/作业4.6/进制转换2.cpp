#include<iostream>
#include<string.h>
#include<stdio.h>
#include<string>
#include<stack>
class cns{
	int x;
	int y;
	int m;//余数
	std::stack<char> mystack;	
public:

	void convert(){
		std::stack<char> mystack;
		int temp=1;
		while (temp!=0){
			temp=x/y;
			m=x%y;
			stackin();
			x=temp;	
		}
	}
	void stackin(){
		switch(m){
			case 0:
				mystack.push('0');
				break;
			case 1:
				mystack.push('1');
				break;
			case 2:
				mystack.push('2');
				break;
			case 3:
				mystack.push('3');
				break;
			case 4:
				mystack.push('4');
				break;
			case 5:
				mystack.push('5');
				break;
			case 6:
				mystack.push('6');
				break;
			case 7:
				mystack.push('7');
				break;
			case 8:
				mystack.push('8');
				break;
			case 9:
				mystack.push('9');
				break;
			case 10:
				mystack.push('A');
				break;
			case 11:
				mystack.push('B');
				break;
			case 12:
				mystack.push('C');
				break;
			case 13:
				mystack.push('D');
				break;
			case 14:
				mystack.push('E');
				break;
			case 15:
				mystack.push('F');
				break;														
		}	
	}
	void stackout(){
		while (!mystack.empty()){
			std::cout << mystack.top();
			mystack.pop();
		}
	}	
	void ifread(){
		while(std::cin>>x>>y)
		{
			convert();
			stackout();
			std::cout<<std::endl;
		}		
	}	
};
int main()
{

	cns r;
	r.ifread();	
	return 0;
}