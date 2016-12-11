#include <iostream>
#include <sstream>
#include <queue>
#include <utility> 
#include <fstream>
#include <unistd.h>
int oku();
int parcala();
int duzen();

using namespace std;
ifstream okuyucu ("vya2016veriler.csv",ios::app);
char aa[255]="asd";

char kelime[255];

int i,j;
int main() 
{
	oku();
	cout<<"asd";
	return 0;
}
int oku()
{
	while(!okuyucu.eof())
	{
	okuyucu.getline(aa,255,'\n');	
	parcala();
	cout<<kelime<<endl;
	for(i=0;i<255;i++)
	{
		kelime[i]=' ';
	}
	}	
}
int parcala()
{
	i=0;
	j=0;
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
	}	
}
int duzenle()
{
	
}
