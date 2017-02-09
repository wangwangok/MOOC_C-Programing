//
//  Second.cpp
//  MOOC_C++Programing
//
//  Created by 王望 on 2017/2/9.
//  Copyright © 2017年 Will. All rights reserved.
//

#include "Second.hpp"

#define NUM  3

int _main_second(){
#if NUM == 1
    printf("NUM == 1\n");
    int _int;
    char _char;
    float _float;
    double _double;
    scanf("%c\n%d\n%f\n%lf",&_char,&_int,&_float,&_double);
    printf("%c %d %.6f %.6lf\n",_char,_int,_float,_double);
#elif NUM == 2
    printf("NUM == 2\n");
    double r;
    double pi = 3.14;
    double _const = 4/3.0;
    double _v;
    
    
    while (scanf("%lf",&r),r < 0 | r > 100) {
        printf("r is wrong, please input agin!\n");
    }
    _v = _const*pi*(r*r*r);
    printf("%.2lf\n",_v);
#elif NUM == 3
    double pi = 3.14159;
    double _r;
    double _h;
    while (scanf("%lf %lf",&_h,&_r),_r < 0 | _h < 0) {
        printf("r or h is wrong, please input these agin!\n");
    }
    double sum_ml = pi * _r * _r * _h;
    double sum_l = sum_ml / 1000.0;
    int count = 20/sum_l;
    printf("%d\n",count + 1);
#endif
    return 0;
}
