#include<iostream>

using namespace std;
int main()
{
	int pais;
	cout<<"ingrese el codigo de su pais"<<endl;
	cin>>pais;
	switch (pais)
	{
		case 502:
			cout<<"Guatemala"<<endl;
		break;
		case 503:
			cout<<"El Salvador"<<endl;
		break;
		case 504:
			cout<<"Honduras"<<endl;
		break;
		case 505:
			cout<<"Nicaragua"<<endl;
		break;
		case 506:
			cout<<"Costa Rica"<<endl;
		break;
		case 507:
			cout<<"Panama"<<endl;
		break;
		default:
			cout<<"este codigo no es de Centroamerica"<<endl;
						
	}
	system("pause");
}
