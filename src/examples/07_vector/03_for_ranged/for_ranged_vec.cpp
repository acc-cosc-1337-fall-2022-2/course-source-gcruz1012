#include "for_ranged_vec.h"

using std::vector;

void for_ranged_vector_ref(std::vector<int>& nums)
{
    for(auto& n:nums)
    {
        n = -1;
    }
}