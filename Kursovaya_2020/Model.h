#pragma once

class Massive
{
	int mass_b[13][13] =
	{
	1,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  0,
	0,  2,  1,  0,  0,  0,  0,  0,  0,  1,  0, 1, 11,
	1,  0,  1,  1,  0,  1,  1,  1,  0,  1,  0, 1, 12,
	1,  3,  0,  1,  0,  0,  0,  1,  0,  1,  0, 1, 13,
	1,  0,  0,  1,  1,  1,  1,  1,  0,  1,  0, 1, 14,
	1,  4,  0,  0,  0,  0,  0,  1,  0,  1,  0, 1, 15,
	1,  0,  1,  1,  0,  1,  0,  1,  0,  1,  0, 1, 16,
	1, 21, 31,  1,  0,  1,  1,  1,  0,  1,  0, 1, 17,
	1,  1,  1,  1,  0,  0,  0,  0,  0,  1,  0, 1, 18,
	1,  0,  1,  1,  0,  1,  1,  1,  1,  1,  0, 1, 19,
	1, 22, 32,  0, 23, 33,  0, 34, 24,  0,  0, 0, 20,
	1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0, 1,  0,
	0, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0,  0,
	};

	int mass_p[13][13] =
	{
	1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  0,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 11,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 12,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 13,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 14,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 15,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 16,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 17,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 18,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 19,
	1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 20,
	1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  0,
	0, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0,  0,
	};

public:
	void setElemBuild(int i, int j, int elem)
	{
		mass_b[i][j] = elem;
	}
	int getElemBuild(int i, int j)
	{
		return mass_b[i][j];
	}
	void setElemPlayer(int i, int j, int elem)
	{
		mass_p[i][j] = elem;
	}
	int getElemPlayer(int i, int j)
	{
		return mass_p[i][j];
	}
};
