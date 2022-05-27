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
	cout << "\t\tThread ID: " << this_thread::get_id() << "\t\tGetTravelPrice\t" << endl;
}

void Car::GetSeats()
{
	minSeats = 1;
	maxSeats = 5;
	Transport::GetSeats();
	cout << "\t\tThread ID: " << this_thread::get_id() << "\t\tGetSeats\t" << endl;
}

void Car::PassengerCanTravel()
{
	Transport::PassengerCanTravel();
	if (passengerMoney >= travelCarPrice) {
		cout << "�� ������ ��������������!";
		cout << "\t\tThread ID: " << this_thread::get_id() << "\t\tPassengerCanTravel\t" << endl;
		canTravel = true;
	}
	else {
		cout << "�� �� ������ ��������������!" << endl;
		cout << "��� �� �������: " << travelCarPrice - passengerMoney << " ������" << endl;
		cout << "\t\tThread ID: " << this_thread::get_id() << "\t\tPassengerCanTravel\t" << endl;
		canTravel = false;
	}
}
