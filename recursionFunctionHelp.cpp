#include <iostream>

void to_upper(char* s)
{
    char letter;
    if(s[0] == '\0')
    {
        return;
    }
    else
    {
        if (s[strlen(s) - 1] >= 'a' && s[strlen(s) - 1] <= 'z')
        {
            letter = s[strlen(s) - 1] - 32;
            std::cout << letter;
            s[strlen(s) - 1] = '\0';
            return to_upper(s);
        }
        else
        {
            s[strlen(s) - 1] = '\0';
            return to_upper(s);
        }
    }
}

int main()
{
    char s = 's';
    std::cout << to_upper(&s) << std::endl;
}