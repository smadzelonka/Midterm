//
//  main.cpp
//  Midterm
//  ID 0266099
//  Created by Sean Madzelonka on 4/25/23.
//

#include <iostream>
#include "Random.hpp"

int main() {
    // Create an instance of Random using the default constructor
    Random random1;

    // Generate and print 10 random integers using nextInt()
    std::cout << "10 random integers using random1:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << random1.nextInt() << std::endl;
    }

    // Create an instance of Random with a custom range (1.0 to 10.0)
    Random random2(1.0, 10.0);

    // Generate and print 10 random doubles using nextDbl()
    std::cout << "\n10 random doubles using random2:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << random2.nextDbl() << std::endl;
    }

    // Create an instance of Random with a seed value
    Random random3(42);

    // Generate and print 10 random integers using nextInt()
    std::cout << "\n10 random integers using random3 (seeded):" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << random3.nextInt() << std::endl;
    }

    // Change the range of random1 to (20.0 to 30.0) and generate doubles
    random1.setRange(20.0, 30.0);

    // Generate and print 10 random doubles using nextDbl() with the new range
    std::cout << "\n10 random doubles using random1 (new range):" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << random1.nextDbl() << std::endl;
    }

    return 0;
}

