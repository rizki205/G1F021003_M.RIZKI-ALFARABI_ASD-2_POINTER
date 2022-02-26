//m.rizki alfarabi
#include<iostream>
using namespace std;
int main()
{
	int A, B, C;
	int *P1, *P2, *P3;
	A=10;
	cout<<"Nilai A :"<<A<<endl;
	cout<<"Alamat A :"<<&A<<endl<<endl;
	B=15;
	cout<<"Nilai B :"<<B<<endl;
	cout<<"Alamat B :"<<&B<<endl<<endl;
	P1=&B;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl<<endl;
	P2=P1;
	cout<<"Nilai P2 :"<<*P2<<endl;
	cout<<"Alamat P2 :"<<P2<<endl<<endl;
	C=27;
	cout<<"Nilai C :"<<C<<endl;
	cout<<"Alamat C :"<<&C<<endl<<endl;
	P1=&C;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl<<endl;
	A=*P1;
	cout<<"Nilai A :"<<A<<endl;
	cout<<"Alamat A :"<<&A<<endl<<endl;
	P3=&B;
	cout<<"Nilai P3 :"<<*P3<<endl;
	cout<<"Alamat P3 :"<<P3<<endl<<endl;
	*P2=8;
	cout<<"Nilai P2 :"<<*P2<<endl;
	cout<<"Alamat P2 :"<<P2<<endl<<endl;
	P1=&A;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl<<endl;
	P2=&B;
	cout<<"Nilai P2 :"<<*P2<<endl;
	cout<<"Alamat P2 :"<<P2<<endl<<endl;
	*P1=C;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl<<endl;
	A=*P2;
	cout<<"Nilai A :"<<A<<endl;
	cout<<"Alamat A :"<<&A<<endl<<endl;
	B=6;
	cout<<"Nilai B :"<<B<<endl;
	cout<<"Alamat B :"<<&B<<endl<<endl;
	P3=&B;
	cout<<"Nilai P3 :"<<*P3<<endl;
	cout<<"Alamat P3 :"<<P3<<endl<<endl;
	P3=&C;
	cout<<"Nilai P3 :"<<*P3<<endl;
	cout<<"Alamat P3 :"<<P3<<endl<<endl;
	*P1=*P3;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl<<endl;
	A=B;
	cout<<"Nilai A :"<<A<<endl;
	cout<<"Alamat A :"<<&A<<endl<<endl;
	*P2=*P3;
	cout<<"Nilai P2 :"<<*P2<<endl;
	cout<<"Alamat P2 :"<<P2<<endl<<endl;
	
	return 0;
}

