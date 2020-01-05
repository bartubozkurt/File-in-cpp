#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
	ofstream yaz;
	int sayi[20];
	
	yaz.open("rand.txt");
	
	for(int i=0; i < 5; i++){
		sayi[i] = 1 + rand() % 100;
		yaz << sayi[i] << " ";
	}
	for(int i=0; i < 5;i++){
	cout << sayi[i] << endl;
}
	yaz.close();
	return 0;
}
