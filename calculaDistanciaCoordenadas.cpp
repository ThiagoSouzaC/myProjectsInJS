#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, x2, y2;
	float calculaDist;
	
	cout <<"Entre com coordenada x1: " << endl;
	cin >> x;
	cout <<"Entre com coordenada y1: " << endl;
	cin >> y;
	cout <<"Entre com coordenada x2: " << endl;
	cin >> x2;
	cout <<"Entre com coordenada y2: " << endl;
	cin >> y2;
	
	calculaDist = ((x-x2)*2 + (y-y2)*2);
	float raiz = sqrt(calculaDist);
	
	cout << "A distância entre as coordenadas é: " << raiz;

	return 1;
}
