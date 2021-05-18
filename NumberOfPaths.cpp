#include <iostream>
using namespace std;

int numberOfPaths(int numXs, int numYs);
int main()
{
 int x1,y1,x2,y2;
 cout<<"Enter Starting point (x then y): ";
 cin>> x1 >>y1;
 cout<<"Enter Ending point (x then y): ";
 cin>> x2 >>y2;
 cout  <<"\nThere is "
       << numberOfPaths(x2-x1,y2-y1)
       <<" paths\n";
}
int numberOfPaths(int numXs, int numYs)
{
    if(numXs ==0 || numYs ==0){
        return 1;
    }
    else{
        return numberOfPaths(numXs-1,numYs)
        + numberOfPaths(numXs,numYs-1);
    }
}
