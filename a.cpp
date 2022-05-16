#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;

int main(){
float a;
float b;
char c;
system("color 8F");
manati:
PlaySound(TEXT("01.wav"),NULL,SND_ASYNC|SND_LOOP);

cout << "Digita primer numero: ";
cin >> a;
cout << "Digita segundo numero: ";
cin >> b;

cout << "la suma es: " <<(a+b)<<endl;
cout << "la resta es: " <<(a-b)<<endl;
cout << "la division es: "<<(a/b)<<endl;
cout << "el producto es: "<<(a*b)<<endl;

PlaySound(TEXT("02.wav"),NULL,SND_ASYNC|SND_LOOP);
system("pause");

cout << "Volver a empezar? Y/N: ";
cin >> c;
if ( (c == 'y')||(c=='Y'))
{goto manati;};
return 0;
}
