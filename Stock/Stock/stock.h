//
//  stock.h
//  Stock
//
//  Created by Anthony Mace on 3/21/15.
//  Copyright (c) 2015 Amaceing. All rights reserved.
//

#ifndef Stock_stock_h
#define Stock_stock_h

#include <string>

class stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_total() {
        total_val = shares * share_val;
    }
public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif
