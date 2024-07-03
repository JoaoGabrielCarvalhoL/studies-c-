#include <iostream>
#include <climits>
#include <cfloat>

const int GLOBAL_INTEGER_NUMBER {50};

int main(int argc, char const *argv[])
{
    int sme_nbr {10}; // Uniform initialization (C++11)
    int antr_nbr = 15; // C-Like Initialization
    int scd_nbr(20); // Constructor initialization
    std::cout << sme_nbr << std::endl;
    std::cout << antr_nbr << std::endl;
    std::cout << scd_nbr << std::endl;


    double floating_nbr {10.55};
    std::string name {"joao gabriel"};

    std::cout << floating_nbr << std::endl;
    std::cout << name << std::endl;
    std::cout << GLOBAL_INTEGER_NUMBER << std::endl;

    signed long long int value {100000000};

    std::cout << value << std::endl;
    std::cout << sizeof(value) << std::endl;
    std::cout << INT16_MAX << std::endl;
    std::cout << INT_MAX << std::endl;
    std::cout << INT_MIN << std::endl;
    
    return 0;
}

/**
 * g++ -std=c++17 variables.cpp -o main
 * 
 * Primitive Types 
 * 
 * Character types:
 *  char         1 byte (8 bits)
 *  char16_t     2 bytes (16 bits)
 *  char32_t     4 bytes (32 bits)
 *  wchar_t      Represent the largets available character set.
 * 
 * Integer types: 
 *  signed short int        At least 16 bits.
 *  signed int              At least 16 bits.
 *  signed long int         At least 32 bits.
 *  signed long long int    At least 64 bits.
 *  unsigned short int      At least 16 bits.
 *  unsigned int            At least 16 bits.
 *  unsigned long int       At least 32 bits.
 *  unsigned long long int  At least 64 bits.
 * 
 * Floating-point types: 
 *  float            7 decimal digits                               Range: 1.2x10³⁸ to 3.4x10³⁸
 *  double           No less than float / 15 decimal digits.        Range: 2.2x10-³⁰⁸ to 1.8x10³⁰⁸
 *  long double      No less than double / 19 decimal digits.       Range: 3.3x10⁻⁴⁹³² to 1.2x10⁴⁹³²
 * 
 * Boolean type: 
 * bool             Usually 8 bits (true or false) 
 * In C++ 0 is false. Another value != 0 = true
 * 
 * 
 * Constants
 * Declared constants
 *  const keyword 
 * 
 * Constant expressions 
 *  constexpr keyword
 * 
 * Enumerated constants
 *  enum keyword 
 * 
 * Defined constants
 *  #define
*/
