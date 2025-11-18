#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
	// {    
	// 	Array<int> numbers(MAX_VAL);
	//     int* mirror = new int[MAX_VAL];
	//     srand(time(NULL));
	//     for (int i = 0; i < MAX_VAL; i++)
	//     {
	//         const int value = rand();
	//         numbers[i] = value;
	//         mirror[i] = value;
	//     }
	//     {
	//         Array<int> tmp = numbers;
	//         Array<int> test(tmp);
	//     }

	//     for (int i = 0; i < MAX_VAL; i++)
	//     {
	//         if (mirror[i] != numbers[i])
	//         {
	//             std::cerr << "didn't save the same value!!" << std::endl;
	//             return 1;
	//         }
	//     }
	//     try
	//     {
	//         numbers[-2] = 0;
	//     }
	//     catch(const std::exception& e)
	//     {
	//         std::cerr << e.what() << '\n';
	//     }
	//     try
	//     {
	//         numbers[MAX_VAL] = 0;
	//     }
	//     catch(const std::exception& e)
	//     {
	//         std::cerr << e.what() << '\n';
	//     }

	//     for (int i = 0; i < MAX_VAL; i++)
	//     {
	//         numbers[i] = rand();
	//     }
	//     delete [] mirror;
	//     return 0;
	// }
	{
		try
		{
			int * a = new int();
			std::cout << *a << std::endl;
			Array<int> numbers(MAX_VAL);
		    int* mirror = new int[MAX_VAL];
		    srand(time(NULL));
		    for (int i = 0; i < MAX_VAL; i++)
		    {
		        const int value = rand();
		        numbers[i] = value;
		        mirror[i] = value;
		    }
	        Array<int> tmp = numbers;
	        Array<int> test(tmp);
			mirror[4] = 42343;
			delete a;
			std::cout << numbers.size() << "|" << MAX_VAL << std::endl;
		    for (int i = 0; i < MAX_VAL; i++)
		    {
		        if (mirror[i] != tmp[i])
		        {
		            std::cerr << "didn't save the same value!!" << std::endl;
					delete []mirror;
		            return 1;
		        }
				if (mirror[i] != test[i])
		        {
		            std::cerr << "didn't save the same value!!" << std::endl;
					delete []mirror;
		            return 1;
		        }
		    }
			std::cerr << "Have save the same value!!" << std::endl;
			delete []mirror;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		
	}
	{
		Array<int> numbers(10);
		try
		{
			numbers[11] = 44;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		

	}
}