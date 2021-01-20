//
// Created by zhich on 20 Jan 2021.
//

#include "algoExpert.h"

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
