#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> i_vec = {0,1,2,3,4,5,6,7,8,9};
    std::fill_n(i_vec.begin(), i_vec.size(), 1); //changes the i_vec elements all to value 1
    std::fill_n(std::back_inserter(i_vec), 10, 0); //adds 10 more elements of 0 to the back of i_vec

    int cnt = 0; //a count in order to use as the index for printing out i_vec one element at a time
    for(auto i = i_vec.begin(); i != i_vec.end(); ++i, ++cnt)
    {
        std::cout << i_vec[cnt] << std::endl;
    }
    
}