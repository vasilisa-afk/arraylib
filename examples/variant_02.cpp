#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int scores[] = {72, 85, 91, 64, 78, 88, 95, 69, 84, 76};
    const std::size_t n = sizeof(scores) / sizeof(scores[0]);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Количество контрольных работ: " << n << "\n\n";
    std::cout << "Средний балл: "            << arr_average(scores, n) << "\n";
    std::cout << "Максимальный балл: "       << arr_max(scores, n)     << "\n";
    std::cout << "Минимальный балл: "        << arr_min(scores, n)     << "\n";


    int count_ge_80 = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (scores[i] >= 80) ++count_ge_80;
    }
    std::cout << "Результатов не ниже 80: "  << count_ge_80            << "\n";

    std::cout << "Медиана результатов: "     << arr_median(scores, n)  << "\n";

    return 0;
} 