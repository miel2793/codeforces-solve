#include <iostream>
#include <algorithm>

int main() {
    int l1, r1, l2, r2;
    std::cin >> l1 >> r1 >> l2 >> r2;

    int left = std::max(l1, l2);
    int right = std::min(r1, r2);

    if (left <= right) {
        std::cout << left << " " << right << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
