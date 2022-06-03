#include <iostream>


#include  "FiguriContainer.h"
int main() {
	FiguriContainer fig;
	fig.Add(new Cerc("rosu"));
	fig.Add(new Patrat("verde"));
	fig.Add(new Dreptunghi("rosu"));
	fig.ShowAll();
	fig.ShowByColor(new Color("rosu"));
	return 0;
}