#pragma once
#include <gsl/pointers>

template<typename T> class ListeLiee;
template<typename T> class Iterateur;

template<typename T>

class Noeud
{
public:
	//TODO: Constructeur(s).
	Noeud(const T& donnee) : donnee_(donnee), prochaineDonnee_(nullptr), precedenteDonnee_(nullptr) {}

private:
	//TODO: Attributs d'un noeud.
	T donnee_;
	Noeud<T>* prochaineDonnee_;
	Noeud<T>* precedenteDonnee_;
	friend class ListeLiee<T>;
	friend class Iterateur<T>;
};
