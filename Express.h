#pragma once
#include "Train.h"

class Express : public Train
{
public:
	Express(string travel, int travelPrice);
	double travelExpressPrice = 0;
	void GetTravelPrice() override;
	void GetSeats() override;
	void PassengerCanTravel() override;
	void GetTicket() override;
};


