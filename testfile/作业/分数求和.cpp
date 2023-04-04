#include<iostream>
#include<string.h>
class fengshuqiuhe{
	int x;
	int fuhao=1;
public:
	read(){
		int a;
		std::cin>>a;
		x=a;
	}
	qiuhe(){
		const int X=x;
		int a[X],b[X];
		char c[X];
		for (int i=0;i<X;i++){
			std::cin>>a[i]>>c[i]>>b[i];
			
		}
		
		long int m=0;
		/*for (int i=0;i<X;i++){
			
			for (int j=0;j<X;j++){
				
			}
		}*/
		
		long int n=1;
		for (int i=0;i<X;i++){
			n = n*b[i];
		}
		if (n==0){
			std::cout<<"error";	
		}else{
		
			for (int i=0;i<X;i++){
				m=m+a[i]*n/b[i];
			}
			if (m==0){
				std::cout<<0;
			}else if(m<0){
				m=0-m;
				fuhao=-1;
			}
			if (m%n==0){
				std::cout<<m/n*fuhao;
			}else{
				int M=m,N=n;
				while (n!=0){
					int t=m%n;
					m=n;
					n=t;
				}
				std::cout<<fuhao*M/m<<'/'<<N/m;
			}
		}
	}

};


int main()
{
	fengshuqiuhe first;
	first.read();
	first.qiuhe();
	return 0;
}