#include <iostream>
using namespace std;
const int N=7;
int main()
{
int i, x=0;
long signed int number[N];
long signed int smallest;
for (i=0; i<7; i++)
{
cout<<"Stoinost za ("<<i<<"): ";
cin>>number[i];
if(number[i]>5000||number[i]<-5000){
cout<<"Vaveli ste chislo po-golqmo/po-malko ot 5000/-5000"<<endl;
return 0;}
}
smallest=number[0];
for(i=0; i<7; i++)
{
if(smallest>number[i]){
smallest=number[i];
x=i;}
}
cout<<"Nai-malkoto chislo e: "<<number[x]<<endl;
return 0;
}
