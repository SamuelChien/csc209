//
//  lab1.c
//  csc209
//
//  Created by Samuel Chien on 1/19/15.
//  Copyright (c) 2015 Samuel Chien. All rights reserved.
//

#include "lab1.h"

void print_triangle(int n)
{
    //0-9
    int x;
    int i;
    int j;
    int y;
    
    for(x =0; x<n-1; x++)
    {
        int leftIndex = n - x;
        int rightIndex = n;
        for(i = 0; i<leftIndex; i++)
        {
            printf(" ");
        }
        printf("*");
        for(j = 1; j<rightIndex-leftIndex; j++)
        {
            printf(" ");
        }
        if(x != 0)
        {
            printf("*");
        }
        printf("\n");
    }
    
    //10
    for(y=0; y<n; y++)
    {
        printf("*");
    }
    printf("\n");
}