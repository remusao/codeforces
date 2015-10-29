#include <iostream>
#include <string>


// http://codeforces.com/problemset/problem/50/A
int main()
{
    int m, n;
    int result = 0;
    std::cin >> m >> n;
    if (m % 2 == 0) {
        result = (m / 2) * n;
    }
    else if (n % 2 == 0) {
        result = (n / 2) * m;
    }
    else {
        result = (n / 2) * m + (m / 2);
    }
    std::cout << result << std::endl;
}
