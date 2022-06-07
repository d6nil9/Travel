#include "Express.h"

Express::Express(string travel, int travelPrice)
{
	this->travel = travel;
	this->travelPrice = travelPrice;
}

void Express::GetTravelPrice()
{
	Transport::GetTravelPrice();
	travelExpressPrice = travelPrice * 2.0;
	cout << "��� ����������� ��� ��������� ��� � " << travelExpressPrice << " ������";
}

void Express::GetSeats()
{
	if (canTravel == true)
	{
		Express::GetPoliteness();
	}
	else
	{
	}
	minSeats = 1;
	maxSeats = 150;
	Transport::GetSeats();
}

void Express::PassengerCanTravel()
{
	Transport::PassengerCanTravel();
	if (passengerMoney >= travelExpressPrice) {
		cout << "�� ������ ��������������!";
		canTravel = true;
	}
	else {
		cout << "�� �� ������ ��������������!" << endl;
		cout << "��� �� �������: " << travelExpressPrice - passengerMoney << " ������" << endl;
		canTravel = false;
	}
}

void Express::GetPoliteness()
{
	cout << "\n����������� ����������� �� ���������!" << endl;
}
