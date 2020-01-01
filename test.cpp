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

void print(entity(a))
{
    std::cout << a << std::endl;
}

int main()
{
    entity a("sad");
    print("asdf");
}