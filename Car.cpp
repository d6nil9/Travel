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
	cout << "Это путешествие вам обойдется вам в " << travelCarPrice << " рублей";
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
		cout << "Вы можете путешествовать!";
		Car::GetPoliteness();
		canTravel = true;
	}
	else {
		cout << "Вы не можете путешествовать!" << endl;
		cout << "Вам не хватает: " << travelCarPrice - passengerMoney << " рублей" << endl;
		canTravel = false;
	}
}

void Car::GetPoliteness()
{
	cout << "\nСчастливого путешествия на машине!" << endl;
}
