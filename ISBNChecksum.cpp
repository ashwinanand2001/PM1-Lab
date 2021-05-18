#include <iostream>
#include<cmath>
using namespace std;
/* Ashwin Anand
* takes a 9-digit integer as input and displays the checksum digit
*/
int main()
{    int n;
     cout<<"Enter number: ";
     cin>>n;
	        int sum = 0;
	        for (int i = 2; i <= 10; i++) {
	            int digit = n % 10;
	            sum = sum + i * digit;
	            n = n / 10;
	        }
	        if (sum % 11 == 1){
	            cout<<"X";
	        } else if (sum % 11 == 0) {
	            cout<<"0";
	        } else {
	            cout<<(11 - (sum % 11));
	        }
	}



