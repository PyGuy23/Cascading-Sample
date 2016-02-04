//
//  Time.hpp
//  Cascading Sample
//
//  Created by newuser on 2/4/16.
//  Copyright © 2016 Cascading. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include<iostream>

class Time {
public:
    
    explicit Time(int = 0, int = 0, int = 0);
    
    Time &setTime(int, int, int);
    Time &setHour(int);
    Time &setMinute(int);
    Time &setSecond(int);
    
    
    unsigned int getHour()const;
    unsigned int getMinute()const;
    unsigned int getSecond()const;
    
    
    void printUniversal()const;
    void printStandard()const;
    
    
    
    
private:
    
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    
    
};

#endif /* Time_hpp */
