#include <iostream>
#include <vector>

using namespace std;

double linear(double x, vector<double> p)
{
    return x*p[0] + p[1];
}

double quadratica(double x, vector<double> p)
{
    return x*x*p[0] + x*p[1] + p[2];
}

double Metodo_de_Riemman(double (*f)(double, vector<double>), vector<double> p, double a, double b, int ret)
{
    double area= 0;
    double delta= (b - a) / ret= a + delta;

    for (double i=a; i<b; i+=delta)
    {
        area+= delta*f(i,p);
    }

    return area;
}

int main()
{
    double a,b;
    int ret;

    vector<double> p;

    p.push_back(1);
    p.push_back(2);
    p.push_back(3);

    cout << "Entre com o valor inicial a:"<< endl;
    cin >> a;

    cout << "Entre com o valor final b:"<< endl;
    cin >> b;

    cout << "Entre com a quantidade de retangulos:"<< endl;
    cin >> ret;

    cout<< Metodo_de_Riemman(quadratica,p,a,b,ret)<< endl;



    return 0;
}
