#include <iostream>
using namespace std;
/*Ashwin Anand
* Takes 5 integer inputs and prints out largest number
*/

int main()
{
    int n1;
    cout<<"Enter n1: ";
    cin>>n1;
    int n2;
    cout<<"Enter n2: ";
    cin>>n2;
    int n3;
    cout<<"Enter n3: ";
    cin>>n3;
    int n4;
    cout<<"Enter n4: ";
    cin>>n4;
    int n5;
    cout<<"Enter n5: ";
    cin>>n5;

      if (n1>=n2&&n1>=n3&&n1>=n4&&n1>=n5)
      {   cout<<n1;
      }else if( n2>=n1&&n2>=n3&&n2>=n4&&n2>=n5)
      {   cout<<n2;
      }else if (n3>=n1&&n3>=n2&&n3>=n4&&n3>=n5)
      {    cout<<n3;
      }else if(n4>=n1&&n4>=n2&&n4>=n3&&n4>=n5)
      { cout<<n4;
      }else
      {  cout<<n5;
      }
    }


