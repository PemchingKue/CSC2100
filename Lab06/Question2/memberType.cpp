#include <iostream>
#include <string>
#include "memberType.h"

void memberType::setMember(string name, int id, int books){
	nm = name;
	i = id;
	bk = books;
}
void memberType::setName(string name){
	nm = name;
}

void memberType::setId(int id){
	i = id;
}

void memberType::setBooks(int books){
	bk = books;
}

void memberType::getMember(string& name, int& id, int& books){
	name = nm;
	id = i;
	books = bk;
}

void memberType::getName(string& name){
	name = nm;
}
void memberType::getId(int& id){
	id = i;
}
void memberType::getBooks(int& books){
	books = bk;
}

memberType::memberType(){
	nm = "John Smith";
	i = 100;
	bk = 1;
}

memberType::memberType(string name, int id, int books){
	nm = name;
	i = id;
	bk = books;
}
