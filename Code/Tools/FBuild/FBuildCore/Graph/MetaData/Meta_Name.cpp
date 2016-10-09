// Meta_Name
//------------------------------------------------------------------------------

// Includes
//------------------------------------------------------------------------------
#include "Tools/FBuild/FBuildCore/PrecompiledHeader.h"
#include "Meta_Name.h"

// Reflection
//------------------------------------------------------------------------------
REFLECT_BEGIN( Meta_Name, IMetaData, MetaNone() )
REFLECT_END( Meta_Name )

// CONSTRUCTOR
//------------------------------------------------------------------------------
Meta_Name::Meta_Name()
{
}

// CONSTRUCTOR
//------------------------------------------------------------------------------
Meta_Name::Meta_Name( const char * name )
    : m_Name( name )
{
}

// DESTRUCTOR
//------------------------------------------------------------------------------
Meta_Name::~Meta_Name() = default;

//------------------------------------------------------------------------------
