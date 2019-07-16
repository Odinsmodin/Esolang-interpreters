#include <iostream>
#include <deque>
#include <cstdlib>
using namespace std;
int main(){
	unsigned char data[10000];
	deque<char> Deque;
	int i = 0; 
	int h = 10000;
	do {
		cin >> data;
		switch(data[i]){
			case '!': Deque.push_front(data[i + 1]);i+=2;
			case ':': Deque.push_back(data[i + 1]);i+=2;
			case '?': Deque.pop_front();
			case ';': Deque.pop_back();
			case '^': cout << data[i + 3];cout << data[i + 2];cout << data[i + 1];i+=4;
			case 'u': if(data[i + 1]=='H'&&data[i + 2]=='W'){cout << "Hello, world!";i += 3;}else{cout << data[i + 1];i += 2;}
			case '\n': i += 1;
			case '~': cout << Deque[i];
			default: cout << data[i];i++;
		}
	}while(i < 10000 && data[i] != NULL);
}
