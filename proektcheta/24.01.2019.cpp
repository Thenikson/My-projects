#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class purva
{
public:
    purva()
    {
        cout<<"Vuvedete b i c\n";
    };
    void SetB(double b)
    {
        itsB = b;
    }
    double GetB() const
    {
        return itsB;
    }
    void SetC(double c)
    {
        itsC = c;
    }
    double GetC() const
    {
        return itsC;
    }
    void SetX(double x)
    {
        itsX = x;
    }
    double GetX() const
    {
        return itsX;
    }
protected:
    double itsB;
    double itsC;
    double itsX;
};
class vtora : public purva
{
public:
    vtora()
    {
        cout<<"Vuvedete a,b i c (kvadratno uravnenie)"<<endl;
    };
    double diskriminanta(double a, double b, double c)
    {
        double D;
        D=sqrt((pow(b,2)-4*a*c));
        return D;
    }
    void SetA(int a)
    {
        itsA = a;
    }
    double GetA() const
    {
        return itsA;
    }
    void SetD(double d)
    {
        itsD = d;
    }
    double GetD() const
    {
        return itsD;
    }
private:
    double itsA;
    double itsD;
};
int main()
{
    purva z;
    vtora y;
    double a,b,c,x,D;
    purva();
    cin>>b;
    z.SetB(b);
    cin>>c;
    z.SetC(c);
    if (b==0&&c==0)
    {
        cout<<"Vsqko chislo e koren"<<endl;
        return 0;
    }
    if (b==0&&c!=0)
    {
        cout<<"Nqma realni koreni"<<endl;
        return 0;
    }
    x=(-c/b);
    z.SetX(x);
    cout<<"x="<<setprecision(3)<<z.GetX()<<endl;
    vtora();
    cin>>a;
    y.SetA(a);
    cin>>b;
    y.SetB(b);
    cin>>c;
    y.SetC(c);
    y.SetD(y.diskriminanta(a,b,c));
    if (pow(b,2)<4*a*c)
    {
        cout<<"Nqma realni koreni"<<endl;
        return 0;
    }
   else if (y.GetD()==0)
    {
        x=(-b/2*a);
        y.SetX(x);
        cout<<"x="<<setprecision(3)<<y.GetX()<<endl;
        return 0;
    }
   else if (y.GetD()>0)
    {
        x=(-b+sqrt(y.GetD()));
        y.SetX(x);
        cout<<"x1="<<setprecision(3)<<y.GetX()<<endl;
        cout<<"x2="<<setprecision(3)<<y.GetX()*-1<<endl;
        return 0;
    }
}
