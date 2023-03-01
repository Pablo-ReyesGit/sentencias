#include<iostream>

using namespace std;
int main()
{
	int n1, n2, n3;
	string mensage;
	float promedio;
	cout<<"ingrese nota 1"<<endl;
	cin>>n1;
	cout<<"ingrese nota 2"<<endl;
	cin>>n2;
	cout<<"ingrese nota 3"<<endl;
	cin>>n3;
	
	promedio=(n1+n2+n3)/3;
	
	mensage = promedio>=61 ? "aprobaste" : "reprobaste";
	cout<<mensage<<endl;
	system("pause");
}
