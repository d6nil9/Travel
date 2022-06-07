#include "Train.h"
#include "Transport.h"

Train::Train()
{

}

Train::Train(string travel, int travelPrice)
{
	this->travel = travel;
	this->travelPrice = travelPrice;
}

void Train::GetTravelPrice()
{
	Transport::GetTravelPrice();
	travelTrainPrice = travelPrice * 0.5;
	cout << "Это путешествие вам обойдется вам в " << travelTrainPrice << " рублей";
}

void Train::GetSeats()
{
	if (canTravel == true)
	{
		Train::GetPoliteness();
	}
	else
	{
	}
	minSeats = 200;
	maxSeats = 800;
	Transport::GetSeats();
}

void Train::PassengerCanTravel()
{
	Transport::PassengerCanTravel();
	if (passengerMoney >= travelTrainPrice) {
		cout << "Вы можете путешествовать!";
		canTravel = true;
	}
	else {
		cout << "Вы не можете путешествовать!" << endl;
		cout << "Вам не хватает: " << travelTrainPrice - passengerMoney << " рублей" << endl;
		canTravel = false;
	}
}

void Train::GetPoliteness()
{
	cout << "\nСчастливого путешествия на поезде!" << endl;
}
