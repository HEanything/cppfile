#include<iostream>

using namespace std;
class andian{
	int a[100][100];
	int b[100][100],c[100][100];//副本
	int num;
	int x,y;
public:
	void readnum(){
		cin>>num;
	}
	void read(){
		for (int j=0;j<num;j++)
		{
			for(int k=0;k<num;k++){
				cin>>a[j][k];
				b[j][k]=a[j][k];
				c[j][k]=a[j][k];
			} 
		}
	}
	int sortBubble1(int m)
	{
		int i,tem,N;
		for (i=1;i<num;i++){
			for (N=0;N<=num-1-i;N++){
				if (b[m][N]>b[m][N+1]){	
					tem=b[m][N];
					b[m][N]=b[m][N+1];
					b[m][N+1]=tem;}
			}
		}
		return b[m][num-1]; 
	}
	int sortBubble2(int m)
	{
		int i,tem,N;
		for (i=1;i<num;i++){
			for (N=0;N<=num-1-i;N++){
				if (c[N][m]>c[N+1][m]){	
					tem=c[N][m];
					c[N][m]=c[N+1][m];
					c[N+1][m]=tem;}
			}
		}
		return c[0][m];
	}	
	bool judge1(){
		int n=0;
		for (x=0;x<num;x++){
			for (y=0;y<num;y++){
				if(sortBubble1(x)==sortBubble2(y))
				{
						n=1;
						break;
				}
			}
			if (n==1){
				break;
			}
		}
		if(n==1)
		{
			return true;
		}else{
			return false;
		}
		
	}
	void print(){
		if (judge1()){
			cout<<x<<" "<<y;
		}else{
			cout<<"NO";
		}
	}
};

int main()
{
	andian first;
	first.readnum();
	first.read();
	first.print(); 
	return 0;
}