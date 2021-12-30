#include "Personne.h"

Personne::Personne(string name, string adr, string tel)
{
	this->nom = name;
	this->adresse = adr;
	this->num_tel = tel;
}

void Personne::affichage() const
{
	cout << "le nom: " << this->nom << "\tl'adresse: " << this->adresse << "\tle num tele: " << this->num_tel << endl;
}

void Personne::ajouter_a_map(unordered_map<string, Personne*>& map)
{
	map.insert(make_pair(this->nom, this));
}

void afficher_map(unordered_map<string, Personne*> map)
{
	priority_queue<string,  vector<string>, greater<string>> pq;
	
	for (auto it : map) {
		pq.push(it.first);
	}
	int taille = pq.size();
	for (int i=0;i<taille;i++){
		map.find(pq.top())->second->affichage();
		pq.pop();
	}
}
