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
