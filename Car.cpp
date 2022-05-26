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
	cout << "Ёто путешествие вам обойдетс€ вам в " << travelCarPrice << " рублей";
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
		cout << "¬ы можете путешествовать!";
		canTravel = true;
	}
	else {
		cout << "¬ы не можете путешествовать!" << endl;
		cout << "¬ам не хватает: " << travelCarPrice - passengerMoney << " рублей" << endl;
		canTravel = false;
	}
}
