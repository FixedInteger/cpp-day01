#include <iostream>
#include <fstream>
#include <string>

std::string customReplace(const std::string& str, const std::string& from, const std::string& to) {
    std::string result;
    size_t start = 0;
    size_t found = str.find(from);

    while (found != std::string::npos) {
        result += str.substr(start, found - start);
        result += to;
        start = found + from.length();
        found = str.find(from, start);
    }
    result += str.substr(start);

    return (result);
}
int main(int ac , char **av)
{
	std::string FileName;
	std::string s1;
	std::string s2;
	std::string string = "";

	if (ac > 1)
	{
		FileName = av[1];
		s1 = av[2];
		s2 = av[3];

		std::fstream Toread_file;
		std::fstream Torewrite_file;
		Toread_file.open(FileName,std::ios::in  | std::ios::out);

		if (Toread_file.is_open())
		{
			while(getline(Toread_file,string))
			{
				string = customReplace(string,s1,s2);
				Torewrite_file.open(FileName + ".replace",std::ios::out | std::ios::app);
				Torewrite_file << string << std::endl;
				Torewrite_file.close();
			}
		}
		Toread_file.close();
	}
	else
		std::cout << "You have entered no arguments" << std::endl;
	return 0;
}