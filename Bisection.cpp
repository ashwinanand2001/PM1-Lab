#include <iostream>
#include <math.h>

using namespace std;
double bisect(double a, double b, double tolerance);
double f(double x);

int main()
{
    double tolerance, a, b, solution;
    cout << "Enter desired tolerance" << endl;
    cin >> tolerance;
    cout << "Enter lower bound" << endl;
    cin >> a;
    cout << "Enter upper bound" << endl;
    cin >> b;
    solution = bisect(a, b, tolerance);
    cout <<"x = "<< solution << " is an approximate solution of f(x) = 0 to within " << tolerance << " tolerance" << endl;

}
double f(double x)
{
    double y;
    y = (pow(x, 3)) + x - 5;
    return y;
}
double bisect(double a, double b, double tolerance)
{
    double c;
    while((b-a)>=tolerance){
        if(((f(a)>0) && (f(b)>0)) || ((f(a)<0) && (f(b)<0))){
            cout << "No solution" << endl;
            break;
        }else{
        c = (a+b)/2;
        if((f(c) == 0) || ((b-a)/2 < tolerance)){
            return c;
        }
        if(((f(c)>0) && (f(a)>0)) || ((f(c)<0) && (f(a)<0))){
            a = c;
        }
            else{
                b = c;
            }
    }
    }

}
