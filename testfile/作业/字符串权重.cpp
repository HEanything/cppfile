#include<iostream>
#include<string.h>
class quanzhi{
	char ch[10000];
	int weight[26];
	int cishu[26]={0};
public:
	sortBubble(int a[],int n)
	{
		int i,b,c,N;
		for (i=1;i<n;i++){
			for (N=0;N<=n-1-i;N++){
				if (a[N]<a[N+1]){	
					b=a[N];
					a[N]=a[N+1];
					a[N+1]=b;}
			}
		}
	}
	read(){
		std::cin.getline(ch,10000);
	}
	splitweight(){
		for (int i=0;i<26;i++){
			weight[i]=26-i;
		}
	}
	tongji(){
		for (int i=0;i<strlen(ch);i++){
			switch (ch[i]){
				case 'a':
				cishu[0]++;
				break;
				case 'b':
				cishu[1]++;
				break;
				case 'c':
				cishu[2]++;
				break;
				case 'd':
				cishu[3]++;
				break;
				case 'e':
				cishu[4]++;
				break;
				case 'f':
				cishu[5]++;
				break;
				case 'g':
				cishu[6]++;
				break;
				case 'h':
				cishu[7]++;
				break;
				case 'i':
				cishu[8]++;
				break;
				case 'j':
				cishu[9]++;
				break;
				case 'k':
				cishu[10]++;
				break;
				case 'l':
				cishu[11]++;
				break;
				case 'm':
				cishu[12]++;
				break;
				case 'n':
				cishu[13]++;
				break;
				case 'o':
				cishu[14]++;
				break;
				case 'p':
				cishu[15]++;
				break;
				case 'q':
				cishu[16]++;
				break;
				case 'r':
				cishu[17]++;
				break;
				case 's':
				cishu[18]++;
				break;
				case 't':
				cishu[19]++;
				break;
				case 'u':
				cishu[20]++;
				break;
				case 'v':
				cishu[21]++;
				break;
				case 'w':
				cishu[22]++;
				break;	
				case 'x':
				cishu[23]++;
				break;
				case 'y':
				cishu[24]++;
				break;
				case 'z':
				cishu[25]++;
				break;		
			}
		}
		
	}
	int sumweight(){
		sortBubble(cishu,26);
		int sum=0;
		for (int i=0;i<26;i++){
			sum += weight[i]*cishu[i];
		}
		return sum;		
	}	
};

int main()
{
	quanzhi first;
	first.read();
	first.splitweight();
	first.tongji();
	std::cout<<first.sumweight()<<std::endl;
	return 0;
}