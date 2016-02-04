//
//  main.cpp
//  Cascading Sample
//
//  Created by newuser on 2/4/16.
//  Copyright © 2016 Cascading. All rights reserved.
//

#include <iostream>
#include "Time.hpp"
#include<iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    Time t;
    t.setHour(18).setMinute(30).setSecond(23);
    
    
    cout<<"Universal time:";
    t.printUniversal();
    
    cout<<"\nStandard time:";
    t.printStandard();
    
    
    t.setTime(20, 20, 20).printStandard();
    cout<<endl;
    
    
    
    
    return 0;
}
