#include "conv.h"

int convert(std::string rNumb) {
	std::map<char, int> dict;
	dict['I'] = 1;
	dict['V'] = 5;
	dict['X'] = 10;
	dict['L'] = 50;
	dict['C'] = 100;
	dict['D'] = 500;
	dict['M'] = 1000;

	int output = 0;
	int tmp = 0;
	for each (char var in rNumb)
	{
		int numb = dict[var];

		if (numb < tmp) {
			output += tmp;
			tmp = numb;
		}
		else if (numb > tmp) {
			if (tmp == 0) {
				tmp = numb;
			}
			else {
				output += numb - tmp;
				tmp = 0;
			}
		}
		else if (numb == tmp) {
			output += tmp + numb;
			tmp = 0;
		}
	}

	return output + tmp;
}