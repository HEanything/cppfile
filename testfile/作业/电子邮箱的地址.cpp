#include<iostream>
#include<string.h>
class email {
	int x=0;
	int x1=0;
	int x2=0;
	int x3=0;
public:
	dizhi() {
		char ch1[200];
		std::cin.getline(ch1,200,'@');
		int l1=strlen(ch1);
		char ch2[200];
		std::cin.getline(ch2,200,'.');
		int l2=strlen(ch2);		
		char ch3[200];
		std::cin.getline(ch3,200);
		int l3=strlen(ch3);
		if (l1*l2*l3!=0){
			x=1;
		}
		for (int i=0;i<l1;i++){
			if ((ch1[i]<='9'&&ch1[i]>='0')||(ch1[i]<='z'&&ch1[i]>='a')||(ch1[i]<='z'&&ch1[i]>='A')||(ch1[i]=='_')||(ch1[i]=='-'))
			x1=1;
		}
		for (int i=0;i<l2;i++){
			if ((ch2[i]<='9'&&ch2[i]>='0')||(ch2[i]<='z'&&ch2[i]>='a')||(ch2[i]<='z'&&ch2[i]>='A')||(ch2[i]=='_')||(ch2[i]=='-'))
			x2=1;
		}
		for (int i=0;i<l3;i++){
			if ((ch3[i]<='9'&&ch3[i]>='0')||(ch3[i]<='z'&&ch3[i]>='a')||(ch3[i]<='z'&&ch3[i]>='A')||(ch3[i]=='_')||(ch3[i]=='-'))
			x3=1;
		}
		
	/*	char ch[200];
		std::cin.getline(ch,200,' ');
		int strlen(ch);
		int 
		for (int i=0;i<N;i++)*/
		
		
	}
	panduan(){
		if (x*x1*x2*x3==1){
			std::cout<<"yes"<<std::endl;
		}else{
			std::cout<<"no"<<std::endl;
		}
	}
};


int main()
{
	email first;
	first.dizhi();
	first.panduan(); 
	
	return 0;
}