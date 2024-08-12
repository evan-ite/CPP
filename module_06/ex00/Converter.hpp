#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>

class Converter
{
	public:
		~Converter();

		static void convert(const std::string& value);

	private:
		Converter();
		Converter(const Converter &copy);
		Converter & operator=(const Converter &assign);

};

#endif
