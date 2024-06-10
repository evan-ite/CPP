#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int value);

		// Destructor
		~Fixed();

		// Operators
		Fixed & operator=(const Fixed &assign);

		// Getters / Setters
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _value;
		static const int _fracBits = 8;

};

#endif
