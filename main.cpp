#include "settings.h"
#include <ctime>

using namespace sf;

int main()
{
	srand(time(nullptr));
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
	window.setFramerateLimit(FPS);
	//�������� �������� ����
	
	
	
	
	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		//1 ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}

		//2 ���������� ��������

		//3 ��������� ����
		//3.1 ������� ����
		window.clear();
		//3.2 ��������� �������� (� ������!)
		
		//3.3 ����� �� �����
		window.display();
	}
	return 0;
}