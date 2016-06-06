#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

HINSTANCE _hInstance;
int _nCmdShow;
MSG msg;
HWND Main_Wnd_Hwnd;
HWND _EditSursa, _EditDestinatie, _EditCost, _Sursa, _Destiantia;
HWND _ListaNoduri, _Instructiuni;
bool check_ListaNoduri = false, check_Instructiuni = false;

HDC         hDC;
PAINTSTRUCT Ps;
HBRUSH      NewBrush;

struct  Coordonate
{
	int x;
	int y;
};
struct Muchie
{
	int sursa;
	int destinatie;
	int cost;
};