//Put this is your "handle inputs" or "update" loop, depending on what makes sense for you

		if (SPRITE.getGlobalBounds().contains(
			sf::Mouse::getPosition(window).x,
			sf::Mouse::getPosition(window).y)
			&& event.key.code == sf::Mouse::Left
		{	
      window.changeState(MainWindow::States:://whatever window you want to switch to);
		}
