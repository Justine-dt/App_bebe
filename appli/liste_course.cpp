#include "liste.hpp"
#include "bebe.hpp"

void liste::liste_course()
{
    int achat_lait;
    int achat_eau;
    bebe miguel;

    cout << "Lait en poudre: ";
    cin >> achat_lait;
    cout << "g" << endl;
    int reappro_lait;
    reappro_lait = miguel.get_qte_lait() + achat_lait;
    miguel.set_qte_lait(reappro_lait);
    cout << "il vous reste ", miguel.get_qte_lait(), "g de lait en poudre";

    cout << "Eau ";
    cin >> achat_eau;
    cout << "L" << endl;
    int reappro_eau;
    reappro_eau = miguel.get_qte_eau() + achat_eau;
    cout << "il vous reste ", miguel.get_qte_eau(), "L d'eau";

    cout << "Couches ";
    cout << "Lingettes ";
    cout << "Talc ";
}
