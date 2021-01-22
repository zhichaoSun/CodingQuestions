//
// Created by zhichao on 20 Jan 2021.
//

#include "algoExpert.h"


/**********************************************
 * Array
 **********************************************/

/***
 * Given two non-empty arrays of integers,
 * write a function that determines whether the second array is a subsequence of the first one.
 * @param std::vector<int> array
 * @param std::vector<int> sequence
 * @return bool validOrNot
 */
bool algoExpert::isValidSubsequence(std::vector<int> array, std::vector<int> sequence) {
    int ai = 0;
    int si = 0;
    bool result = false;
    while(ai<=array.size() && si<=array.size()){
        if(sequence[si]==array[ai]){
            si++;
            if(si==sequence.size()){
                result=true;
            }
        }
        ai++;
    }
    return result;
}
