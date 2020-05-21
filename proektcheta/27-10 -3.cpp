#include <iostream>
using namespace std;
int main()
{
short int a,b,c;
int s=0;
cout << "Vavedete otricatelno chislo: "<<endl;
while(1)
{
cin>>a;
cin>>b;
cin>>c;
if(a<0)
s++;
if(b<0)
s++;
if(c<0)
s++;
if(a>0&&b>0&&c>0)
    break;
}
cout<<"Vavedeni sa 3 polujitelni chuisla\nSumata na otricatelnite chisla e: "<<s<<endl;
return 0;
}
