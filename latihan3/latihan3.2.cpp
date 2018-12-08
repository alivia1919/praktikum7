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
