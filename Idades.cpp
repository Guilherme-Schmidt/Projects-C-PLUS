#include<iostream>
#include<iomanip>
using namespace std;
int main () {
	
	string nome1,nome2;
	int idade1,idade2;
	double media ;
	
	cout <<"Dados da primeria pessoa : ";
	cout<<"Nome : ";
	getline(cin,nome1);
	cout<<"Idade 1 : ";
	cin>>idade1;
	
	cout <<"Dados da segunda pessoa : ";
	cout<<"Nome : ";
	cin.ignore(INT_MAX, '\n'); 
	getline(cin,nome2);
	cout<<"Idade 2 : ";
	cin>>idade2 ;
	
	media = (idade1+idade2)/2.0;
	cout<<fixed<<setprecision(1);
	cout<<"A idade media de "<<nome1<<"e"<<nome2<<"eh de "<<media<<"anos"<<endl;
	
	
	
	
	
}
