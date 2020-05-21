#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a;
double b;
double c;
cout<<"ax+bx+c=0"<<endl;
cin>>a>>b>>c;
if(((a==0)&&(b!=0))&&(c!=0||(c==0)))
cout<<"Nqma reshenie, zashtoto a=0"<<endl;
if(b*b-4*a*c<0)
cout<<"Nqma realni koreni, zashtoto diskriminantata e otricatelna"<<endl;
if((a==0)&&(b==0)&&(c==0))
cout<<"Vsqko X e reshenie"<<endl;
if((a==0)&&(b==0)&&(c!=0))
cout<<"Nqma realni koreni, zashtoto a=0 i b=0"<<endl;
if((b*b-4*a*c==0)&&(a!=0)&&(b!=0)&&(c!=0))
cout<<"X1,X2= "<<-b/(2*a)<<endl;
else if((((a<0)&&((b*b)-(4*a*c>0)))||((a>0)&&((b*b)-(4*a*c))>0))&&((a!=0)&&(b!=0)&&(c!=0)))
{
cout<<"X1= "<<((-b+sqrt(b*b-4*a*c))/(2*a))<<endl;
cout<<"X2= "<<((-b-sqrt(b*b-4*a*c))/(2*a))<<endl;
}
return 0;
}
