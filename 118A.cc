#include <iostream>
#include <string>


// http://codeforces.com/problemset/problem/118/A
int main()
{
    std::string input;
    std::cin >> input;

    for (char c: input) {
        if (c >= 'A' && c <= 'Z') c = c ^ 32;
        if (!(c == 'a' ||
              c == 'e' ||
              c == 'i' ||
              c == 'o' ||
              c == 'u' ||
              c == 'y')) {
            std::cout << '.' << c;
        }
    }
    std::cout << std::endl;
}
