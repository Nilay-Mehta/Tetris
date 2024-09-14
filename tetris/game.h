#pragma once
#include "Grid.h"
#include "blocks.cpp"

class Game
{
public:
	Game();
	~Game();
	void Draw();
	void HandleInput();
	void MoveBlockDown();


private:
	void MoveBlockLeft();
	void MoveBlockRight();
	Block GetRandomBlock();
	std::vector<Block> GetAllBlocks();
	bool IsBlockOutside();
	void RotateBlock();
	void LockBlock();
	bool BlockFits();
	void Reset();
	void UpdateScore(int linesCleared, int moveDownPoints);

public:
	bool gameOver;
	int score;
	Music music;

private:
	Grid grid;
	std::vector<Block> blocks;
	Block currentBlock;
	Block nextBlock;
	Sound rotateSound;
	Sound clearSound;
};