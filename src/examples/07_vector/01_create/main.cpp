
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::string;
using std::vector;

int main()
{
    vector<int> numbers{5, 8, 9};
    cout<<"Size: "<<numbers.size()<<"\n";
    cout<<"Capacity: "<<numbers.capacity()<<"\n";

    numbers.push_back(10);
    cout<<"Size: "<<numbers.size()<<"\n";
    cout<<"Capacity: "<<numbers.capacity()<<"\n";

    vector<char> chars{'a','b','c'};
    for (auto ch:chars)
    {
        cout<<ch<<"\n";
    }
    cout<<"\n";

    vector<string> strings{"C++", "Python", "Java"};
    for (auto str:strings)
    {
        cout<<str<<"\n";

    }

    vector<int> numbers1(10,1);
    for (auto n:numbers1)
    {
        cout<<n<<"\n";
    }
}
