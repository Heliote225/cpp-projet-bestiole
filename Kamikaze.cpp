#include "Kamikaze.h"

void Kamikaze::info()
{
	cout << " Kamikaze" << endl;
}
Kamikaze::Kamikaze(void) {
	
}
Kamikaze::~Kamikaze(void) {
	//cout << "Destruct Kamikaze" << endl;
}
Kamikaze::Kamikaze( const Kamikaze & b ){
	setMultiple(this->getMultiple());
}