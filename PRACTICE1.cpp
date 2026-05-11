#include <iostream>
#include <string>
using namespace std;

int main() {

auto itemPrice = 999 ;
auto shippingcost = 200;

auto sum = itemPrice + shippingcost;

cout << sum ;
return 0;

}

//new code

#include<iostream>
#include<string>

using namespace std;

void mycountry(string country = "norway"){
cout << country << "\n";
}

 int main() {
 mycountry("USA");
 mycountry("india");
 mycountry();
 mycountry("china");

 return 0;
 }
