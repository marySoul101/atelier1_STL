#pragma once
#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Personne
{
private:
	string nom;
	string adresse;
	string num_tel;
public:
	Personne(string name, string adr, string tel);
	void affichage()const;
	void ajouter_a_map(unordered_map<string, Personne*>&map);
};
void afficher_map(unordered_map<string, Personne*> map);

