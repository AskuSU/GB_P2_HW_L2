#pragma once
//#include<stdint.h>

enum class Denomination
{
	A = 1,
	_2,	_3,	_4,	_5,	_6,	_7,	_8,	_9, _10,
	J, Q, K
};

enum class Suit
{
	clubs = 1,	//♣️
	diamonds,	//♦️
	hearts,		//♥️
	spades		//♠️
};

class Card
{
public:
	Denomination getDenomination() { return denomination; };
	Suit getSuit() { return suit; };

private:
	Denomination denomination;
	Suit suit;
};

class Deck
{
public:

private:
	Card cards[(int)Suit::spades][(int)Denomination::K]{};
};