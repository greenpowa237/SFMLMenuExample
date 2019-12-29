//...

#pragma once

class MainWindow;

class Level
{
public:

	virtual void HandleEvents(MainWindow& mainWindow) = 0;
	virtual void Update(MainWindow& mainWindow) = 0;
	virtual void Draw(MainWindow& mainWindow) = 0;
	virtual		 ~Level() {};
};

//...
