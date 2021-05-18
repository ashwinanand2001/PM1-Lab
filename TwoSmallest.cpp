#include <iostream>
#include<cmath>
#define DBL_MAX 1.7976931348623158e+308 /* max value */
using namespace std;
/* Ashwin Anand
* Takes n number of inputs and prints out the two smallest numbers on separate lines
*/
int main()
{
    double min1;
    min1=DBL_MAX;
    double min2;
    min2=DBL_MAX;
    int n;
     cout<<"Enter total number input account: ";
     cin>>n;
    double number[n];
    for(int i=0;i<n;i++){
     cout<<"Value: ";
     cin>>number[i];
    }
    for(int i=0;i<n;i++){
        if(number[i]<min2){
           min2=number[i];
        if(min1>min2){
           double temp;
           temp=min1;
           min1=min2;
           min2=temp;
                    }
                }
            }
    cout<<min1<<"\n"<<min2;
    }


