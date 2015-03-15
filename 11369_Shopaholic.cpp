//
//  11369_Shopaholic.cpp
//  UVA
//
//  Created by JR Aquino, Ken Asanion, Joshua Poyatos on 3/14/15.
//  Copyright (c) 2015. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int testCases;
    int n;
    
    cin >> testCases;
    
    while(testCases > 0){
        cin >> n;
        int items[n];
        
        for(int i = 0;i < n;++i)
            cin >> items[i];
        
        sort(items,items + n);
        
        int sum = 0;
        
        for(int i = n - 3;i >= 0;i -= 3)
            sum += items[i];
        
        testCases--;
        cout << sum << "\n";
    }
    
    return 0;
}