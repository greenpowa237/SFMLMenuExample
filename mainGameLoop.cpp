//This is an example of your game loop
//...

void MainWindow::run()
{
	while (window.isOpen())
	{
		CurrentState->HandleEvents(*this);
		window.clear(sf::Color::Black);

	CurrentState->Update(*this);
	CurrentState->Draw(*this);

	window.display();
	}

//...
