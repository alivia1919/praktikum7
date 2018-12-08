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
