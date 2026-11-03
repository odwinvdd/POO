#include <iostream>
#include <string>


struct etudiant{
    std::string nom;
    std::string prenom;
    int age; 
}typedef etudiant;

double moyenneAge(const etudiant etudiants[], int taille) {
    if (taille == 0) {
        return 0.0;
    }
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += etudiants[i].age;
    }
    return static_cast<double>(somme) / taille;
}

int main() {
    std::cout << "titouan mange au CROUS" << std::endl;
    
    etudiant p;
    p.nom = "Pablo";
    p.prenom = "Villegas";
    p.age = 20; 

    etudiant k;
    k.nom = "Nollan";
    k.prenom = "Darras-Lia";
    k.age = 19;

    etudiant d;
    d.nom = "Pablo";
    d.prenom = "Villegas";
    d.age = 16; 

    etudiant v;
    v.nom = "Pablo";
    v.prenom = "Villegas";
    v.age = 12; 

    etudiant q;
    q.nom = "Pablo";
    q.prenom = "Villegas";
    q.age = 20; 

    etudiant x;
    x.nom = "Pablo";
    x.prenom = "Villegas";
    x.age = 24; 

    etudiant t;
    t.nom = "Pablo";
    t.prenom = "Villegas";
    t.age = 20; 

    etudiant b;
    b.nom = "Pablo";
    b.prenom = "Villegas";
    b.age = 23; 

    etudiant m;
    m.nom = "Pablo";
    m.prenom = "Villegas";
    m.age = 21; 

    etudiant l;
    l.nom = "Pablo";
    l.prenom = "Villegas";
    l.age = 17; 

    


    

    etudiant etudiants[10] = {p, k, d, v, q, x, t, b, m, l};
    std::cout << "Moyenne d'age : " << moyenneAge(etudiants, 10) << std::endl;
    return 0;
}
