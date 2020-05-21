#include <iostream>
using namespace std;
int main()
{
short int chislo;
cout<<"Vavedete 4-cifrenno chislo"<<endl;
cin>>chislo;
if (1000>chislo || 9999<chislo)
return 0;
cout<<"Sbor ot cifrite: "<<chislo/1000+chislo%1000/100+chislo%1000%100/10+chislo%1000%100%10<<endl;
return 0;
}
