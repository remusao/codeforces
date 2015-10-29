#include <iostream>
#include <string>


// http://codeforces.com/problemset/problem/231/A
int main()
{
    int n, count, result;
    bool is_sure;
    std::cin >> n;

    result = 0;
    for (; n; --n) {
        count = 0;
        for (int i = 0; i < 3; ++i) {
            std::cin >> is_sure;
            if (is_sure) ++count;
        }
        if (count >= 2) ++result;
    }

    std::cout << result << std::endl;
}
