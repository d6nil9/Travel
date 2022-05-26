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
	cout << "Это путешествие вам обойдется вам в " << travelExpressPrice << " рублей";
}

void Express::GetSeats()
{
	if (canTravel == true)
	{
		Express::GetTicket();
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
		cout << "Вы можете путешествовать!";
		canTravel = true;
	}
	else {
		cout << "Вы не можете путешествовать!" << endl;
		cout << "Вам не хватает: " << travelExpressPrice - passengerMoney << " рублей" << endl;
		canTravel = false;
	}
}

void Express::GetTicket()
{
	srand(time(0));
	ticketNum = 100 + rand() % (999 - 100);
	ticket = to_string(ticketNum);
	cout << "\nНомер вашего билета: ExPre$$$$::::" + ticket + "::::ExPre$$$$";
}
