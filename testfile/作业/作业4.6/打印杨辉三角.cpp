#include<iostream>
#include<string.h>
#include<stdio.h>
class yanghui{
	int y;
	int a[15][15]={0};
public:
	void read(){
		std::cin>>y;
	}
	void Struct(){
		for (int hang=0;hang<y;hang++){
			for (int lie=0;lie<y;lie++){
				if (lie==0||lie==hang){
					a[hang][lie]=1;
				}else {
					a[hang][lie]=a[hang-1][lie-1]+a[hang-1][lie];
				}
			}
		}
		
	}
	void print(){
		for (int i=0;i<y;i++){
			for (int j=0;j<=i;j++){
				std::cout<<a[i][j]<<" ";
			}
			std::cout<<std::endl;
		}
	}
		
};


int main()
{
	int x;
	std::cin>>x;
	const int X=x;
	yanghui m[X];
	for(int i=0;i<X;i++){
		m[i].read();
		m[i].Struct();
		m[i].print();
	}
	return 0;
}