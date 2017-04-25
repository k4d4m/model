#include <iostream>
#include <cstdlib>
#include <Person.h>
#include <Notion.h>

using namespace std;

int main()
{
    Person n;
    n.set_sex(true);

    Notion testnotion(42);
    n.set_notion(testnotion);

    cout<<n.get_sex()<<endl<<endl;
    cout<<n.get_notion().get_chance()<<endl<<endl;

    system("pause");
    return EXIT_SUCCESS;
}
