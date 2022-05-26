#include "Transport.h"

void Transport::GetTravelPrice()
{
	if (travel == "Berlin") {
		travelPrice = 10000;
	}
	else if (travel == "Paris") {
		travelPrice = 20000;
	}
	else if (travel == "Warsaw") {
		travelPrice = 5000;
	}
	else if (travel == "Lisbon") {
		travelPrice = 28000;
	}
}

void Transport::PassengerCanTravel()
{
	cout << "\n¬ведите ваши средства: " << endl;
	cin >> passengerMoney;
}

void Transport::GetSeats()
{
	if (canTravel == true)
	{
		srand(time(0));
		currentSeats = minSeats + rand() % (maxSeats - minSeats);
		cout << "\n—вободных мест в транспорте " << currentSeats << endl;
		cout << "=============================================================================" << endl;
	}
	else
	{
		cout << "¬ам не имеет смысла знать сколько мест в транспорте свободно!" << endl;
		cout << "=============================================================================" << endl;
	}
}
