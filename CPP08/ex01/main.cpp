#include "Span.hpp"

int main()
{
	{
		Span *s = new Span(6);

		try {
			s->addNumber(1564);
			s->addNumber(5786);
			s->addNumber(57);
			s->addNumber(578678);
			s->addNumber(57867);
			s->addNumber(57868);
//			s->addNumber(57867);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "Longest Span s1: " << s->longestSpan() << std::endl;
			std::cout << "Shortest Span s1: " << s->shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		delete s;
	}

	std::cout << std::endl;

	{
		Span *s2 = new Span(10000);
		std::vector<int> vec;

		srand(time(NULL));
		try {
			for (int i = 0; i < 10000; ++i) {
				int rng = rand();
				vec.push_back(rng);
			}
			s2->addNumber(vec.begin(), vec.end());

			std::cout << "longest Span s2: " << s2->longestSpan() << std::endl;
			std::cout << "shortest span s2: " << s2->shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete s2;
	}

	std::cout << std::endl;

	{
		Span *s3 = new Span(5);

		try {
			s3->addNumber(6);
			s3->addNumber(3);
			s3->addNumber(17);
			s3->addNumber(9);
			s3->addNumber(11);

		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "Shortest Span s3: " << s3->shortestSpan() << std::endl;
			std::cout << "Longest Span s3: " << s3->longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete s3;
	}

	return 0;

}