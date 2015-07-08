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
void reverseInsertionSort(std::vector<int> &nums);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    
//    nums.push_back(6);
//    nums.push_back(5);
//    nums.push_back(4);
//    nums.push_back(2);
//    nums.push_back(1);
//    nums.push_back(0);
    
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i];
    }
    std::cout << "\n";
    
    reverseInsertionSort(nums);
    
    return 0;
}

void insertionSort(std::vector<int> &nums) {
    //Insertion sort
    for (int i = 1; i < nums.size(); i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j -= 1;
        }
        nums[j + 1] = key;
        
    }
    
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i];
    }
}

void reverseInsertionSort(std::vector<int> &nums) {
    for (int i = 1; i < nums.size(); i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] < key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
    
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i];
    }
}
