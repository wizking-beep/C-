#include <iostream>
#include <algorithm>
#include <vector>

// std::sort() sorts the elements in the range [first, last) in ascending order
// std::sort(sorted_vec.begin(), sorted_vec.end()) sorts the elements in sorted_vec in ascending order
// sorted_vec.begin() returns an iterator to the first element of the vector
// sorted_vec.end() returns an iterator to the element past the last element of the vector


int main() {
    const std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::vector<int> sorted_vec = vec;

    //lets me see the distance
    std::cout << "Distance between begin and end: " << std::distance(sorted_vec.begin(), sorted_vec.end()) << std::endl;

    std::cout << "Before sorting: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::sort(sorted_vec.begin(), sorted_vec.end());
    std::cout << "After sorting: ";
    for (int num : sorted_vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
