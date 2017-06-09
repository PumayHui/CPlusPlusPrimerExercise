//
//  ifSentence.cpp
//  C++PrimerExercise
//
//  Created by hp on 2017/6/9.
//  Copyright © 2017年 hp. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    //currNum是当前正在统计的数，num是读入的新值
    int currNum = 0, num = 0;
    //读取第一个数，并且确保不为空
    if (cin >> currNum) {
        int count = 1;//保存正在处理的当前值的个数
        while (cin >> num) {
            if (num == currNum) {
                count++ ;
            }
            else{
                cout << currNum << " occurs "<< count << " times "<<endl;
                currNum = num;//记住新值
                count = 1;//重置计数器
            }
        }
        //记住打印文件中最后一个值的个数
        cout << currNum << " occurs "<< count << " times " << endl;
        
    }
    return 0;
}
