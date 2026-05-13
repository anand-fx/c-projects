/*#include <iostream>
#include <string>

using namespace std;

int main()
{
string firstname;
string lastname;
cout << "your first name : ";
cin >> firstname;
cout << "your last name : ";
cin >> lastname;
cout << "your fullname is: " << firstname + lastname;
return 0;
}*/



/*#include <iostream>
#include <string>

int main()
{
    std :: string greeting = "hello";
    std :: cout << greeting;
    return 0;

}*/


#include <iostream>
#include <string>

using namespace std;

class car {
public:
    string model;
    string brand;
    int year;
    };

    int main(){
    car carobj1;
    carobj1.model = "BMW";
    carobj1.brand = "x5";
    carobj1.year = 2009;

    car carobj2;
    carobj2.model = "benz";
    carobj2.brand = "v12";
    carobj2.year = 2011;

    cout << carobj1.model << " " << carobj1.brand << " " << carobj1.year << "\n";
    cout << carobj2.model << " " << carobj2.brand << " " << carobj2.year << "\n";
    return 0;
    }
