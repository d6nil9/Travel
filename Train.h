#pragma once
#include "Transport.h"
#include "Politeness.h"

class Train : public Transport, public Politeness
{
public:
	Train();
	Train(string travel, int travelPrice);
	double travelTrainPrice = 0;
	void GetTravelPrice() override;
	void GetSeats() override;
	void PassengerCanTravel() override;
	void GetPoliteness() override;
};
