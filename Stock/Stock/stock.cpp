//
//  stock.cpp
//  Stock
//
//  Created by Anthony Mace on 3/21/15.
//  Copyright (c) 2015 Amaceing. All rights reserved.
//

#include <stdio.h>
#include "stock.h"
#include <iostream>

void stock::acquire(const std::string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "Number of shares can't be negative!";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_total();
}

void stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative!";
    } else {
        shares += num;
        share_val = price;
        set_total();
    }
}

void stock::sell(long num, double price) {
    
}

void stock::update(double price) {
    share_val = price;
    set_total();
}

void stock::show() {
    std::cout << "Company: " << company << '\n'
                << "Shares: " << shares << '\n'
                << "Share Price: $" << share_val << '\n'
                << "Total Worth: $" << total_val << '\n' << '\n';
}
