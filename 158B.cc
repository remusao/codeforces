#include <iostream>
#include <algorithm>


// http://codeforces.com/problemset/problem/158/B
int main()
{
    int n, group_size, mini, cabs;
    int groups[] = {0, 0, 0, 0, 0};
    std::cin >> n;

    // Read groups
    while (n--) {
        std::cin >> group_size;
        ++groups[group_size];
    }

    // Find minimal number of cabs
    cabs = groups[4];
    // Complement 3s
    mini = std::min(groups[3], groups[1]);
    cabs += mini;
    groups[1] -= mini;
    cabs += groups[3] - mini;
    // Complement 2s
    cabs += groups[2] / 2;
    groups[2] %= 2;
    mini = std::min(groups[1], 2 * groups[2]);
    cabs += mini;
    groups[1] -= mini;
    cabs += groups[2] - mini;
    // Complement 1s
    cabs += groups[1] / 4;
    groups[1] %= 4;
    cabs += groups[1] / 3;
    groups[1] %= 3;
    cabs += groups[1] / 2;
    groups[1] %= 2;
    cabs += groups[1];

    std::cout << cabs << std::endl;
}
