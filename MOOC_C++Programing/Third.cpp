//
//  Third.cpp
//  MOOC_C++Programing
//
//  Created by 王望 on 2017/2/9.
//  Copyright © 2017年 Will. All rights reserved.
//

#include "Third.hpp"
#include <iostream>

#define NUM 2



int _main_third(){
#if NUM == 1
    int n;
    
    while (scanf("%d",&n),!(n > 0)) {
        ;
    }
    if (!(n % 2)) {
        printf("even\n");
    }else{
        printf("odd\n");
    }
#elif NUM == 2
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    while (!a) {
        scanf("%f",&a);
    }
    float result = b*b - 4.0 * a * c;
    float x1=0,x2=0;
    
    if (!result) {//b*b = 4ac;
        
    }else if (result > 0){//b*b > 4ac;
        
    }else{
        
    }
    
#endif
    return 0;
}

float sqrt(float a){
    const double EPS = 0.00001;
    double x = a / 2;
    double _last_x = x + 1 + EPS;
    while (x - _last_x > EPS || _last_x - x > EPS) {
        _last_x = x;
        x = (x + a / x) / 2;
    }
    return x;
}
