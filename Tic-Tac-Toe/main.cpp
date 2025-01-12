#include <iostream>

#define SIZEOFGRID 3

char grid[SIZEOFGRID][SIZEOFGRID];

void board()
{
	//char z{ '1' };
	
	for (int x = 0; x < SIZEOFGRID; x++)
	{
		std::cout << "--------------" << std::endl;
		for (int y = 0; y < SIZEOFGRID; y++)
		{
			if ((grid[x][y] == 'x' ) || (grid[x][y] == 'X') || (grid[x][y] == 'O') || (grid[x][y] == 'o'))
			{
				std::cout << " " << grid[x][y] << " " << "|" << " ";
			}
			else{
			grid[x][y] = ' ';
			std::cout << " " << grid[x][y] << " " << "|" << " " ;
			}
		}

		std::cout << std::endl;

	}
	std::cout << "--------------" << std::endl;

}


/*void control(int row1, int column1)
{
	if (grid[x][y] == 'X' || 'O')
	{

	}
}*/


void playBoard(int row,int column, char input)
{
	grid[row][column] = input;
		board();
}


int main()
{	
	int x = 0;
	int y = 0;
	char z{};
  	board();
	for (int i = 0; i < 9; i++) {
		std::cout << "Please put a number for row:";
		std::cin >> x;
		std::cout << "Please put a number for column:";
		std::cin >> y;
		std::cout << "Please X or O for a coordinate you set for:";
		std::cin >> z;
		playBoard(x, y, z);
	}
	std::cout << "game ended";
	//board();


	return 0;


}