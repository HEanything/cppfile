#include<iostream>
void sortBubble(int a[],int n);
void sortBubble(int a[],int n)
{
	int i,b,c,N;
	for (i=1;i<n;i++){
		for (N=0;N<=n-1-i;N++){
			if (a[N]>a[N+1]){	
				b=a[N];
				a[N]=a[N+1];
				a[N+1]=b;}
		}
	}
}
class length{
	int x;
public:
	leng(){
		int a;
		std::cin>>a;
		this->x = a;
	}
	str(){
		const int X=this->x;
		int a[X];
		int b[X];
		int c[X];
				
		for (int i=0;i < X;i++){
			std::cin>>a[i];
			b[i]=a[i];
			c[i]=0;
		}
		int m=0;
		sortBubble(b,X);
		for (int i=0;i<X-2;i++){
			if (i==0&&b[i]==b[i+1]&&b[i]!=b[i+2]){
				c[m]=b[i];
				m++;
			}
			else if(b[i]==b[i+1]&&b[i]!=b[i+2]&&b[i]!=b[i-1]){
				c[m]=b[i];
				m++;
			}
		}

		if(b[X-2]==b[X-1]&&b[X-2]!=b[X-3]){
			c[m]=b[X-2];
		}
		const int M=m;
		int d[M+1];
		int y=0;
		for (int j=0;j<=m;j++){
			for (int i=0;i<X;i++){
				if (a[i]==c[j]){
					d[y]=i;
					y++;
					break;	
				}			
			}
		}
		sortBubble(d,M+1);
		for (int i=0;i<M+1;i++){
			std::cout<<a[d[i]]<<" ";
		}		
		/*for (int i=0;i<N;i++){
			for (int j=0;j<=M;j++){
				
			}
		}*/
		
	}
};

int main(){
	length first;
	first.leng();
	first.str();
	return 0;
}