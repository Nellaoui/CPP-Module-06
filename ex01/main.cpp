#include "Serializer.hpp"

int main()
{
	Data _data;

	uintptr_t pointer;

	pointer = Serializer::serialize(&_data);
	std::cout << "Serialized : " << pointer << std::endl;
	std::cout << "Desrialized  : " << Serializer::deserialize(pointer)->school << std::endl;
	std::cout << "Desrialized  : " << Serializer::deserialize(pointer)->promo << std::endl;

	return 0;
}
