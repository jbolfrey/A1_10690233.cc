#include <iostream>
#include <cmath>
using namespace std;
int value;
int main (){
 	cout << "Please enter any number:" << endl;

	cin >> value;
for (int i = 2; i <= value ; i++){


if (value % i == 0)

if (( value == 1) || ( value == i)){	
	cout << "The number you entered is a prime number." <<endl;
break;


}

else { 
	cout << "The number you entered is not a prime number." <<endl;
break;

}
}
return 0;

}
