//
//  uncertainInput.cpp
//  C++PrimerExercise
//
//  Created by hp on 2017/6/9.
//  Copyright © 2017年 hp. All rights reserved.
//


#include <iostream>

int main ()
{
    int sum = 0, value = 0;
    //读取数据直到遇到文件尾，计算所有读入值的和
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
