#include <iostream>
using namespace std;
int main()
{
double a,b,c;
cout<<"Vavedete trite strani na hipotetichn triugulnik - a, b, c"<<endl;
cin>>a>>b>>c;
if((a+b>c)&&(a+c>b)&&(b+c>a))
cout<<"Triugulnikut e vuzmojen"<<endl;
else
cout<<"Triugulnikut NE e vuzmojen"<<endl;
return 0;
}
