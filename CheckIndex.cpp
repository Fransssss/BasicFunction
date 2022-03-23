//
// Created by XaveF on 3/23/2022.
//

#include "CheckIndex.h"
#include <iostream>

int CheckIndex(int dataArr[], int theSize, int valueToMatch )
{
    for(size_t i = 0; i < theSize; i++)
    {
        if(dataArr[i] == valueToMatch)
        {
            return i;
        }
    }
    return -1;
}