//
//  Random.cpp
//  Midterm
//
//  Created by Sean Madzelonka on 4/25/23.
//

#include "Random.hpp"

const double Random::RESHUFFLE_PERCENTAGE = 0.9;

Random::Random() : current_index(0) {
    srand(time(NULL));
    fillVect(0, RAND_MAX);
    shuffle();
}

Random::Random(double min, double max) : current_index(0) {
    srand(time(NULL));
    fillVect(min, max);
    shuffle();
}

Random::Random(int seed) : current_index(0) {
    srand(seed);
    fillVect(0, RAND_MAX);
    shuffle();
}

int Random::nextInt() {
    if (current_index >= VECTOR_SIZE * RESHUFFLE_PERCENTAGE) {
        shuffle();
        current_index = 0;
    }
    return static_cast<int>(random_values[current_index++]);
}

double Random::nextDbl() {
    if (current_index >= VECTOR_SIZE * RESHUFFLE_PERCENTAGE) {
        shuffle();
        current_index = 0;
    }
    return random_values[current_index++];
}

void Random::setRange(double min, double max) {
    fillVect(min, max);
    shuffle();
}

void Random::fillVect(double min, double max) {
    random_values.clear();
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        double r = (((double) rand() / (double) RAND_MAX) * (max - min)) + min;
        random_values.push_back(r);
    }
}

void Random::shuffle() {
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        int idx1 = rand() % VECTOR_SIZE;
        int idx2 = rand() % VECTOR_SIZE;
        std::swap(random_values[idx1], random_values[idx2]);
    }
}
