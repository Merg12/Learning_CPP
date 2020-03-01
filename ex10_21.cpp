#include <iostream>

int main()
{
    int localCapture = 4;
    auto decrementToZero = [&localCapture]() ->int
    {
        while(localCapture)
        {
            if(localCapture == 0)
            {
                return 0;
            }
            else
            {
                --localCapture;
                std::cout << localCapture << std::endl;
            }
        }
        return -8;
    };
std::cout << decrementToZero() << std::endl;
}