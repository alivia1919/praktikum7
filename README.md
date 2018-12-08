# Praktikum7

**NAMA 	: NUR ALI MUHAMMAD**

**KELAS	: TI.18.A.2**

**NIM	: 311810355**

## latihan1 : Buatlah Fungsi Fibonacci Dengan Cara Iteratif.

## latihan1.a.cpp : Program fungsi fibonacci menggunakan cara iteratif.

**Alur Program :**

1. Input interger fungsi `int iteratif (int bil,int a,int b,int c)`.
2. Input interger `int a` dan `int b` lalu deskripsikan `a=0` dan `b=1`.
3. Jika nilai suku satu **b** adalah **1** maka jadikan sebagai `return b`. 
4. jika nilai suku dua **a** adalah **0** maka jadikan `return a`.
4. Atau untuk mendeskripsikan `int i=2` dan `i<=bil` lalu `i++`.
5. Maka nilai `c=a+b` dan deskripsikan nilai `a=b` dan `b=c` lalu dijadikan `return c`.
6. Setelah itu cetak suku fibionici menggunakan fungsinya yaitu `iteratif ( bil,  a,  b,  c)`.

**Code Program :**

```c++

#include <iostream>

using namespace std;

int iteratif (int bil, int a, int b, int c)
{
a=0, b=1;
if (bil == 1) return b;
if (bil == 0) return a;

else{
for(int i=2; i<=bil; i++){

c = a + b;
a = b;
b = c;
}
return c;
}
}

int main()
{
int bil, a, b,c;

cout<<"Program nilai fibonacci dengan cara iteratif" << endl;
cout<<"_____________________________________________" << endl;
cout<<"Masukkan nilai deret fibanocci : ";
cin>>bil;
cout<<"\nNilai suku deret fibanocci dari "<<bil<<" adalah : ";
cout<< iteratif ( bil,  a,  b,  c);

return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan1/fwiteratif.jpg)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan1/SS.png)


## latihan1.b.cpp : Program fungsi fibonacci menggunakan cara rekursif.

**Code Program :**

```c++

#include <iostream>

using namespace std;

int fibonacci (int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;

    cout<<"Program nilai fibonacci dengan cara rekursif" << endl;
    cout<<"_____________________________________________" << endl;
    cout << "Masukan nilai n : ";
    cin >> n;
    cout << endl;
    cout << "Nilai suku deret fibonacci dari " << n << " adalah = " << fibonacci(n) << endl;
    return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan1/fwrekusif.jpg)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan1/SS1.png)


## latihan2.cpp : Buatlah Fungsi Rekursif Untuk Perkalian Dua Buah Bilangan Dengan Cara Penjumlahan.

**Alur Program :**

1. Input interger fungsi `int kali_rekursif(int a, intb)`.
2. Jika nilai interger `(b==0)` maka jadikan `return 0`.
3. Dan jika nilai `(b>0)` maka jadikan `return a` lala ditambahkan dengan type data `kali_rekursif (a, b - 1)`.
4. Atau `return (-a)` ditambahkan dengan type Data `kali_rekursif(a, b+1).
5. Masukan variabel **a** dan **b** untuk menginput nilai awal dan nilai yang akan dikali.
6. Cetak nilai perkalian dengan memanggil fungsinya yaitu `kali_rekursif`.

**Code Program :**

```c++

#include <iostream>
using namespace std;


int kali_rekursif(int a, int b)
{
 if (b==0)
  return 0;
 else if (b > 0)
  return a + kali_rekursif(a, b - 1);
 else
  return (-a) + kali_rekursif(a, b+1);
}


main()
{
 int a, b;
 cout << "Program menghitung dua bilangan dengan cara rekursif"<<endl;
 cout << "____________________________________________________"<<endl;
 cout << "Masukan Bilangan A : ";
 cin >> a;
 cout << "Dikali Dengan (B) : ";
 cin >> b;
 cout << "Maka AxB ("<< a <<" x "<< b << ") Adalah : " << kali_rekursif(a, b) << endl;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan2/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan2/SS.png)


## latihan3 : Carilah Kasus Lain Yang Bisa Diselesaikan Dengan Cara Rekursif Dan Iteratif.

## latihan3.1.cpp : Program membalik kata dengan cara Rekursif.

**Code Program :**

```c++

#include <iostream>

using namespace std;

void balik(char *s){
     if(*s !='\0'){
           balik(&s[1]);
           cout<<s[0];
           }
           }
int main(){
    cout << "Program membalik kata dengan cara rekursif"<<endl;
    cout << "__________________________________________"<<endl;
    char *kata="informatika";
    balik(kata);
    cout<<endl;

    return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan3/fwrekursif.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan3/SS1.png)


## latihan3.2.cpp : Program membalik kata dengan Cara Iteratif.

**Code Program :**

```c++

#include <iostream>

using namespace std;

void balik(char*s){
     int i;
     for(i=strlen(s)-1;i>=0;i--)
     cout<<s[i];
     }

int main()
{
    cout << "Program membalik kata dengan cara iteratif"<<endl;
    cout << "__________________________________________"<<endl;
    char *kata="informatika";
    balik(kata);
    cout<<endl;

    return 0;
}

```

**Flowchart Program Main Dan Iterartifnya :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan3/fwmain.png)

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan3/fwliteratif.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum7/master/latihan3/SS.png)


## contoh_lain.cpp : Program Menghitung Perkalian Jumlah Variable Input.

**Code Program :**

```c++

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

```

**Flowchart Program Main :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/contoh_lain/fwmain.jpg)

**Flowchart Iteratif :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/contoh_lain/fwliteratif.jpg)

**Flowchart Rekursif :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum7/master/contoh_lain/fwrekursif.jpg)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum7/master/contoh_lain/SS.png)


**TERIMA KASIH**# praktikum7
