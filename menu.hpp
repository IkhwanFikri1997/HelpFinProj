#ifndef menu_hpp
#define menu_hpp

#include "document.hpp"
using namespace std;

class menu {
	input Input;
	public:
		void NewDocument();
		void OpenDocument();
		void EditDocument();
		void FindWords();		
};

class word{
	input input;
	public:
		void SortWords();
};
#endif
