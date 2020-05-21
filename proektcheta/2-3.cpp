#include <iostream>
using namespace std;
int main()
{
long long a, b, c;
cout<<"Vavedete 3 chisla"<<endl;
cin>>a;
cin>>b;
cin>>c;
if((a>=b)&&(b>=c))
cout<<a<<","<<b<<","<<c<<endl;
if((a>=b)&&(c>=b))
cout<<a<<","<<c<<","<<b<<endl;
if ((b>=a)&&(a>=c))
cout<<b<<","<<a<<","<<c<<endl;
if ((b>=c)&&(c>=a))
cout<<b<<","<<c<<","<<a<<endl;
if((c>=b)&&(c>=a)&&(a>=b))
cout<<c<<","<<a<<","<<b<<endl;
if((c>=b)&&(c>=a)&&(b>=a))
cout<<c<<","<<b<<","<<a<<endl;
return 0;
}
