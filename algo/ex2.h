#pragma once
#include<iostream>
#include<list>

using namespace std;

void affichage_list(list<string> ls) {
	
	for (auto it : ls) {
		cout << it << endl;
	}
}

void remp_list(list<string>& ls) {
	cout << "pour s'arreter taper $" << endl;
	cout << "entrer la phrase" << endl;
	string mot;
	char  car;
	mot = "";
	car = getchar();
	while (car != '\n') {
		if (!isalpha(car)) {
			car = getchar();

		}
		else {

			while (isalpha(car)) {
				mot = mot + car;
				car = getchar();

			}
			ls.push_back(mot);
			mot = "";


		}

	}
}

auto lambda1 = [](string exp) {
	int s = exp.length();
	string res = "";
	for (int i = 0; i < s; i++) {
		char car = exp[i];
		if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u') {
			car = '*';
		}
		res = res + car;
	}
	return res;
};

void trans_voy(list<string>ls) {
	list<string>res(ls.size());
	affichage_list(ls);
	transform(ls.begin(), ls.end(), res.begin(), lambda1);
	affichage_list(res);
}

auto lambda2 = [](string exp) {
	int nb = exp.length();
	string res = "";
	char car;
	for (int i = 0; i < nb; i++) {
		car = exp[i];
		res = res + (char)toupper(car);
	}
	return res;
};

void trans_to_maj(list<string>ls) {
	list<string>tmp(ls.size());
	affichage_list(ls);
	transform(ls.begin(), ls.end(), tmp.begin(), lambda2);
	affichage_list(tmp);
}

