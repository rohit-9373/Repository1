#include <iostream>
using namespace std;

class Comp{

    public:

        int real;
        int img;

        Comp()
        {
            real=0;
            img=0;
        }

        Comp(int a,int b)
        {
           real = a;
           img = b;
        }

        Comp operator +(Comp ob)

        {
            Comp temp;
            temp.real = real + ob.real;
            temp.img = img + ob.img;
            return temp;
        }
        Comp operator -(Comp ob)

        {
            Comp temp;
            temp.real = real - ob.real;
            temp.img = img - ob.img;
            return temp;
        }
        Comp operator *(Comp ob)

        {
            Comp temp;
            temp.real = real * ob.real;
            temp.img = img * ob.img;
            return temp;
        }
        Comp operator /(Comp ob)

        {
            Comp temp;
            temp.real = real / ob.real;
            temp.img = img / ob.img;
            return temp;
        }
        Comp operator =(Comp ob)

        {
            Comp temp;
            temp.real = real = ob.real;
            temp.img = img = ob.img;
            return temp;
        }
        Comp operator +=(Comp ob)

        {
            Comp temp;
            temp.real = real += ob.real;
            temp.img = img += ob.img;
            return temp;
        }
        Comp operator -=(Comp ob)

        {
            Comp temp;
            temp.real = real -= ob.real;
            temp.img = img -= ob.img;
            return temp;
        }
        Comp operator *=(Comp ob)

        {
            Comp temp;
            temp.real = real *= ob.real;
            temp.img = img *= ob.img;
            return temp;
        }
        Comp operator /=(Comp ob)

        {
            Comp temp;
            temp.real = real /= ob.real;
            temp.img = img /= ob.img;
            return temp;
        }
        Comp operator %(Comp ob)

        {
            Comp temp;
            temp.real = real % ob.real;
            temp.img = img % ob.img;
            return temp;
        }
};

int main() {
    Comp a(1,1);
    Comp b(2,2);
    Comp c,d,e,f,g,h,i,j,k,l;

    c = a.operator+(b);
    d = a.operator-(b);
    e = a.operator*(b);
    f = a.operator/(b);
    g = a.operator=(b);
    h = a.operator+=(b);
    i = a.operator-=(b);
    j = a.operator*=(b);
    k = a.operator/=(b);
    l = a.operator%(b);
    cout<<"+ operator:"<<endl;
    cout<<c.real<<endl<<c.img<<endl;
    cout<<"- operator:"<<endl;
    cout<<d.real<<endl<<d.img<<endl;
    cout<<"* operator:"<<endl;
    cout<<e.real<<endl<<e.img<<endl;
    cout<<"/ operator:"<<endl;
    cout<<f.real<<endl<<f.img<<endl;
    cout<<"= operator:"<<endl;
    cout<<g.real<<endl<<g.img<<endl;
    cout<<"+= operator:"<<endl;
    cout<<h.real<<endl<<h.img<<endl;
    cout<<"-= operator:"<<endl;
    cout<<i.real<<endl<<i.img<<endl;
    cout<<"/= operator:"<<endl;
    cout<<k.real<<endl<<k.img<<endl;
     cout<<"% operator:"<<endl;
    cout<<l.real<<endl<<l.img<<endl;

    return 0;

}
