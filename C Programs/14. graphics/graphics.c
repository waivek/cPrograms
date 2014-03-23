
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>

/*
To build this program you would need to add a library to your linker in your compiler.
To do this, go to Settings->Compiler and debugger->Linker Settings
Here click on add
find the file libgdi32.a
You would find this file in the mingw\lib folder somewhere on your machine..
mingw folder is most likely in root

Showing graphics was the hard part.. just get the basic stuff clear
dont mess much with the code as it is easy to get stuck in this.

Think of doing stuff using functions, so that you dont have to do much editing.

sending signal on sound card is easy. lookup mmsystem.h or similar file.. check on google

After doing this, build your program.. and have fun :o)

Swami
*/
  COLORREF yellow = RGB(255,255,0);
  COLORREF red    = RGB(255,0,0);
  COLORREF green  = RGB(0,200,0);
  COLORREF blue   = RGB(0,0,255);

void line(int x1, int y1, int x2, int y2, COLORREF color);
void drawTriangle(int x1,int y1, int x2,int y2,int x3,int y3,COLORREF color);

HWND hWnd;
HDC hDC;

openGraphics() {
  // get the window's handle, make sure the names match
  SetConsoleTitle("ConGraphics");  // if you run your window title would be this name
  hWnd = FindWindow(NULL, "ConGraphics");  // this title is looked up here
  // get the handle to Device Context
  hDC = GetDC(hWnd);
}

closeGraphics() {
  // free up the resources
  ReleaseDC(hWnd, hDC);
}

void drawTriangle(int x1,int y1, int x2,int y2,int x3,int y3,COLORREF color) {
  line(x1,y1,x2,y2,color);
  line(x1,y1,x3,y3,color);
  line(x2,y2,x3,y3,color);
}

void line(int x1, int y1, int x2, int y2, COLORREF color) {
  HPEN hPen;
  hPen=CreatePen( PS_SOLID,  1,   color );
  SelectObject( hDC, hPen);
  MoveToEx(hDC, x1, y1, (LPPOINT) NULL);
  LineTo(hDC, x2, y2);
  DeleteObject(hPen);
}
