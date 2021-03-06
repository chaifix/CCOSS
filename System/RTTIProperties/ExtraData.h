//--------------------------------------------------------------------------------------------------------------------
// EXTRA DATA CLASS
// written by Frederic My
// fmy@fairyengine.com
// this empty base class is intended to be derived
//--------------------------------------------------------------------------------------------------------------------

#ifndef   _EXTRADATA_H_
#define   _EXTRADATA_H_

//----------------------------------------------- CLASSES ------------------------------------------------------------

#include  "RTTI.h"

//--------------------------------------------------------------------------------------------------------------------
// ExtraData
//--------------------------------------------------------------------------------------------------------------------

namespace RTE
{

class ExtraData
{
    DECLARE_ROOT_RTTI;

// public methods
    public:
                    ExtraData          (void)            {}
    virtual        ~ExtraData          (void)            {}
};
}

//--------------------------------------------------------------------------------------------------------------------

#endif // _EXTRADATA_H_
