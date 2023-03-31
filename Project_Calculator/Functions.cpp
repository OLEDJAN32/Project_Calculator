#include "Header_Functions.h"


void Menu_Functions() {
	
	setlocale(LC_ALL, "rus");
	int check; bool flag = true;
	do {
		cout << "Ââåäèòå 0, ÷òîáû ïåðåéòè â ãëàâíîå ìåíþ êàëüêóëÿòîðà" << endl;
		cout << "Âûáåðèòå äåéñòâèå íàä ôóíêöèåé" << endl;
		cout << "Ââåäèòå 1 äëÿ âû÷èñëåíèÿ îïðåäåëåííîãî èíòåãðàëà íà îòðåçêå" << endl;
		cout << "Ââåäèòå 2 äëÿ ïîñòðîåíèÿ ãðàôèêà ôóíêöèè " << endl;
		cout << "Ââåäèòå 3 äëÿ ïîèñêà êîðíÿ Y = 0 íà îòðåçêå" << endl;
		cout << "Ââåäèòå 4 äëÿ ïîèñêà ýêñòðåìóìîâ íà îòðåçêå" << endl;
		cout << "Ââîä: "; cin >> check;
		switch (check) {
		case 1:
			cout << endl;
		case 2:
			cout << endl;
		case 3:
			cout << endl;
		case 4:
			cout << endl;
		case 0:
			flag = false; break;
		}
	} while (flag == true);
	//return;
}
