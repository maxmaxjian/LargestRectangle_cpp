#include "solution.h"
#include <vector>
#include <algorithm>
#include <iostream>

int Solution::largestRectangleArea(std::vector<int> & height) {
  
    std::vector<int> indices;
    for (int i = 0; i < height.size(); i++) {
        if (indices.empty() || height[i] < height[i-1]) {
            std::cout << i << std::endl;
            indices.push_back(i);
        }
    }
    std::cout << "The indices are:" << std::endl;
    std::for_each(indices.begin(), indices.end(),
     [](const int & i){std::cout << i << " ";});
    std::cout << std::endl;
    
    return 0;
}
