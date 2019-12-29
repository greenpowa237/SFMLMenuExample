void MainWindow::changeState(States newstate)
{

	switch (newstate)
	{
	case States::MENU:
		CurrentState = std::move(std::unique_ptr<MainMenuState>(new MainMenuState));
		std::cout << "State: MainMenu" << std::endl;
		break;

	case States::OPTIONS:
		CurrentState = std::move(std::unique_ptr<OptionsState>(new OptionsState));
		std::cout << "State: Options" << std::endl;
		break;
	}
