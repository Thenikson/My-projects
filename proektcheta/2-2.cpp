#include <iostream>
using namespace std;
int main()
{
int a, b, c;
cout<<"Vuvdete 3 chisla: "<<endl;
cin>>a>>b>>c;
if(a>b&&a>c)
cout<<"Nai-golqmoto e: "<<a<<endl;
else if(b>a&&b>c)
cout<<"Nai-golqmoto e: "<<b<<endl;
else if(c>a&c>b)
cout<<"Nai-golqmoto e: "<<c<<endl;
else if(a==b&&b==c&&a==c)
cout<<"Trite chisla sa ednakvi"<<endl;
else if(a==b&&(c!=a||c!=b))
cout<<"Purvoto i vtoroto sa ravni: "<<a<<" i "<<b<<endl;
else if(b==c&&(a!=b||a!=c))
cout<<"Vtoroto i tretoto sa ravni: "<<b<<" i "<<c<<endl;
else if(a==c&&(b!=a||b!=c))
cout<<"Purvoto i tretoto sa ravni: "<<a<<" i "<<c<<endl;
return 0;
}
