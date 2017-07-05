//
//  Sales_item.cpp
//  C++PrimerExercise
//
//  Created by hp on 2017/7/5.
//  Copyright © 2017年 hp. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Sales_item.h"
#include <string>

int main()
{
    Sales_item item1, item2;
    cin>>item1>>item2;
    if(item1.isbn == item2.isbn){
        cout<< item1 + item2<<endl;
        return 0;
    }
    else{
        cerr<<"数据记录必须有相同的ISBN！"<<endl;
        return -1;
    }
}
