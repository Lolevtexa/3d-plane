#include "map.h"

int& Map::operator[] (const int x, const int y) {
	if (abs(x - size / 2) <= size / 2) {
		if (abs(y - size / 2) <= size / 2) {
			return arr[x][y];
		}
	}
	return -1;
}

Map::Map (int size) {
	this->size = size;
}