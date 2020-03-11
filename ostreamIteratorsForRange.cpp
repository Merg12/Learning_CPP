#include <iostream>
#include <vector>

int main()
{
    std::istream_iterator<int> in_iter(std::cin), eof; //enter some numbers into the iostream cin into in_iter
    std::vector<int> iVec(in_iter, eof); //you get the range here of all the numbers you added stored in this vector

    std::ostream_iterator<int> out_iter(std::cout, " "); //run the vector list to print out each element with a space in between each
    for(auto e : iVec)
    {
        *out_iter++ = e;
    }
    std::cout << std::endl;

    //==========================================================================================================

    std::copy(iVec.begin(), iVec.end(), out_iter); //this also does the same thing as above, iterate thru the range of iVec and print out the numbers
    std::cout << std::endl;
    
    return 0;
}