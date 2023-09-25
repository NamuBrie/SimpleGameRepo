#pragma once

#include <iostream>
#include<vector>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>


using namespace sf;
using namespace std;

class Game
{
private:
	/*
	*Window
	*/
	RenderWindow* Window;
	Event e;

	//Window ������ ���� �ʱ�ȭ
	void InitWindowPointer();

	//Window ���� ����
	void InitWindow();

	//���� ���� �� Window ����
	void DeleteWindow();

	/*
	* Player
	*/

	CircleShape Player;

	void InitPlayer();


public:
	//������
	Game();

	//�Ҹ���
	~Game();

	//Enemy
	RectangleShape RectEnemy;
	vector<RectangleShape> RectEnemies;

	//Spawn Value
	float EnemySpawnTime;
	float EnemySpawnTimeMax;
	int EnemyMaxNumber;

	//Init RectEnemy
	void InitRectEnemy();
	
	/*
	*Enemy
	*/
	//Set Spawn Value
	void SetSpawnValue();

	//Spawn Enemy
	void SpawnEnemy();

	void UpdateEnemy();
	

	/*
	*Player
	*/
	void UpdatePlayer();

	/*
	*Collision
	*/
	void UpdateCollision();

	void GameOver();

	/*
	*GameLoop
	*/

	//�� const : ��ȯ���� ������� ����
	//�� const : �Ű�����, �Լ� ���� ���� ������� ����

	const bool Running() const;
	void EventHandler();
	void Update();
	void Render();

};

