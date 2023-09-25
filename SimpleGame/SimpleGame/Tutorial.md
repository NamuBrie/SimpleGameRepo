# SFML 라이브러리 설치

# Youtube SFML 2D Game 영상 참조

## 웹사이트
https://www.sfml-dev.org/download/sfml/2.6.0/

## 다운로드
- C++ 17: 2022 / 32비트
- 

## 폴더 구조

```
- SimpleGame	- External	- include
							- lib
				- SimpleGame
				- SimpleGame.sln
```

- SFML > include 전체 파일 => SimpleGame > External > include
- SFML > lib 전체 파일/폴더 => SimpleGame > External > lib
- SFML > bin 전체 파일 => SimpleGame > SimpleGame 

# VS 2022 환경 설정

- VS 2022 에디터 상단 툴바 > Solution Platform > x86으로 선택
- Solution Explorer > Properties
- 상단 공통 영역
	- Configuration > All Configuration
	- Platform > win 32

- C/C++ > General > Additional Include Directories > $(SolutionDir)\External\include
	- SFML에서 복사해온 파일/폴더가 있는 위치를 선택
	- $(SolutionDir) : 현재 프로젝트 폴더
- Liker > General > $(SolutionDir)\External\lib;%(AdditionalLibraryDirectories)
	SFML에서 복사해온 파일/폴더가 있는 위치(폴더)를 선택
	- 
- Liker > Input > (위에 Configuration Release) >  Additional Dependencies 
```
	- <입력>												
sfml-system.lib
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
```

- Liker > Input > (위에 Configuration debug) >  Additional Dependencies 
```
	<입력>												
sfml-system-d.lib
sfml-graphics-d.lib
sfml-window-d.lib
sfml-audio-d.lib
sfml-network-d.lib
```

# Event

- 사건, 상황의 변화
- Interface와 연관해서 생기는 상황의 변화
- 키보드, 마우스로 생기는 상황의 변화
	- 키보드 이벤트 : 키 입력
	- 마우스 이벤트 : 마우스 클릭(Press/Release), 휠 스크롤, 더블 클릭
- 터치 스크린 : 터치, 스와이프, 핀치
- 로딩

## Event Handling

- Event Delegate : 여러개의 이벤트의 대응
- Event Listening : 이벤트를 감지
- Event Handle : 감지된 이벤트에 대해서 적절한 동작을 하게 하는 것
- 


# Game Loop

# SimpleGame 프로젝트에 구현한 Game 클래스

- 게임을 전반적으로 control하는 클래스
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