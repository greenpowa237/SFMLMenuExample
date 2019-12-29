#include "changeState.hpp"

class MainWindow
{
public:
	MainWindow();

	//Add the the different windows you want to have
	enum States {MENU, OPTIONS, ...};

	void changeState(States newstate);

	void run();
	bool isrunning();
	
	bool active;
	sf::RenderWindow window;

private:
	std::unique_ptr<State> CurrentState;
};
