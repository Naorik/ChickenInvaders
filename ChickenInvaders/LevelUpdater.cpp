/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "LevelUpdater.h"

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
//---------------------------------------C-tor-----------------------------------------//
//-------------------------------------------------------------------------------------//
LevelUpdater::LevelUpdater(sf::RenderWindow & window)
	:_window(window), _score("Score: "), _lives("Lives: "),
	_texts(ResourcesManager::instance().getScoreBoardTexts()), _rect({ 200.f, 100.f })
{
	_rect.setPosition(sf::VideoMode::getDesktopMode().width -203.f, 2.f);
	_rect.setFillColor(sf::Color::Transparent);
	_rect.setOutlineThickness(3.f);
	_rect.setOutlineColor(sf::Color(255,158,0,200));
}
//-------------------------------------------------------------------------------------//
// This function updates the wave variables: Wave number, player Score and Player Lives
//-------------------------------------------------------------------------------------//
void LevelUpdater::update(int playerScore, int playerLives)
{
	_score = "Score: ";
	_lives = "Lives: ";
	_buffer << playerScore;
	_score += _buffer.str();
	_texts[0]->setString(_score);
	_buffer.str("");
	_buffer << playerLives;
	_lives += _buffer.str();
	_texts[1]->setString(_lives);
	_buffer.str("");
}
//-------------------------------------------------------------------------------------//
// The follwing function draws the class object
//-------------------------------------------------------------------------------------//
void LevelUpdater::draw()
{
	_window.draw(_rect);
	_window.draw(*_texts[0]);
	_window.draw(*_texts[1]);
}