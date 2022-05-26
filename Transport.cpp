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
	cout << "\n������� ���� ��������: " << endl;
	cin >> passengerMoney;
}

void Transport::GetSeats()
{
	if (canTravel == true)
	{
		srand(time(0));
		currentSeats = minSeats + rand() % (maxSeats - minSeats);
		cout << "\n��������� ���� � ���������� " << currentSeats << endl;
		cout << "=============================================================================" << endl;
	}
	else
	{
		cout << "��� �� ����� ������ ����� ������� ���� � ���������� ��������!" << endl;
		cout << "=============================================================================" << endl;
	}
}
