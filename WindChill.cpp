#include <iostream>
#include <cmath>
using namespace std;
/* Ashwin Anand
* Takes an input of temp and speed and calculates wind chill using a formula
*/
int main()
{
    double temp;
    cout<<"Enter temperature: ";
    cin>>temp;

    double speed;
    cout<<"Enter speed: ";
    cin>>speed;

    double windchill=35.74 + 0.6215*temp + (0.4275*temp-35.75)*(pow(speed,0.16));

    cout<<windchill;
    return 0;
}
