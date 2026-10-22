#include <iostream>
#include <cstdlib>

bool valid(int x, int y) {
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

bool rookAttacks(int kx, int ky, int rx, int ry) {
    return kx == rx || ky == ry;
}

bool bishopAttacks(int kx, int ky, int bx, int by) {
    return std::abs(kx - bx) == std::abs(ky - by);
}

int main() {
    int kx, ky, rx, ry, bx, by;

    std::cout << "Enter 6 coordinates: ";
    if (!(std::cin >> kx >> ky >> rx >> ry >> bx >> by)) {
        std::cout << "Invalid input\n";
        return 1;
    }

    if (!valid(kx, ky) || !valid(rx, ry) || !valid(bx, by)) {
        std::cout << "Invalid coordinates\n";
        return 1;
    }

    std::cout << "Rook attacks: "
              << rookAttacks(kx, ky, rx, ry) << '\n';

    std::cout << "Bishop attacks: "
              << bishopAttacks(kx, ky, bx, by) << '\n';

    return 0;
}
