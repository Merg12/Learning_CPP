#include <iostream>

void fcn3()
{
    size_t v1 = 42;
    auto f = [v1]() mutable{return ++v1;};
    
    std::cout << f() << std::endl; //it appears you can't change the captured variable's value (42) unless you use mutable as the return type
    
    //v1 = 0;
    auto j = f();
    auto &i = j;

    std::cout << i << std::endl;
}

int main()
{
    fcn3();
}