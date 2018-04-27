#include <string>
using namespace std;

class memberType{
public:

	void setMember(string name, int id, int books);
	void setName(string name);
	void setId(int id);
	void setBooks(int books);

	void getMember(string& name, int& id, int& books);
	void getName(string& name);
	void getId(int& id);
	void getBooks(int& books);

	memberType();
	memberType(string name, int id, int books);

private:
	string nm;
	int i;
	int bk;

};