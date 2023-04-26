//
//  Random.hpp
//  Midterm
//
//  Created by Sean Madzelonka on 4/25/23.
//

#ifndef Random_hpp
#define Random_hpp

#include <stdio.h>
#include <vector>
#include <ctime>
#include <cstdlib>

class Random {
public:
    Random();
    Random(double min, double max);
    Random(int seed);

    int nextInt();
    double nextDbl();
    void setRange(double min, double max);

private:
    static const int VECTOR_SIZE = 250;
    static const double RESHUFFLE_PERCENTAGE;

    std::vector<double> random_values;
    int current_index;

    void fillVect(double min, double max);
    void shuffle();
};


#endif /* Random_hpp */
