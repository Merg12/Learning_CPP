#include <iostream>

class entity
{
public:
    entity() = default;
    entity(std::string s): memdata(s) {}

void print(std::string);

private:
    std::string memdata;
};

void print(std::string a)
{
    std::cout << a << std::endl;
}

int main()
{
    entity a("sad");
    print("asdf");
    
    std::string word;
    std::cin >> word;
    std::cout << word;
}