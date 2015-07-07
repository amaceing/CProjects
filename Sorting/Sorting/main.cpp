//
//  main.cpp
//  Sorting
//
//  Created by Anthony Mace on 7/6/15.
//  Copyright (c) 2015 Mace. All rights reserved.
//

#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &nums);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::vector<int> nums;
    nums.push_back(6);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(0);
    
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i];
    }
    std::cout << "\n";
    
    insertionSort(nums);
    
    return 0;
}

void insertionSort(std::vector<int> &nums) {
    //Insertion sort
    for (int i = 1; i < nums.size(); i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && key < nums[j]) {
            int temp = nums[j];
            nums[j] = key;
            nums[i] = temp;
            j -= 1;
        }
        
    }
    
    for (int i = 0; i < 5; i++) {
        std::cout << nums[i];
    }
}
