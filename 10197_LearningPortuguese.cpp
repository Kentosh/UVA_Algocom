//
//  10197_LearningPortuguese.cpp
//  UVA
//
//  Created by JR Aquino, Ken Asanion, Joshua Poyatos on 3/14/15.
//  Copyright (c) 2015. All rights reserved.
//
 
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main(){
    char portuguese[31], english[100], root[31];
    char tv[3];
    bool space = false;
    int i;
    
    while(scanf("%s %s", portuguese, english) == 2){
        
        if(space)
            cout << "\n";
        else
            space = true;
        
        if(strlen(portuguese) < 2) {
            cout << portuguese << " (to " << english << ")\n";
            cout << "Unknown conjugation\n";
            continue;
        }
        
        tv[0] = portuguese[strlen(portuguese)-2];
        tv[1] = portuguese[strlen(portuguese)-1];
        tv[2] = '\0';
        
        for (i = 0; i < strlen(portuguese) - 2; ++i){
            root[i] = portuguese[i];
        }
        root[i] = '\0';
        
        cout << portuguese << " (to " << english << ")\n";
        
        if ((strcmp(tv, "ar") == 0) || (strcmp(tv,"er") == 0)){
            printf("eu        %so\n", root);
            printf("tu        %s%cs\n", root, tv[0]);
            printf("ele/ela   %s%c\n", root, tv[0]);
            printf("n%cs       %s%cmos\n", (unsigned char)243, root, tv[0]);
            printf("v%cs       %s%cis\n", (unsigned char)243, root, tv[0]);
            printf("eles/elas %s%cm\n", root, tv[0]);
        } else if (strcmp(tv, "ir") == 0) {
            printf("eu        %so\n", root);
            printf("tu        %ses\n", root);
            printf("ele/ela   %se\n", root);
            printf("n%cs       %s%cmos\n", (unsigned char)243, root, tv[0]);
            printf("v%cs       %s%cs\n", (unsigned char)243, root, tv[0]);
            printf("eles/elas %sem\n", root);
        } else {
            cout << "Unknown conjugation\n";
        }
    }
    
    return 0;
}