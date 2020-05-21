#include <iostream>

using namespace std;

int main()

{

         int a=9;       //suzdava promenliva

         int *p=0;      //suzdava ukazatel

         int**pa=0;     //suzdava ukazatel "pa" kum ukazatelq "p"

         p=&a;          // zapiswa adresa na promenlivata "a" v ukazatelq "p"

         pa=&p;         //zapisva adresa na ukazatelq "pa" v ukazatelq "p"

         cout<<a<<endl; //izpisva promenlivata

         cout<<*p<<endl; //izpisva ukazatelq

         cout<<*(*pa)<<endl; //izpisva ukazatelq "pa" na ukazatelq "p"



return 0;

}
