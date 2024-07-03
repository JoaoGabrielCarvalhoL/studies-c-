#include <iostream>

int main(int argc, char const *argv[])
{
    
    int numbers[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ant_nbrs[5] {0};

    std::cout << sizeof(numbers);
    std::cout << sizeof(int);
    
    std::cout << "Numbers: " << std::endl;
    for (int i = 0; i < sizeof(numbers)/sizeof(int); i++) {
        std::cout << numbers[i] << std::endl;
    }

    std::cout << "Another numbers: " << std::endl;
    for (int i = 0; i < sizeof(ant_nbrs)/sizeof(int); i++) {
        std::cout << ant_nbrs[i] << std::endl;
    }
    
    return 0;
}


/**
 * Array
 *  - Compound data type or data structure
 *  - Collection of elements
 * - All elements are of the same type
 * - Each element can be accessed directly
 * 
 * - The name of the array represent the location of the first element in the array. 
 * - The [index] represents the offset from the beginning of the array. 
 * 
 * 
 * Characteristics: 
 * - Fixed size
 * - Elements are all the same type
 * - Stored contiguously in memory
 * - Individual elements can be accessed by their position or index.
 * - First element is at index 0
 * - Last element is at index size -1
 * - No checking to see if you are out of bounds
*/