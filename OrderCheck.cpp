#include <iostream>
#include <cmath>
using namespace std;
/*Ashwin Anand
* This program takes 4 inputs and tests whether the inputs are in ascending or descending order and prints a boolean value
* Boolean value of true: if inputs are in ascending order or descending order
* Boolean value of false: if inputs are not in ascending order or descending order
*/
int main()
{
    int w;
    cout<<"Enter w: ";
    cin>>w;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int y;
    cout<<"Enter y: ";
    cin>>y;
    int z;
    cout<<"Enter z: ";
    cin>>z;

        if(w>x && x>y  && y>z){
          string val="true";
          cout<<val;
         }
        else if(w<x && x<y && y<z){
          string val="true";
          cout<<val;
        }
        else{
            string val="false";
            cout<<val;
        }
    return 0;
}
