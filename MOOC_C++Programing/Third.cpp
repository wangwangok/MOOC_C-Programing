//
//  Third.cpp
//  MOOC_C++Programing
//
//  Created by 王望 on 2017/2/9.
//  Copyright © 2017年 Will. All rights reserved.
//

#include "Third.hpp"
#include <iostream>

#define NUM 3

int _main_third(){
    
    return 0;
}
 
float sqrt(float a){
    const double EPS = 0.00000001;
    double x = 1.0;
    double _last_x = x + 1 + EPS;
    while (x - _last_x > EPS || _last_x - x > EPS) {
        _last_x = x;
        x = (x + a / x) / 2;
    }
    return x;
}


float sqrt(float a);

void record(void){
#if NUM == 1///第三周作业第一题
    int n;
    
    while (scanf("%d",&n),!(n > 0)) {
        ;
    }
    if (!(n % 2)) {
        printf("even\n");
    }else{
        printf("odd\n");
    }
#elif NUM == 2///第三周作业第二题
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    while (!a) {
        scanf("%f",&a);
    }
    ///http://baike.baidu.com/view/1798692.htm
    float result = b*b - 4.0 * a * c;
    if (result < 0) {
        float _actual = -b/(2.0*a);
        if (!b) {
            _actual = b/(2.0*a);
        }
        float _virtual = sqrt(4.0*a *c-b*b)/(2.0*a);
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",_actual,_virtual,_actual,_virtual);
    }else{
        float _sqrt_f = sqrt(result);
        ///x1 = (-b + sqrt(b*b-4*a*c))/(2*a), x2 = (-b - sqrt(b*b-4*a*c))/(2*a)
        float x1 = (-b + _sqrt_f)/(2.0 * a);
        float x2 = (-b - _sqrt_f)/(2.0 * a);
        
        if (!result) {//b*b = 4ac;
            printf("x1=x2=%.5f\n",x1);
        }else{
            printf("x1=%.5f;x2=%.5f\n",x1,x2);
        }
    }
#elif NUM == 3
    float x,y;
    scanf("%f %f",&x,&y);
    int bool_x = (x >= -1 & x <= 1);
    int bool_y = (y >= -1 & y <= 1);
    switch (bool_x & bool_y) {
        case 0:
            printf("no\n");
            break;
        case 1:
            printf("yes\n");
            break;
        default:
            break;
    }
#endif
}


