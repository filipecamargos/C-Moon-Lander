/*This is our velocity File*/

#ifndef VELOCITY_H
#define VELOCITY_H


//This class will determin the conditions for our lander's velocity
class Velocity
{
	//the private to be used 
	//D : will determin the distances 
private:
	float dx;
	float dy;

	//All the fucation necessary to make this class useable
public:
	//Contructors
	Velocity();
	Velocity(const float dx, const float dy);
	
	//Getters
	float getDx() const { return dx; }
	float getDy() const { return dy; }

	//Seters
	void setDx(const float dx);
	void setDy(const float dy);
};

#endif /*!VELOCITY_H*/