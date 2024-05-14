#include "Serializer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serializer::Serializer()
{
}

Serializer::Serializer( const Serializer & __unused src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serializer::~Serializer()
{
}
Data	*Serializer::deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data*>(ptr);
}
uintptr_t  Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
