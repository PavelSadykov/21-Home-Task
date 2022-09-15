//
//  main.cpp
//  С++ ДЗ 21
//
//  Created by Павел on 15.09.2022.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    float x = 5, y=10;
    float *px=&x;
    float *py=&y;
    float mid;
    mid=(*px + *py)/2;
    cout<<"Среднее арифметическое = "<<mid<<endl;
    
    
    return 0;
}

