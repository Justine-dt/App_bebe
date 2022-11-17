#include "bebe.hpp"
#include "appli_sdl.hpp"
#include "liste.hpp"


int main(int ac, char** av)
{
	bebe x;

	init_fenetre(ac, av);
	x.prise_bibi();
	x.quantite_ingere();
	x.quantite_lait_utilise();
	x.quantite_eau_utilise();
	x.bebe_regurgite();
	return 0;
}