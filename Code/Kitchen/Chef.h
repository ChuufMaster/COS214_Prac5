#ifndef CHEF_H
#define CHEF_H

class Chef {

private:
	int _cookingTime;
	Chef *_successor;

public:
	virtual void cook() = 0;

	int getCookingTime();

	void setCookingTime(int cookingTime);
};

#endif
