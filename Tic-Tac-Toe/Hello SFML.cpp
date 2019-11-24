// Hello SFML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <sfml/Graphics.hpp>
#include <sstream>

using namespace sf;

int main()
{
	VideoMode vm(1200,1200);
	RenderWindow window(vm,"Tic-Tac-Toe",Style::Resize);

	bool running = true;

	
		bool endturn = false;

		//all xs and os are disabled


		bool xBool1x1 = false;
		bool xBool1x2 = false;
		bool xBool1x3 = false;
		bool xBool2x1 = false;
		bool xBool2x2 = false;
		bool xBool2x3 = false;
		bool xBool3x1 = false;
		bool xBool3x2 = false;
		bool xBool3x3 = false;

		bool oBool1x1 = false;
		bool oBool1x2 = false;
		bool oBool1x3 = false;
		bool oBool2x1 = false;
		bool oBool2x2 = false;
		bool oBool2x3 = false;
		bool oBool3x1 = false;
		bool oBool3x2 = false;
		bool oBool3x3 = false;

		//prevents x or o being in same place

		bool turn1x1 = false;
		bool turn1x2 = false;
		bool turn1x3 = false;
		bool turn2x1 = false;
		bool turn2x2 = false;
		bool turn2x3 = false;
		bool turn3x1 = false;
		bool turn3x2 = false;
		bool turn3x3 = false;

		bool player1Turn = true;
		bool boolWinner = false;
		bool boolWinner1 = false;
		bool boolWinner2 = false;

		bool boolTile = false;

		Font fontWinner;
		fontWinner.loadFromFile("fonts/cour.ttf");

		Text winner;
		winner.setCharacterSize(100);
		winner.setPosition(200, 300);
		winner.setFillColor(Color::Green);
		winner.setFont(fontWinner);

		Texture tileTexture;
		tileTexture.loadFromFile("graphics/tile.png");
		Sprite tileSprite;
		tileSprite.setTexture(tileTexture);
		tileSprite.setPosition(0, 0);


		//This is for all 9 os

		Texture oTexture;
		oTexture.loadFromFile("graphics/o.png");
		Sprite oSprite1x1;
		oSprite1x1.setTexture(oTexture);
		oSprite1x1.setPosition(60, 50);

		Sprite oSprite1x2;
		oSprite1x2.setTexture(oTexture);
		oSprite1x2.setPosition(60, 500);

		Sprite oSprite1x3;
		oSprite1x3.setTexture(oTexture);
		oSprite1x3.setPosition(60, 900);

		Sprite oSprite2x1;
		oSprite2x1.setTexture(oTexture);
		oSprite2x1.setPosition(500, 50);

		Sprite oSprite2x2;
		oSprite2x2.setTexture(oTexture);
		oSprite2x2.setPosition(500, 500);

		Sprite oSprite2x3;
		oSprite2x3.setTexture(oTexture);
		oSprite2x3.setPosition(500, 900);

		Sprite oSprite3x1;
		oSprite3x1.setTexture(oTexture);
		oSprite3x1.setPosition(925, 50);

		Sprite oSprite3x2;
		oSprite3x2.setTexture(oTexture);
		oSprite3x2.setPosition(925, 500);

		Sprite oSprite3x3;
		oSprite3x3.setTexture(oTexture);
		oSprite3x3.setPosition(925, 900);

		//all 9 xs

		Texture xTexture;
		xTexture.loadFromFile("graphics/x.png");

		Sprite xSprite1x1;
		xSprite1x1.setTexture(xTexture);
		xSprite1x1.setPosition(60, 50);

		Sprite xSprite1x2;
		xSprite1x2.setTexture(xTexture);
		xSprite1x2.setPosition(60, 500);

		Sprite xSprite1x3;
		xSprite1x3.setTexture(xTexture);
		xSprite1x3.setPosition(60, 900);

		Sprite xSprite2x1;
		xSprite2x1.setTexture(xTexture);
		xSprite2x1.setPosition(500, 50);

		Sprite xSprite2x2;
		xSprite2x2.setTexture(xTexture);
		xSprite2x2.setPosition(500, 500);

		Sprite xSprite2x3;
		xSprite2x3.setTexture(xTexture);
		xSprite2x3.setPosition(500, 900);

		Sprite xSprite3x1;
		xSprite3x1.setTexture(xTexture);
		xSprite3x1.setPosition(925, 50);

		Sprite xSprite3x2;
		xSprite3x2.setTexture(xTexture);
		xSprite3x2.setPosition(925, 500);

		Sprite xSprite3x3;
		xSprite3x3.setTexture(xTexture);
		xSprite3x3.setPosition(925, 900);

		Event game;

		while (window.isOpen())
		{
			if (Keyboard::isKeyPressed(Keyboard::Escape))
			{
				window.close();
			}

			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				running = true;
			}

			//all 9 combination of xs and os
			if (running)
			{

				if (!endturn)
				{
					while (window.pollEvent(game))
					{
						switch (game.type)
						{
						case Event::Closed:
							window.close();
							break;

						case Event::KeyPressed:
							if (!turn1x1)
							{
								if (Keyboard::isKeyPressed(Keyboard::Numpad7))
								{

									if (player1Turn)
									{
										turn1x1 = true;
										xBool1x1 = true;
										endturn = true;
										player1Turn = false;

									}
									else
									{
										turn1x1 = true;
										oBool1x1 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}


							if (!turn2x1)
							{
								if (Keyboard::isKeyPressed(Keyboard::Numpad8))
								{
									if (player1Turn)
									{
										turn2x1 = true;
										xBool2x1 = true;
										endturn = true;
										player1Turn = false;
									}
									else
									{
										turn2x1 = true;
										oBool2x1 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}


							if (!turn3x1)
							{
								if (Keyboard::isKeyPressed(Keyboard::Numpad9))
								{
									if (player1Turn)
									{
										turn3x1 = true;
										xBool3x1 = true;
										endturn = true;
										player1Turn = false;
									}
									else
									{
										turn3x1 = true;
										oBool3x1 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}

							if (!turn1x2)
							{
								if (Keyboard::isKeyPressed(Keyboard::Numpad4))
								{
									if (player1Turn)
									{
										turn1x2 = true;
										xBool1x2 = true;
										endturn = true;
										player1Turn = false;
									}
									else
									{
										turn1x2 = true;
										oBool1x2 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}

							if (!turn2x2)
							{
								if (Keyboard::isKeyPressed(Keyboard::Numpad5))
								{
									if (player1Turn)
									{
										turn2x2 = true;
										xBool2x2 = true;
										endturn = true;
										player1Turn = false;
									}
									else
									{
										turn2x2 = true;
										oBool2x2 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}

							if (!turn3x2)
							{
								if (Keyboard::isKeyPressed(Keyboard::Numpad6))
								{
									if (player1Turn)
									{
										turn3x2 = true;
										xBool3x2 = true;
										endturn = true;
										player1Turn = false;
									}
									else
									{
										turn3x2 = true;
										oBool3x2 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}

							if (!turn1x3)
							{
								if (Keyboard::isKeyPressed(Keyboard::Numpad1))
								{
									if (player1Turn)
									{
										turn1x3 = true;
										xBool1x3 = true;
										endturn = true;
										player1Turn = false;
									}
									else
									{
										turn1x3 = true;
										oBool1x3 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}

							if (!turn2x3)
							{

								if (Keyboard::isKeyPressed(Keyboard::Numpad2))
								{
									if (player1Turn)
									{
										turn2x3 = true;
										xBool2x3 = true;
										endturn = true;
										player1Turn = false;
									}
									else
									{
										turn2x3 = true;
										oBool2x3 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}


							if (!turn3x3)
							{
								if (Keyboard::isKeyPressed(Keyboard::Numpad3))
								{
									if (player1Turn)
									{
										turn3x3 = true;
										xBool3x3 = true;
										endturn = true;
										player1Turn = false;
									}
									else
									{
										turn3x3 = true;
										oBool3x3 = true;
										endturn = true;
										player1Turn = true;
									}
								}
							}


						}
					}
				}

				//detects if player 1 have won
				if (xBool1x1)
				{
					if (xBool2x1)
					{
						if (xBool3x1)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool1x2)
				{
					if (xBool2x2)
					{
						if (xBool3x2)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool1x3)
				{
					if (xBool2x3)
					{
						if (xBool3x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool1x1)
				{
					if (xBool1x2)
					{
						if (xBool1x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool2x1)
				{
					if (xBool2x2)
					{
						if (xBool2x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool3x1)
				{
					if (xBool3x2)
					{
						if (xBool3x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool1x1)
				{
					if (xBool2x2)
					{
						if (xBool3x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool3x1)
				{
					if (xBool2x2)
					{
						if (xBool1x3)
						{
							boolWinner1 = true;
						}
					}

				}
				if (xBool1x1)
				{
					if (xBool2x1)
					{
						if (xBool3x1)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool1x2)
				{
					if (xBool2x2)
					{
						if (xBool3x2)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool1x3)
				{
					if (xBool2x3)
					{
						if (xBool3x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool1x1)
				{
					if (xBool1x2)
					{
						if (xBool1x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool2x1)
				{
					if (xBool2x2)
					{
						if (xBool2x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool3x1)
				{
					if (xBool3x2)
					{
						if (xBool3x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool1x1)
				{
					if (xBool2x2)
					{
						if (xBool3x3)
						{
							boolWinner1 = true;
						}
					}

				}


				if (xBool3x1)
				{
					if (xBool2x2)
					{
						if (xBool1x3)
						{
							boolWinner1 = true;
						}
					}

				}

				//detects of player 2 has won
				if (oBool1x1)
				{
					if (oBool2x1)
					{
						if (oBool3x1)
						{
							boolWinner2 = true;
						}
					}

				}


				if (oBool1x2)
				{
					if (oBool2x2)
					{
						if (oBool3x2)
						{
							boolWinner2 = true;
						}
					}

				}


				if (oBool1x3)
				{
					if (oBool2x3)
					{
						if (oBool3x3)
						{
							boolWinner2 = true;
						}
					}

				}


				if (oBool1x1)
				{
					if (oBool1x2)
					{
						if (oBool1x3)
						{
							boolWinner2 = true;
						}
					}

				}


				if (oBool2x1)
				{
					if (oBool2x2)
					{
						if (oBool2x3)
						{
							boolWinner2 = true;
						}
					}

				}


				if (oBool3x1)
				{
					if (oBool3x2)
					{
						if (oBool3x3)
						{
							boolWinner2 = true;
						}
					}

				}


				if (oBool1x1)
				{
					if (oBool2x2)
					{
						if (oBool3x3)
						{
							boolWinner2 = true;
						}
					}

				}


				if (oBool3x1)
				{
					if (oBool2x2)
					{
						if (oBool1x3)
						{
							boolWinner2 = true;
						}
					}

				}

				if (boolWinner1)
				{
					winner.setString("Player 1 won!");
					boolWinner = true;
					boolTile = true;
				}
				else if (boolWinner2)
				{
					winner.setString("Player 2 won!");
					boolWinner = true;
					boolTile = true;
				}


				endturn = false;
				window.clear();
				if (!boolTile)
				{
					window.draw(tileSprite);
				}
				//draws all the xs
				if (xBool1x1)
				{
					window.draw(xSprite1x1);
				}
				if (xBool1x2)
				{
					window.draw(xSprite1x2);
				}

				if (xBool1x3)
				{
					window.draw(xSprite1x3);
				}
				if (xBool2x1)
				{
					window.draw(xSprite2x1);
				}
				if (xBool2x2)
				{
					window.draw(xSprite2x2);
				}
				if (xBool2x3)
				{
					window.draw(xSprite2x3);
				}
				if (xBool3x1)
				{
					window.draw(xSprite3x1);
				}
				if (xBool3x2)
				{
					window.draw(xSprite3x2);
				}
				if (xBool3x3)
				{
					window.draw(xSprite3x3);
				}

				//draws all the os

				if (oBool1x1)
				{
					window.draw(oSprite1x1);
				}
				if (oBool1x2)
				{
					window.draw(oSprite1x2);
				}

				if (oBool1x3)
				{
					window.draw(oSprite1x3);
				}
				if (oBool2x1)
				{
					window.draw(oSprite2x1);
				}
				if (oBool2x2)
				{
					window.draw(oSprite2x2);
				}
				if (oBool2x3)
				{
					window.draw(oSprite2x3);
				}
				if (oBool3x1)
				{
					window.draw(oSprite3x1);
				}
				if (oBool3x2)
				{
					window.draw(oSprite3x2);
				}
				if (oBool3x3)
				{
					window.draw(oSprite3x3);
				}


				if (boolWinner)
				{
					window.draw(winner);
					running = false;
				}



				window.display();
			}
		}
    return 0;
}

