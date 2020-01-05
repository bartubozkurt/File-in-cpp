#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream dosya1("gecenler.txt");
	ofstream dosya2("kalanlar.txt");
	
	int vize,final,n;
	int ortalama[n];
	
	cout << "Kac ogrenci gireceksiniz ?" << endl;
	cin >> n;
	
	for(int i=0; i < n;i++){
		cout << "Vize notu giriniz : "<< endl;
		cin >> vize;
		cout << "Final notu giriniz : " << endl;
		cin >> final;
		ortalama[i] = (vize*0.3) + (final*0.7);
		cout << "ortalama : " << ortalama[i] << endl;
		
	}
	
	for(int i=0; i< n;i++){
		if(ortalama[i] > 50){
			dosya1 << "--GECENLER--" << endl;
		   dosya1 << ortalama[i] << endl;
	
		}
		else{
			dosya2 << "--KALANLAR--" << endl;
			dosya2 << ortalama[i] << endl;
	
		}
}
    cout << "Dosya ya yazma islemi tamamlandi ! " << endl; 
	
	return 0;

}
