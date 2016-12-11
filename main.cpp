#include <iostream>
#include <sstream>
#include <queue>
#include <utility> 
#include <fstream>
#include <unistd.h>
int oku();
int yaz();
int duzenle();
int parcala();
int parcala2();

using namespace std;
ifstream okuyucu ("vya2016veriler.csv",ios::app);
char aa[255];
string evrak;
string kelime;
string frekans;
queue<string> myqueue;
queue<string> myqueue2;
string mystring;

int main(void)
{
	cout<<"asd";
	oku();
	duzenle();
	yaz();
	return 0;
}
int oku()
{
	while(!okuyucu.eof())
	{
	okuyucu.getline(aa,255,'\n');
	myqueue.push(aa);
	sleep(1);
	parcala();
	cout<<aa<<endl;	
	}
	//swap(myqueue,myqueue2);	
}
int yaz()
{
	while(!myqueue.empty())
	{
		//cout<<myqueue.front()<<endl;
		myqueue.pop();	
	}
	//cout<<"finish";
}
int duzenle()
{
	while(!myqueue.empty())
	{
		
	}
}
int parcala()
{
	int i=0,j=0;
	int a1=0,a2=0;
	for(i=0;i<255;i++)
	{
		if(aa[i]==',')
		{
			//cout<<"kkkkkkkkkk";
			if(a1==0)	a1=i;
			a2=i;			
		}				
	}
	for(i=0;a1<=a2;a1++)
	{
		i++;
		kelime[i]=aa[a1];
		cout<<aa[a1];
	}
	kelime[255]='\0';
	cout<<kelime<<i;
	cout<<a1<<"   "<<a2<<endl;
}
int parcala2()
{
	
}
