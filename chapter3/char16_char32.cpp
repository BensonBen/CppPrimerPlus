#include <iostream>

int main() {
    char16_t ch1 = u'q'; //basic character in 16-bit form.
    char32_t char2 = U'\U0000222B'; // universal character name in 32 bit form.

    std::cout << "character one: " << ch1 << std::endl;
    std::cout << "character two: " << char2 << std::endl;

    return 0;
}