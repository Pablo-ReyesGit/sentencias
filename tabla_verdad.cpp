#include<iostream>

using namespace std;
int main()
{
	char lapiz, lapicero, cuaderno;
	cout<<"trae lapiz(s/n)"<<endl;
	cin>>lapiz;
	cout<<"trae lapicero(s/n)"<<endl;
	cin>>lapicero;
	cout<<"trae cuaderno(s/n)"<<endl;
	cin>>cuaderno;
	
	if (lapiz=='s' || lapicero=='s' && cuaderno=='s')
	{
		cout<<"puede entrar"<<endl;
	} else {
		cout<<"no puede entrar"<<endl;
	}
}
