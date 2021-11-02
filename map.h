#include <vector.h>

class Map {
private:
	int size;
	std::vector<std::vector<int>> arr;

public:
	int& operator[] (const int x, const int y);

	Map(int size);
};
 