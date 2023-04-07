#include<iostream>
#include<stdio.h>
#include<string.h>
class whichday{
	int a[3];
	char b[2];
	int month[12];
	int m;
	int sum=0;
public:
	void read(){
		std::cin>>a[0]>>b[0]>>a[1]>>b[1]>>a[2];
	}
	void monthin(){
		month[0]=31;
		month[1]=28;
		month[2]=31;
		month[3]=30;
		month[4]=31;
		month[5]=30;
		month[6]=31;
		month[7]=31;
		month[8]=30;
		month[9]=31;
		month[10]=30;
		month[11]=31;
	}
	void leapyear(int x){
		if ((x%4==0&&x%100!=0)||(x%400==0))
		{
			month[1]=29;
			m=366;
		}else{
			month[1]=28;
			m=365;
		}
	}
	void yearsum(){
		for (int i=1;1900<=a[0]-i;i++)
		{
			leapyear(a[0]-i);
			sum +=m;
		}
	}
	void monthsum(){
		leapyear(a[0]);
		for (int i=0;i+1<a[1];i++)
		{
			sum += month[i];	
		}
	}
	void daysum(){
		sum += a[2];
	}
	void which(){
		yearsum();
		monthsum();
		daysum();
		int n=sum%7;
		switch(n){
			case 0:
				std::cout<<"Sunday";
				break;
			case 1:
				std::cout<<"Monday";
				break;
			case 2:
				std::cout<<"Tuesday";
				break;
			case 3:
				std::cout<<"Wednesday";
				break;
			case 4:
				std::cout<<"Thursday";
				break;
			case 5:
				std::cout<<"Friday";
				break;
			case 6:
				std::cout<<"Saturday";
				break;				
		}
	}
};
int main()
{
	whichday first;
	first.read();
	first.monthin();
	first.which();
	
	
	return 0;
}