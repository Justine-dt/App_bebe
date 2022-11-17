#ifndef BEBE_H
#define BEBE_H

#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class bebe
{
private:
	int qte_lait;
	int qte_eau;
public:
	bebe();
	virtual ~bebe() = default;
	int get_qte_lait();
	int get_qte_eau();
	void set_qte_lait(int);
	void set_qte_eau(int);
	void prise_bibi();
	void quantite_ingere();
	void quantite_lait_utilise();
	void quantite_eau_utilise();
	void bebe_regurgite();
};

struct timer_t {
	int sec;
	int min;
	int h;
};

void timer_regurgite();
void timer_non_regurgite();

#endif