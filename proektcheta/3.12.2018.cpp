#include <iostream>
using namespace std;


class avtomobil{
	double gorivocena, razhod;
	public:
	avtomobil(double x, double y) : gorivocena(x), razhod(y) {}
	double cenazaden() {return gorivocena * razhod; }
};


int main()  //Aleksandar Nikolov No 2  Nikolai Slavchev No7
{
	double a1,a2,b1,b2,c1,c2,d1,d2,e1,e2;
    cout<<"Opel-Corsa"<<endl;
	cout<<"kolko litra gorivo sa izrazhodeni za denq"<<endl;
	cin>>a1;
	cout<<"kakvo e gorivoto:"<<endl;
	cout<<"A-95H-1"<<endl;
	cout<<"A-98H-2"<<endl;
	cout<<"DIESEL-3"<<endl;
	cout<<"GAS-4"<<endl;
	cin>>a2;
	if(a2==1)
	a2=2.62;
	else{
	if(a2=2)
	a2=2.80;
	else{
	if (a2=3)
	a2=2.78;
	else
	{if (a2=4)
	a2=1.61;
	else
	return 0;
	}}}
	
	cout<<"Ford-Escort"<<endl;
	cout<<"kolko litra gorivo sa izrazhodeni za denq"<<endl;
	cin>>b1;
	cout<<"kakvo e gorivoto:"<<endl;
	cout<<"A-95H-1"<<endl;
	cout<<"A-98H-2"<<endl;
	cout<<"DIESEL-3"<<endl;
	cout<<"GAS-4"<<endl;
	cin>>b2;
	if(b2==1)
	b2=2.62;
	else{
	if(b2=2)
	b2=2.80;
	else{
	if (b2=3)
	b2=2.78;
	else
	{if (a2=4)
	b2=1.61;
	else
	return 0;
	}}}
	
	cout<<"Nissan-Murano"<<endl;
	cout<<"kolko litra gorivo sa izrazhodeni za denq"<<endl;
	cin>>c1;
	cout<<"kakvo e gorivoto:"<<endl;
	cout<<"A-95H-1"<<endl;
	cout<<"A-98H-2"<<endl;
	cout<<"DIESEL-3"<<endl;
	cout<<"GAS-4"<<endl;
	cin>>c2;
	if(c2==1)
	c2=2.62;
	else{
	if(c2=2)
	a2=2.80;
	else{
	if (c2=3)
	c2=2.78;
	else
	{if (c2=4)
	c2=1.61;
	else
	return 0;
	}}}
	
	cout<<"Ford-Fusion"<<endl;
	cout<<"kolko litra gorivo sa izrazhodeni za denq"<<endl;
	cin>>d1;
	cout<<"kakvo e gorivoto:"<<endl;
	cout<<"A-95H-1"<<endl;
	cout<<"A-98H-2"<<endl;
	cout<<"DIESEL-3"<<endl;
	cout<<"GAS-4"<<endl;
	cin>>d2;
	if(d2==1)
	d2=2.62;
	else{
	if(d2=2)
	d2=2.80;
	else{
	if (d2=3)
	d2=2.78;
	else
	{if (d2=4)
	d2=1.61;
	else
	return 0;
	}}}
	
	cout<<"BMW-Gina "<<endl;
	cout<<"kolko litra gorivo sa izrazhodeni za denq"<<endl;
	cin>>e1;
	cout<<"kakvo e gorivoto:"<<endl;
	cout<<"A-95H-1"<<endl;
	cout<<"A-98H-2"<<endl;
	cout<<"DIESEL-3"<<endl;
	cout<<"GAS-4"<<endl;
	cin>>e2;
	if(e2==1)
	e2=2.62;
	else{
	if(e2=2)
	e2=2.80;
	else{
	if (e2=3)
	e2=2.78;
	else
	{if (e2=4)
	e2=1.61;
	else
	return 0;
	}}}
	
	avtomobil * a;
	a = new avtomobil[5]{{a1,a2},{b1,b2},{c1,c2},{d1,d2},{e1,e2}};
	cout << "Opel-Corsa razhod: " << a[0].cenazaden() << " lv" << endl;
	cout << "Ford-Escort razhod: " << a[1].cenazaden() << " lv" << endl;
	cout << "Nissan-Murano razhod: " << a[2].cenazaden() << " lv" << endl;
	cout << "Ford-Fusion razhod: " << a[3].cenazaden() << " lv" << endl;
	cout << "BMW-Gina  razhod: " << a[4].cenazaden() << " lv" << endl;
	cout << "obsht razhod za denq: " <<  a[0].cenazaden() +  a[1].cenazaden() +  a[2].cenazaden()+  a[3].cenazaden() +  a[4].cenazaden() << " lv" << endl;
delete[] a;
return 0;
	
}
