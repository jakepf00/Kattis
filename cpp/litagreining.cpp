#include<bits/stdc++.h>
using namespace std;

int main() {
	int r, g, b;
	cin >> r >> g >> b;
	if (r > g && r > b) cout << "raudur" << endl;
	else if (g > r && g > b) cout << "graenn" << endl;
	else if (b > r && b > g) cout << "blar" << endl;
	else if (r == g && b < g) cout << "gulur" << endl;
	else if (r == b && g < b) cout << "fjolubleikur" << endl;
	else if (g == b && r < b) cout << "blagraenn" << endl;
	else if (r == 0 && g == 0 && b == 0) cout << "svartur" << endl;
	else if (r == 255 && g == 255 && b == 255) cout << "hvitur" << endl;
	else if (r == g && g == b) cout << "grar" << endl;
	else cout << "othekkt" << endl;
}
