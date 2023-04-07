#include<iostream>
#include<string.h>
#include<stdio.h>
class cns{
	int x;
public:
	void read(){
		std::cin>>x;
	}
	void convert(){
		int temp=1,sum=0,y=1;
		while (temp!=0){
			temp=x/8;
			sum=x%8*y+sum;
			x=temp;
			y=y*10;
			
		}
		std::cout<<sum;
		
		
	}	
};
int main()
{
	cns eight;
	eight.read();
	eight.convert();
	
	return 0;
}