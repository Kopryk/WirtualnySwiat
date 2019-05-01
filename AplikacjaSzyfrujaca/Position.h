#pragma once


struct Position
{
	int x_;
	int y_;

	Position() = delete;
	~Position() = default;
	Position(int x, int y);

	Position(Position& position) = default;
	Position(Position&& position) = delete;

	Position& operator = (const Position& r_position) = default;
	Position& operator = (const Position&& r_position) = delete;

};

inline Position::Position( const int x, const int y): x_(x), y_(y)
{}