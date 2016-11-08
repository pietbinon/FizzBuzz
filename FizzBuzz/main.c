//
//  main.m
//  FizzBuzz
//
//  Created by Pierre Binon on 2016-10-30.
//  Copyright © 2016 Pierre Binon. All rights reserved.
//

#include<stdio.h>

int main() {
    
    int divisor1 = 3;
    int divisor2 = 5;
    
    for (int i = 1; i <= 100; i++) {
        if (i % divisor1 == 0) {
            if (i % divisor2 == 0) {
                printf("FizzBuzz \n");
            }
            else {
                printf("Fizz \n");
            }
        }
        else {
            if (i % divisor2 == 0) {
                printf("Buzz \n");
            }
            else {
                printf("%d \n", i);
            }
        }
    }
    
    return 0;
}

