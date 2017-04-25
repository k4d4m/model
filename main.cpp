#include <iostream>
#include <cstdlib>
#include <Person.h>

using namespace std;

int main()
{

    Person n = new Person();
    n.set_sex(true);
    cout<<n.get_sex()<<endl<<endl;


    system("pause");
    return EXIT_SUCCESS;
}
