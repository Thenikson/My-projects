#include <iostream>
using namespace std;
int main()
{
float a=1.6, b=10, c=4, d=50, e=50*0.4, f=50*0.55, g, h;
cout<<"Izberete jelanata karta ili bilet:\n1. 1 bilet\n2. talon s 10 bileta\n3. karta za 1 den\n4. karta za 1 mesec\n5. karta za 1 mesec - uchenicheska s 60% otstupka\n6. karta za 1 mesec - pensionerska s 45% otstupka"<<endl;
cin>>g;
if(g==1)
{
cout<<"\nVie izbrahte: 1 bilet\nStruva: "<<a<<" lv\nMolq platete suma: "<<endl;
cin>>h;
if(h<a)
cout<<"Ne vi dostigat: "<<a-h<<" lv"<<endl;
else
cout<<"Vie zakupihte 1 bilet. Vasheto resto e: "<<h-a<<" lv"<<endl;
}
else if(g==2)
{
cout<<"\nVie izbrahte: talon s 10 bileta\nStruva: "<<b<<" lv\nMolq platete suma: "<<endl;
cin>>h;
if(h<b)
cout<<"Ne vi dostigat: "<<b-h<<" lv"<<endl;
else
cout<<"Vie zakupihte talon s 10 bileta. Vasheto resto e: "<<h-b<<" lv"<<endl;
}
else if(g==3)
{
cout<<"\nVie izbrahte: karta za 1 den.\nStruva: "<<c<<" lv\nMolq platete suma: "<<endl;
cin>>h;
if(h<c)
cout<<"Ne vi dostigat: "<<c-h<<" lv"<<endl;
else
cout<<"Vie zakupihte karta za 1 den. Vasheto resto e: "<<h-c<<" lv"<<endl;
}
else if(g==4)
{
cout<<"\nVie izbrahte: karta za 1 mesec\nStruva: "<<d<<" lv\nMolq platete suma: "<<endl;
cin>>h;
if(h<d)
cout<<"Ne vi dostigat: "<<d-h<<" lv"<<endl;
else
cout<<"Vie zakupihte karta za 1 mesec. Vasheto resto e: "<<h-d<<" lv"<<endl;
}
else if(g==5)
{
cout<<"\nVie izbrahte: karta za 1 mesec - uchenicheska s 60% namalenie\nStruva: "<<e<<"lv"<<"\nMolq platete suma: "<<endl;
cin>>h;
if(h<e)
cout<<"Ne vi dostigat: "<<e-h<<" lv"<<endl;
else
cout<<"Vie zakupihte uchenichesta karta za 1 mesec. Vasheto resto e: "<<h-e<<" lv"<<endl;
}
else if(g==6)
{
cout<<"\nVie izbrahte: karta za 1 mesec - pensionerska s 45% namalenie\nStruva: "<<f<<" lv"<<"\nMolq platete suma: "<<endl;
cin>>h;
if(h<f)
cout<<"Ne vi dostigat: "<<f-h<<" lv"<<endl;
else
cout<<"Vie zakupihte pensionerska karta za 1 mesec. Vasheto resto e: "<<h-f<<" lv"<<endl;
}
return 0;
}

