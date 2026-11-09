#include <bitset>
#include <cstdint>
#include <iostream>
#include <limits>
#include <string>

bool isBinary(const std::string& bits) {
    if (bits.empty()) {
        return false;
    }
    for (const char bit : bits) {
        if (bit != '0' && bit != '1') {
            return false;
        }
    }
    return true;
}

// Convert a non-negative integer to its usual base-2 representation.
std::string toBinary(std::uint32_t value) {
    if (value == 0) {
        return "0";
    }

    std::string bits;
    while (value > 0) {
        bits.insert(bits.begin(), (value % 2 == 0) ? '0' : '1');
        value /= 2;
    }
    return bits;
}

bool binaryToDecimal(const std::string& bits, std::uint32_t& result) {
    if (!isBinary(bits)) {
        return false;
    }

    result = 0;
    for (const char bit : bits) {
        // Check before doubling so inputs larger than uint32_t are rejected.
        if (result > (std::numeric_limits<std::uint32_t>::max() - (bit - '0')) / 2) {
            return false;
        }
        result = result * 2 + static_cast<std::uint32_t>(bit - '0');
    }
    return true;
}

// Add two non-empty binary strings without converting them to an integer.
std::string addBinary(const std::string& left, const std::string& right) {
    if (!isBinary(left) || !isBinary(right)) {
        return {};
    }

    std::string result;
    std::size_t i = left.size();
    std::size_t j = right.size();
    int carry = 0;

    while (i > 0 || j > 0 || carry != 0) {
        int sum = carry;
        if (i > 0) sum += left[--i] - '0';
        if (j > 0) sum += right[--j] - '0';
        result.insert(result.begin(), static_cast<char>('0' + sum % 2));
        carry = sum / 2;
    }
    return result;
}

int main() {
    long long value = 0;
    std::cout << "Enter a signed 32-bit integer: ";
    if (!(std::cin >> value) || value < std::numeric_limits<std::int32_t>::min() ||
        value > std::numeric_limits<std::int32_t>::max()) {
        std::cerr << "Input is outside the signed 32-bit range.\n";
        return 1;
    }

    const auto signedValue = static_cast<std::int32_t>(value);
    const std::uint32_t magnitude = signedValue < 0
        ? 0u - static_cast<std::uint32_t>(signedValue)
        : static_cast<std::uint32_t>(signedValue);
    std::cout << "Magnitude in binary: " << toBinary(magnitude) << '\n';
    std::cout << "32-bit two's-complement representation: "
              << std::bitset<32>(static_cast<std::uint32_t>(signedValue)) << '\n';

    std::string first;
    std::string second;
    std::cout << "Enter two binary numbers to add: ";
    if (!(std::cin >> first >> second)) {
        std::cerr << "Could not read both binary values.\n";
        return 1;
    }

    const std::string sum = addBinary(first, second);
    if (sum.empty()) {
        std::cerr << "Binary values may contain only 0 and 1.\n";
        return 1;
    }
    std::cout << "Sum: " << sum << '\n';

    std::uint32_t decimal = 0;
    if (binaryToDecimal(first, decimal)) {
        std::cout << first << " in decimal is " << decimal << ".\n";
    } else {
        std::cout << first << " is valid binary but does not fit in uint32_t.\n";
    }
}
