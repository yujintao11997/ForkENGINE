/*
 * Python script library interface file
 * 
 * This file is part of the "ForkENGINE" (Copyright (c) 2014 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#include "../Interface.h"
#include "PyScriptInterpreter.h"


extern "C"
{

/*
Allocate the "python" script interpreter and return the raw pointer.
-> This is an exception in memory management of this engine.
   All other memory objects must be created with managed memory (i.e. std::shared_ptr)!
*/

FORK_EXPORT void* AllocScriptInterpreter(const void* environmentDesc)
{
    return new Fork::Script::PyScriptInterpreter(
        reinterpret_cast<const Fork::Script::ScriptInterpreter::EnvironmentDescription*>(environmentDesc)
    );
}

}



// ========================