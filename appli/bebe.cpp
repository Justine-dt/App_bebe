#include "bebe.hpp"
#include "liste.hpp"

bebe::bebe()
{
}

int bebe::get_qte_lait()
{
	return qte_lait;
}

void bebe::set_qte_lait(int qte_de_lait)
{
	qte_lait = qte_de_lait;
}

int bebe::get_qte_eau()
{
	return qte_eau;
}

void bebe::set_qte_eau(int qte_de_eau)
{
	qte_eau = qte_de_eau;
}

void bebe::prise_bibi()
{
	__time64_t hour;
	struct tm moment;

	time(&hour);
	localtime_s(&moment, &hour);
	cout << "heure prise du bibi: " << moment.tm_hour << ":";
	if (moment.tm_min < 10)
		cout << "0" << moment.tm_min << endl;
	else
		cout << moment.tm_min << endl;
}

void timer_regurgite()
{
	timer_t chrono{ 0, 0, 0 };

	for (int x = 0; x < 10800; x++) {
		system("CLS");
		cout << setfill('0') << setw(2) << chrono.h << " h : ";
		cout << setfill('0') << setw(2) << chrono.min << " min : ";
		cout << setfill('0') << setw(2) << chrono.sec << " sec" << endl;
		this_thread::sleep_for(chrono::milliseconds(x));
		chrono.sec++;
		if (chrono.sec == 60) {
			chrono.min++;
			if (chrono.min == 60) {
				chrono.h++;
				chrono.min = 0;
			}
			chrono.sec = 0;
		}
	}
}

void timer_non_regurgite()
{
	timer_t chrono{ 0, 0, 0 };

	for (int x = 0; x < 1800; x++) {
		system("CLS");
		cout << setfill('0') << setw(2) << chrono.h << " h : ";
		cout << setfill('0') << setw(2) << chrono.min << " min : ";
		cout << setfill('0') << setw(2) << chrono.sec << " sec" << endl;
		this_thread::sleep_for(chrono::milliseconds(x));
		chrono.sec++;
		if (chrono.sec == 60) {
			chrono.min++;
			if (chrono.min == 60) {
				chrono.h++;
				chrono.min = 0;
			}
			chrono.sec = 0;
		}
	}
}

void bebe::quantite_ingere()
{
	int valeur = 0;

	cout << "quantite de lait ingere par le bebe? ";
	cin >> valeur;
	cout << "mL" << endl;
}

void bebe::quantite_lait_utilise()
{
	int valeur = 0;

	cout << "quantite de lait utilise pour le bibi? ";
	cin >> valeur;
	cout << "mg" << endl;
}

void bebe::quantite_eau_utilise()
{
	int valeur = 0;

	cout << "quantite d'eau utilise pour le bibi? ";
	cin >> valeur;
	cout << "mL" << endl;
}

void bebe::bebe_regurgite()
{
	int condition;

	cout << "Est ce que bebe a regurgite?" << endl;
	cin >> condition;
	if (condition == 0)
		timer_regurgite();
	else if (condition == 1)
		timer_non_regurgite();
	else
		return;
}