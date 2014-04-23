/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    // define bounds
    int beginning = 0;
    int end = n - 1;

    // loop through array while beginning =< end
    while (beginning <=  end)
    {
      
         // start at middle
         int middle = (beginning + end) / 2;
        
        //if == value
        if (values[middle] == value)
        {
            // return true
            return true;
        }
        // if index > value
        else if (values[middle] > value)
        {
            // update upper bound
            end = middle - 1;
        }
        // if index < value 
        else if (values[middle] < value) 
        {
            // update lower bound
            beginning = middle + 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    
    // ensure propper usage
    if (n < 2)
    {
        return;
    }

    // declare a swaps variable
    int swaps;
    // loop through array while swaps > 0
    do
    {
        swaps = 0;
        for(int j = 0; j < n - 1; j++)
        {
            if (values[j] > values[j + 1])
            {
                int holder = values[j];
                values[j] = values[j + 1];
                values[j + 1] = holder;
                swaps += 1;
            }
        }
        if (swaps == 0)
        {
            return;
        }
    }while(swaps != 0);
}
