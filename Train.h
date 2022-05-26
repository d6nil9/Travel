#pragma once
#include "Transport.h"

class Train : public Transport
{
public:
	Train();
	Train(string travel, int travelPrice);
	double travelTrainPrice = 0;
	void GetTravelPrice() override;
	void GetSeats() override;
	void PassengerCanTravel() override;
	virtual void GetTicket();
protected:
	int ticketNum = 0;
	string ticket;
};


