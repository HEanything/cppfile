#include<iostream>
#include<string.h>
#include<stdio.h>
class cns{
	int a;
	int b;
	int x;//
	
public:
	void readfirst(){
		std::cin>>x;
	}
	void read(){
		std::cin>>a>>b;
	}
	void convert(){
		int temp=1,sum=0,y=1;
		while (temp!=0){
			temp=a/b;
			sum=a%b*y+sum;
			a=temp;
			y=y*10;
			
		}
		std::cout<<sum<<std::endl;
		
		
	}
	void print(){
		for (int i=0;i<x;i++){
			read();
			convert();
		}	
	}
	  	
};
int main()
{
/*	int x;
	std::cin>>x;
	const int X=x; 
	cns m[X];
	for (int i=0;i<X;i++){
		m[i].read();
		m[i].convert();
	}*/
	cns first;
	first.readfirst();
	first.print();
	
	return 0;
}