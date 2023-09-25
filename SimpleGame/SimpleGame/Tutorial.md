# SFML ���̺귯�� ��ġ

# Youtube SFML 2D Game ���� ����

## ������Ʈ
https://www.sfml-dev.org/download/sfml/2.6.0/

## �ٿ�ε�
- C++ 17: 2022 / 32��Ʈ
- 

## ���� ����

```
- SimpleGame	- External	- include
							- lib
				- SimpleGame
				- SimpleGame.sln
```

- SFML > include ��ü ���� => SimpleGame > External > include
- SFML > lib ��ü ����/���� => SimpleGame > External > lib
- SFML > bin ��ü ���� => SimpleGame > SimpleGame 

# VS 2022 ȯ�� ����

- VS 2022 ������ ��� ���� > Solution Platform > x86���� ����
- Solution Explorer > Properties
- ��� ���� ����
	- Configuration > All Configuration
	- Platform > win 32

- C/C++ > General > Additional Include Directories > $(SolutionDir)\External\include
	- SFML���� �����ؿ� ����/������ �ִ� ��ġ�� ����
	- $(SolutionDir) : ���� ������Ʈ ����
- Liker > General > $(SolutionDir)\External\lib;%(AdditionalLibraryDirectories)
	SFML���� �����ؿ� ����/������ �ִ� ��ġ(����)�� ����
	- 
- Liker > Input > (���� Configuration Release) >  Additional Dependencies 
```
	- <�Է�>												
sfml-system.lib
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
```

- Liker > Input > (���� Configuration debug) >  Additional Dependencies 
```
	<�Է�>												
sfml-system-d.lib
sfml-graphics-d.lib
sfml-window-d.lib
sfml-audio-d.lib
sfml-network-d.lib
```

# Event

- ���, ��Ȳ�� ��ȭ
- Interface�� �����ؼ� ����� ��Ȳ�� ��ȭ
- Ű����, ���콺�� ����� ��Ȳ�� ��ȭ
	- Ű���� �̺�Ʈ : Ű �Է�
	- ���콺 �̺�Ʈ : ���콺 Ŭ��(Press/Release), �� ��ũ��, ���� Ŭ��
- ��ġ ��ũ�� : ��ġ, ��������, ��ġ
- �ε�

## Event Handling

- Event Delegate : �������� �̺�Ʈ�� ����
- Event Listening : �̺�Ʈ�� ����
- Event Handle : ������ �̺�Ʈ�� ���ؼ� ������ ������ �ϰ� �ϴ� ��
- 


# Game Loop

# SimpleGame ������Ʈ�� ������ Game Ŭ����

- ������ ���������� control�ϴ� Ŭ����
- Enemy
- Player


  // sf::RenderWindow Window(sf::VideoMode(1027, 768), "SSimple GGame", sf::Style::Titlebar | sf::Style::Close);
   // sf::Event Event;

    while (Nolja.IsCreate()){
        while (Window.pollEvent(Event)) {
            switch (Event.type) {
            case sf::Event::Closed:
                Window.close();
                break;
            case sf::Event::KeyPressed:
                if(Event.key.code == sf::Keyboard::Escape){
                Window.close();            
                }
            }
        }

        Window.clear(sf::Color(255,199,95,75));

    Window.display();
    }