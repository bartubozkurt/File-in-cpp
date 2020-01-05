#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream dosya1("gecenler.txt");
	ofstream dosya2("kalanlar.txt");
	
	int vize[100],final[100],n,i;
	int ortalama[n];
	string ogrId[10];
	
	
	cout << "Kac ogrenci gireceksiniz ?" << endl;
	cin >> n;
	
	for(int i=0; i < n;i++){
		cout <<"Ogrenci numarasi giriniz ! (0-10 karakter)" << endl;
		cin >> ogrId[i];
		cout << "Vize notu giriniz : (0-100)"<< endl;
		cin >> vize[i];
		cout << "Final notu giriniz : (0-100)" << endl;
		cin >> final[i];
		ortalama[i] = (vize[i]*0.3) + (final[i]*0.7);
		cout << "ortalama : " << ortalama[i] << endl;
		
	}
	
	for(int i=0; i< n;i++){
		if(ortalama[i] > 50){
			dosya1 << "--GECENLER--" << endl;
		   dosya1 << ogrId[i] << "," << vize[i] << "," << final[i] << "," << ortalama[i] << endl;
	
		}
		else{
			dosya2 << "--KALANLAR--" << endl;
			dosya2 << ogrId[i] << "," << vize[i] << "," << final[i] << "," << ortalama[i] << endl;	
		}
}
    cout << "Dosya ya yazma islemi tamamlandi ! " << endl; 
	
	return 0;

}
