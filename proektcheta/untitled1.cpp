#include <iostream>
using namespace std;
int main()
{
const bool x=true;
const bool y=false;



cout<<"z1"<<endl;
cout<<"y||y= "<<(y||y)<< endl;
cout<<"y||x= "<<(y||x)<< endl;
cout<<"x||y= "<<(x||y)<<endl;
cout<<"x||x= "<<(x||x)<<endl;

cout<<"z2"<<endl;
cout<<"!y||y= "<<!(y||y)<< endl;
cout<<"!y||x= "<<!(y||x)<< endl;
cout<<"!x||y= "<<!(x||y)<<endl;
cout<<"!x||x= "<<!(x||x)<<endl;

cout<<"z3"<<endl;
cout<<"y&&y= "<<(y&&y)<< endl;
cout<<"y&&x= "<< (y&&x)<< endl;
cout<<"x&&y= "<< (x&&y)<< endl;
cout<<"x&&x= "<< (x&&x)<< endl;


cout<<"z4"<<endl;
cout<<"!y&&y= "<< !(y&&y)<< endl;
cout<<"!y&&x= "<< !(y&&x)<< endl;
cout<<"!x&&y= "<< !(x&&y)<< endl;
cout<<"!x&&x= "<< !(x&&x)<< endl;

cout<<"z5"<<endl;
cout<<"!y&&!y= "<< (!y&&!y)<< endl;
cout<<"!y&&!x= "<< (!y&&!x)<< endl;
cout<<"!x&&!y= "<< (!x&&!y)<< endl;
cout<<"!x&&!x= "<< (!x&&!x)<< endl;

cout<<"z6"<<endl;
cout<<"!y&&!y= "<< (!y&&!y)<< endl;
cout<<"!y&&!x= "<< (!y&&!x)<< endl;
cout<<"!x&&!y= "<< (!x&&!y)<< endl;
cout<<"!x&&!x= "<< (!x&&!x)<< endl;



return 0;
}



