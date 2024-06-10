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
		Fixed(const int number); // argument is a integer
		Fixed(const float number); // argument is a float

		// Destructor
		~Fixed();

		// Operators
		Fixed & operator=(const Fixed &assign);

		// Getters / Setters
		int getRawBits(void) const;
		void setRawBits(int const raw);

		// Member functions
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int _value;
		static const int _fracBits = 8;

	friend std::ostream & operator<<(std::ostream &os, const Fixed &fixed);
};

#endif
