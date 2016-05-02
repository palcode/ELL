////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  EMLL
//  File:     Base.cpp (linear)
//  Authors:  Ofer Dekel
//
//  [copyright]
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Base.h"

namespace linear
{
    std::ostream& operator<<(std::ostream& os, const Base& v)
    {
        v.Print(os);
        return os;
    }
}
