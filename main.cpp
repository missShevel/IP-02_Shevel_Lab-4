#include <iostream>
#include <math.h>

using namespace std;

int main() {

int n;
cout<<"Enter temperature in Celsius: "; cin >> n;
int celsius = 0;
double fahrenheit;

  if(n < 0){
    for(int i = 0; i <= abs(n); i++){
      cout<<"Celsius: "<<celsius<<"°C";
      fahrenheit = (9.0*celsius)/5.0 + 32;
      cout<<"  Fahrenheit: "<<fahrenheit<<"°F"<<endl;
      celsius--;
    }
  }
  else {

    for(int i = 0; i <= n; i++){
      cout<<"Celsius: "<<celsius<<"°C";
      fahrenheit = (9.0*celsius)/5.0+32;
      cout<<"  Fahrenheit: "<<fahrenheit<<"°F"<<endl;
      celsius++;
    }
  }

}

