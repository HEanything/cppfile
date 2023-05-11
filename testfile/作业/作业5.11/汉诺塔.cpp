#include<iostream>

using namespace std;
class hannuo{
	int n;
	int cnt=1;
public:
	int read(){
		cin>>n;
		return n;
	}
	void solution(int x,char A,char B,char C){//起始，中转，中止
		if (x==1){
			if(cout<<"Step"<<cnt<<":"<<" Move Disk"<<x<<" from "<<A<<" to "<<C<<endl)//将最后一个移到C
			{
				cnt++;
			}
		}else{
			solution(x-1,A,C,B);//将x-1个A移到B
			if(cout<<"Step"<<cnt<<":"<<" Move Disk"<<x<<" from "<<A<<" to "<<C<<endl)
			{
				cnt++;
			}
			solution(x-1,B,A,C);//将x-1个从b移到c。
		}
	}
		
};
int main()
{
	hannuo first;
	first.solution(	first.read(),'A','B','C');
	return 0;	
}