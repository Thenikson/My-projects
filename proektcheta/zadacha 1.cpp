#include <iostream>
using namespace std;
typedef unsigned short int USHORT;
int main()
{
USHORT V1=4, V2=3, V3=2;
short int T1, T2, T3;
cout<<"Vuvedete vreme za ravnina v Minuti"<<endl;
cin>>T1;
cout<<"Vuvedete vreme za gora v Minuti"<<endl;
cin>>T2;
cout<<"Vuvedete vreme za planina v Minuti"<<endl;
cin>>T3;
USHORT S1= V1*T1;
USHORT S2= V2*T2;
USHORT S3= V3*T3;
cout<<"V - Velocity, T - Time, S - Distance"<<endl;
cout<<"V Ravnina-   " <<V1<<" km/h"<<endl;
cout<<"V Gora-  " <<V2<<" km/h"<<endl;
cout<<"V Planina-  "<<V3<<" km/h"<<endl;
cout<<"T Ravnina-  " <<T1<<" minutes"<<endl;
cout<<"T Gora-  " <<T2<<" minutes"<<endl;
cout<<"T Planina  "<<T3<<" minutes"<<endl;
cout<<"S Ravnina " <<S1<<" km"<<endl;
cout<<"S Gora-  " <<S2<<" km"<<endl;
cout<<"S Planina-  "<<S3<<" km"<<endl;
return 0;
}
