#pragma once
class MV {
	int speed;
public:
	MV(const int& a) : speed(a) {};
	int GetSpeed() {
		return this->speed;
	}

	MV operator+=(const MV& a) {
		return(this->speed += a.speed);
	}



};