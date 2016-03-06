//
//  main.cpp
//  convert
//
//  Created by sunhongyin on 16/3/6.
//  Copyright © 2016年 sunhongyin. All rights reserved.
//

#include <iostream>
int stonetolb(int); //fucntion prototype for stonetolb

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int sts)
{
    return sts*14;
}