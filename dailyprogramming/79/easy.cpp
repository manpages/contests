#include <iostream>
#include <algorithm>

void step_count(const float argFltAlpha, const float argFltBeta, const int argIntSteps, float* argIntPtrState) {
    // Init. result array with argFltBeta as the value
    std::fill_n(argIntPtrState, argIntSteps, argFltBeta);
    // Solve the task
    if (argIntSteps >= 2) {
        // Calculate the step
        float locFltStep = (argFltBeta-argFltAlpha)/(argIntSteps-1);
        // Solve the bich and store the data in the last argument
        for (int i=argIntSteps; i>=0; --i) {
            argIntPtrState[(i-2)] = argIntPtrState[(i-1)] - locFltStep;
        }
    }
    return;
}

int main() {
    float locIntPtrResult[5];
    step_count(18.75, -22.0, 5, locIntPtrResult);
    std::cout << "[ ";
    for (int locI = 0; locI < 5; locI++) std::cout << locIntPtrResult[locI] << ", ";
    std::cout << "]";
    return 0;
}
