#pragma once

extern const int BELTSIZE = 10;

class Belt
{
	int beltSize[BELTSIZE];
};

//Each time the belt is mutated (addition or removal), a message should be printed indicating which thread performed the action and the current state