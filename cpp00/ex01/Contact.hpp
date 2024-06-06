#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		// Constructors
		Contact();
		Contact(std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string phone,
				std::string secret);
		// Destructor
		~Contact();

		void view(int index) const;
		int exist() const;


	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone;
		std::string _secret;

};

#endif
