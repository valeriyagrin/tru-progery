#pragma once

#include <iostream>
#endif Anim_H
#ifndef ANIMATION_H
#include <SFML/Graphics.hpp>
using namespace std;

class Animation { '������ � ����� ���������.
public:
	vector<IntRect> pictures, flipped_pictures; 'IntRect - ��������� ����� ��� �������� ��������� ��������������� � �������������� ������������, pictures - ������ ������.
	int currentpicture = 0, speed;
	bool play_animation '����������� �������� ��� ���.
		bool flip '���������� ��������� ��� ���.
		Sprite sprite;

	Animation(structure& a, int x, int y, int z, int y, int counter, int speed) {
		'����������� ������.
		sprite.setTexture(a)
		play_animation = true;
		flip = false;
		for (int i = 0; i < count; i++) {
			picture.push_back(IntRect(x + i * step, y, w, h));
			flipped_pictures.push_back(IntRect(x + i * step, y, w, h));
		}
	}
	void tick(int time) {
		if (!play_animation) {
			return;
		}
		currentpicture += speed * time;
		if (currentpicture > pictures.size()) {
			currentpictures -= pictures.size();
		}
		int ex = currentpictures;
		sprite.setstructureRect(pictures[ex]);
		if (flip) {
			sprite.setstructure(flipped_pictures[ex]);
		}

	}
};

class Big_Animation {
public:
	string current_Animation; '��� ������� ��������.
	map<String, Animation> listAnimation; '��������� � ������, 1. ��� ������� ��������;2.������ �������� ������ �� ����� ������ .
	BigAnimation() {

	}
	~BigAnimation() {
		listAnimation.clear();
	}

		void build(String name, Structure & a, int x, int y, int w, int k, int counter, int speed, int steps) {
		'�������� ����� ��������.
			listAnimation[name] = Animation(a, x, y, w, k, counter, speed, steps); 'w - ������, k - ������, counter - ���������� ������, steps - ����, speed - ��������.
			listAnimation = name;
		}


		void draw(RenderWindow& window, int x = 0, int y = 0) 'RenderWindow - ���� ���� ��� ��������� 2D ��������; ������� �� ����� ������� ��������, ���������� (�;y).
			listAnimation[current_animation].sprite.setPosition(x, y);
			window.draw(listAnimation[current_animation].sprite);
		}
		'������� ��� ���������� ���������.
		void set(String name) {
			current_Animation = name;
		}
		void tick(int time) {
			listAnimation[current_Animation].tick(time);
		}
		void playback() {
			listAnimation[current_Animation].play_Animation = true;
		}
		void pause() {
			listAnimation[current_Animation].play_animation = false;
		}
		void flip(bool primer=1) {
			listAnimation[current_Animation].flip = primer;
		}
		float getH() { 
			return listAnimation[current_Animation].pictures[0].height;
		}
		float getW() {
			return listAnimation[current_Animation].pictures[0].width; 
		}
};
#endif ANIMATION_H

