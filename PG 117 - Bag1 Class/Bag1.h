#ifndef ALAYO_BAG1_H
#define	ALAYO_BAG1_H
#include <cstdlib>	//provides size_t

namespace Alayo_2
{
	class bag
	{
	public:
		typedef int value_type;
		typedef std::size_t size_type;
		static const size_type CAPACITY = 30;

		//CONSTRUCTORS
		bag() { used = 0; };

		//MUTATOR FUNCTIONS
		size_type erase(const value_type& target);
		bool erase_one(const value_type& target);
		void insert(const value_type& entry);
		void operator +=(const bag& addend);

		//ACCESSOR FUNCTIONS
		size_type size() const { return used; }
		size_type count(const value_type& target) const;

	private:
		value_type data[CAPACITY];
		size_type used;
	};

	//NONMEMBER FUNCTIONS
	bag opertor +(const bag& b1, const bag& b2);
}

#endif