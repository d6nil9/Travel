#include "Car.h"

Car::Car(string travel, int travelPrice)
{
	this->travel = travel;
	this->travelPrice = travelPrice;
}

void Car::GetTravelPrice()
{
	Transport::GetTravelPrice();
	travelCarPrice = travelPrice * 1.5;
	cout << "��� ����������� ��� ��������� ��� � " << travelCarPrice << " ������";
}

void Car::GetSeats()
{
	minSeats = 1;
	maxSeats = 5;
	Transport::GetSeats();
}

void Car::PassengerCanTravel()
{
	Transport::PassengerCanTravel();
	if (passengerMoney >= travelCarPrice) {
		cout << "�� ������ ��������������!";
		canTravel = true;
	}
	else {
		cout << "�� �� ������ ��������������!" << endl;
		cout << "��� �� �������: " << travelCarPrice - passengerMoney << " ������" << endl;
		canTravel = false;
	}
}
