#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>


class Data
{

	public :
		Data (void) : school("1337"), promo("1st promo") {}
		std::string school;
		std::string promo;
};


class Serializer
{

	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t ptr);

		Serializer( Serializer const & src );
		~Serializer();

	private:
		Serializer();

};


#endif /* ****************************************************** SERIALIZER_H */
