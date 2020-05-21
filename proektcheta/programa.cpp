#include <iostream>
using namespace std;
int main()
{
enum predmeti {Istoriq=1, Matematika, Fizika, Fizichesko, Angliiski, Programirane, Biologiq};
predmeti nomera;
int a;
int b;
int c;
cout<<"Izberete 3 chisla"<<endl;
cin>>a;
cin>>b;
cin>>c;
nomera = predmeti(a);
if(a==1)
cout<<"istoriq"<<endl;
if(a==2)
cout<<"matematika"<<endl;
if(a==3)
cout<<"fizika"<<endl;
if(a==4)
cout<<"fizichesko"<<endl;
if(a==5)
cout<<"angliiski"<<endl;
if(a==6)
cout<<"programirane"<<endl;
if(a==7)
cout<<"biologiq"<<endl;
nomera = predmeti(b);
if(b==1)
cout<<"istoriq"<<endl;
if(b==2)
cout<<"matematika"<<endl;
if(b==3)
cout<<"fizika"<<endl;
if(b==4)
cout<<"fizichesko"<<endl;
if(b==5)
cout<<"angliiski"<<endl;
if(b==6)
cout<<"programirane"<<endl;
if(b==7)
cout<<"biologiq"<<endl;
nomera = predmeti(c);
if(c==1)
cout<<"istoriq"<<endl;
if(c==2)
cout<<"matematika"<<endl;
if(c==3)
cout<<"fizika"<<endl;
if(c==4)
cout<<"fizichesko"<<endl;
if(c==5)
cout<<"angliiski"<<endl;
if(c==6)
cout<<"programirane"<<endl;
if(c==7)
cout<<"biologiq"<<endl;
return 0;
}
