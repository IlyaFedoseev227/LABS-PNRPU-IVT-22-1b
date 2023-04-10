#include <string>

class classBook {

private:
	std::string name;
	std::string autor;
	int year;

public:
	classBook();
	classBook(std::string, std::string, int);
	classBook(const classBook&);
	~classBook();
	void show();
	void set_name(std::string);
	void set_autor(std::string);
	void set_year(int);
};