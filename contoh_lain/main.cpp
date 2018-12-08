#include <iostream>
#include <conio.h>

using namespace std;

class dua{
friend ostream& operator<<(ostream&, dua&);
friend istream& operator>>(istream&, dua&);
public:
void iteratif(int n);
int rekursif(int n,int a);
private:
int g;
int h;
};
void dua::iteratif (int n){
int a;

a =1;
while (!(n<=0))
{
cout << n <<" ";
a =n*a;
n =n-1;
}
cout << "\n\nIteratif -> Hasil perkalian semua nilai dari n! = "<<a << endl<<endl;
};

int dua::rekursif (int n,int a){

if (n==0)
{
cout << "\n\nRekursif -> Hasil perkalian semua nilai dari n! = "<<a << endl;   }
else
{
cout << n << " ";
return rekursif(n-1,n*a);}
};

istream& operator>>(istream& in, dua& input){
cout <<"Masukkan n : ";
in >>input.g;
cout<<endl;
};

ostream& operator<<(ostream& out, dua& output){
output.iteratif(output.g);
output.rekursif(output.g,1);
};

int main()
{
dua jalankan;

cin>>jalankan;
cout<<jalankan;

getch();
}
