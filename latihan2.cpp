#include<iostream>
using namespace std;

int main(){
	int angka1;
	int angka2;
	int angka3;

	cout <<"Masukkan angka: ";
	cin >>angka1;
	cout <<"Masukkan angka: ";
	cin >>angka2;
	cout <<"Masukkan angka: ";
	cin >>angka3;

	if (angka1 > angka2 && angka3){
 		cout <<angka1 <<" lebih besar";
	} else if(angka2 > angka3 && angka1){
		cout <<angka2 <<" lebih besar";
	} else if (angka3 > angka2 && angka1){
		cout <<angka3 <<" lebih besar";
	}
}
