#include <iostream>
#include <fstream>
 
using namespace std;
 
int treees(int liczba){
    int i = 3;
    int dziel[50];
    int w = 0;
    int x = 0;
 
    if(liczba%2==0){
    	return 0;
    }else{
        while(liczba>1){
            int z = 0;
 
            if(liczba%i==0){
                liczba=liczba/i;
                dziel[w]=i;
                w++;
            }else{
                i=i+2;
                continue;
            }
 
        }
        for(int a=0; w>a; a++){
            if(dziel[a]!=dziel[a+1])x++;
        }
    }
    if(x==3)return 1;
    else return 0;
}

int main(){
    ifstream plik;
 
    plik.open("liczby.txt");
 
    int liczba2;
    int b = 0;
 
    while(!plik.eof()){
        plik >> liczba2;
 
        b+=treees(liczba2);
    }
    plik.close();
    
    cout << "Wynik: "<< b << endl;
    return 0;
}
