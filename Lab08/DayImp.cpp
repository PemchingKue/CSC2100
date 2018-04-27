#include<string>
#include "Day.h"
using namespace std;

void Day::setDay(string day){
	if (_day == "SUN"){
		_day = "SUN";
	}
	else if (_day == "MON"){
		_day = "MON";
	}
	else if (_day == "TUE"){
		_day = "TUE";
	}
	else if (_day == "WED"){
		_day = "WED";
	}
	else if (_day == "THU"){
		_day = "THU";
	}
	else if (_day == "FRI"){
		_day = "FRI";
	}
	else if (_day == "SAT"){
		_day = "SAT";
	}
}

string Day::getDay(){
	if (_day == "SUN"){
		return _day;
	}
	else if (_day == "MON"){
		return _day;
	}
	else if (_day == "TUE"){
		return _day;
	}
	else if (_day == "WED"){
		return _day;
	}
	else if (_day == "THU"){
		return _day;
	}
	else if (_day == "FRI"){
		return _day;
	}
	else if (_day == "SAT"){
		return _day;
	}
	else{
		return "";
	}
}

void Day::addDays(int numDays){
	int idx1 = 0;
	int idx2;
	idx2 = getIdx(_day);

	idx1 = (idx2 + numDays) % 7;
	_day = getStr(idx1);
}

string Day::nextDay(){
	int idx1 = 0;
	int idx2;
	idx2 = getIdx(_day);

	idx1 = idx2 % 7;
	_day = getStr(idx1 + 1);

	return _day;
}

string Day::prevDay(){
	int idx1 = 0;
	int idx2;
	idx2 = getIdx(_day);

	idx1 = idx2 % 7;
	_day = getStr(idx1 - 2);

	return _day;
}

int Day::getIdx(string day){
	if (day == "SUN"){
		return 1;
	}
	else if (day == "MON"){
		return 2;
	}
	else if (day == "TUE"){
		return 3;
	}
	else if (day == "WED"){
		return 4;
	}
	else if (day == "THU"){
		return 5;
	}
	else if (day == "FRI"){
		return 6;
	}
	else if (day == "SAT"){
		return 7;
	}
	else{
		return 0;
	}
}

string Day::getStr(int idx){
	if (idx == 1){
		return "SUN";
	}
	else if (idx == 2){
		return "MON";
	}
	else if (idx == 3){
		return "TUE";
	}
	else if (idx == 4){
		return "WED";
	}
	else if (idx == 5){
		return "THU";
	}
	else if (idx == 6){
		return "FRI";
	}
	else if (idx == 7){
		return "SAT";
	}
	else{
		return "";
	}
}

Day::Day(){
	_day = "SUN";
}

Day::Day(string day){
	_day = day;
}