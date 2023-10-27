#include <iostream>

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain( std::string level );
		
};
void Harl::debug()
{
	std::cout << "[ DEBUG ]" << "\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}
void Harl::info()
{
	std::cout << "[ INFO ]" << "\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enoughbacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning()
{
	std::cout << "[ WARNING ]" << "\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error()
{
	std::cout << "[ ERROR ]" << "\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int before_main(std:: string str, std::string p[4])
{
	int i = 0;
	while (i < 4)
	{
		switch(str.compare(p[i]))
		{
			case 0:
				return i;
		}
		i++;
	}
	return -1;
}
void Harl::complain(std::string level) 
{

	std::string p[4] = {"debug", "info", "warning", "error"};
	void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		switch(before_main(level, p))
		{
			case 0:
				(this->*ptr[0])();
			case 1:
				(this->*ptr[1])();
			
			case 2:
				(this->*ptr[2])();
			case 3:
			{
				(this->*ptr[3])();
				break;
			}
			default:
				std::cout << "Probably complaining about insignificant problems"<< std::endl;
			break;
		}
	
}

int main(int ac , char **av)
{
	Harl harl;
	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return 0;
	
}