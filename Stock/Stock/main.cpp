//
//  main.cpp
//  Stock
//
//  Created by Anthony Mace on 3/21/15.
//  Copyright (c) 2015 Amaceing. All rights reserved.
//

#include <iostream>
#include "stock.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    stock test;
    test.acquire("Mace", 20, 10);
    test.show();
    return 0;
}
