#include <iostream>
#include <vector>
#include <map>
#include <cmath>

int longestSubarray (std::vector<int> &array,int k) {
    int left = 0;
    int maxLength = 0;
    std::map<int,int> freq;

    for(int right=0; right < array.size(); right++){

        freq[array[right]]++;

        while(freq[array[right]] < k){
            freq[array[left]]--;
            left++;
        }

        maxLength = std::max(maxLength,right-left+1);
        return maxLength;

    }
}

int main() {

    std::vector<int> arr = {1,2,1,2,3,1,1};

    std::cout << longestSubarray(arr, 2);
}
