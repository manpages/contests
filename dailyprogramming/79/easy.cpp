#include <iostream>
#include <algorithm>

void step_count(const float aAlpha, const float aBeta, const int aSteps, float* aState) {
    // Init. result array with aBeta as the value
    std::fill_n(aState, aSteps, aBeta);
    // Solve the task
    if (aSteps >= 2) {
        // Calculate the step
        float step = (aBeta-aAlpha)/(aSteps-1);
        // Solve the bich and store the data in the last argument
        for (int i=aSteps; i>=0; --i) {
            aState[(i-2)] = aState[(i-1)] - step;
        }
    }
    return;
}

int main() {
    float result[5];
    step_count(18.75, -22.0, 5, result);
    std::cout << "[ ";
    for (int i = 0; i < 5; i++) std::cout << result[i] << ", ";
    std::cout << "]";
    return 0;
}
