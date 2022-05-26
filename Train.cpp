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
	cout << "��� ����������� ��� ��������� ��� � " << travelTrainPrice << " ������";
}

void Train::GetSeats()
{
	if (canTravel == true)
	{
		Train::GetTicket();
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
		cout << "�� ������ ��������������!";
		canTravel = true;
	}
	else {
		cout << "�� �� ������ ��������������!" << endl;
		cout << "��� �� �������: " << travelTrainPrice - passengerMoney << " ������" << endl;
		canTravel = false;
	}
}

void Train::GetTicket()
{
	srand(time(0));
	ticketNum = 1000 + rand() % (9999 - 1000);
	ticket = to_string(ticketNum);
	cout << "\n����� ������ ������: " + ticket;
}
