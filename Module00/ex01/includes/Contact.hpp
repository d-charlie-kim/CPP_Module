#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>

class Contact {
	public:
	 Contact();
	 ~Contact();
	 void setFirstName();
	 void setLastName();
	 void setNickName();
	 void setPhoneNumber();
	 void setDarkestSecret();

	 std::string getFirstName();
	 std::string getLastName();
	 std::string getNickName();
	 std::string getPhoneNumber();
	 std::string getDarkestSecret();

	private:
	 std::string _firstname;
	 std::string _lastname;
	 std::string _nickname;
	 std::string _phonenumber;
	 std::string _darkestsecret;
};

#endif
