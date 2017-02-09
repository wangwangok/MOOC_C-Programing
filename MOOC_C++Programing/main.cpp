//
//  main.cpp
//  MOOC_C++Programing
//
//  Created by 王望 on 2017/2/8.
//  Copyright © 2017年 Will. All rights reserved.
//

#include <iostream>

#include "Second.hpp"
#include "Third.hpp"

#define WEEK 3

int main(int argc, const char * argv[]) {
    // insert code here...
#if WEEK == 2
    _main_second();
#elif WEEK == 3
    _main_third();
#endif
    return 0;
}
