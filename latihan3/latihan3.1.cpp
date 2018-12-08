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

