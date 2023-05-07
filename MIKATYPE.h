#pragma once

#include "resource.h"
#define MIKA_magenta RGB(128,32,128)
#define MIKA_green RGB(0,128,0)
#define MIKA_blue RGB(0,0,128)
#define MIKA_cyan RGB(0,128,128)
#define MIKA_orange RGB(128,32,0)
#define MIKA_red RGB(128,0,0)
#define MIKA_bk_color RGB(255,255,255)
#define MIKA_finger_color RGB(255,191,63)
#define MIKA_nail_color RGB(255,255,191)
#define MIKA_color_text_under_line RGB(0,0,255)
#define MIKA_key_black RGB(0,0,0)
#define MIKA_key_gray RGB(127,127,127)
#define MIKA_key_magenta RGB(255,0,255)
#define MIKA_key_blue RGB(0,0,255)
#define MIKA_color_position_err RGB(192,0,0)
#define MIKA_key_red RGB(255,0,0)
#define MIKA_color_romaji RGB(0, 0, 255)
#define MIKA_color_romaji_err RGB(255, 0, 0)
#define MIKA_color_romaji_under_line RGB(0, 0, 255)
#define MIKA_Procptimer_ID 1
#define MIKA_Procrtimer_ID 2
#define MIKA_Procatimer_ID 3
int inttablelength(int* table);
int wchartablelength(wchar_t a[]);
int stringtablelength(string a[]);
int wstringtablelength(wstring a[]);
void convdate(char r_date[], char rr_date[]);
int rseiseki(FILE* fp);
void procinit();
string tconv(long time);
string t0conv(long time, int flag);
long	ttconv(int ttime[3]);
int cfind(wchar_t a, wstring line);
void keyposit(int* x_pos, int* y_pos, int x, int y);
int charlength(wchar_t a);
void cslclr(HDC g);
void cslcolor(HDC g, COLORREF color);
void cslbkcolor(HDC g, COLORREF color);
void cslputscale(HDC g, int x, int y, string mes, double scale);
void cslputzscale(HDC g, int x1, int y1, wchar_t a, double scale);
void cslput(HDC g, int x, int y, string mes);
void cslputwscale(HDC g, int x, int y, wchar_t mes[], double scale);
void cslputu(HDC g, int x, int y, string mes, int yy, COLORREF color1);
void cslmencenter(HDC g, int x, string mes);
void cslrectb(HDC g, int x1, int y1, int x2, int y2, COLORREF color1, COLORREF color2, int b);
void cslrectt(HDC g, int x1, int y1, int x2, int y2, COLORREF color);
void cslrecttt(HDC g, int x1, int y1, int x2, int y2, COLORREF color, int b);
void cslellipse(HDC g, int x1, int y1, int x2, int y2, COLORREF color);
void cslkeyback(HDC g,int x_pos,int y_pos,COLORREF color);
int cslfonthight(double scale);
int cslfontwidth(double scale);
int cslfontsize(double scale);
int xcord(int x1);
int ycord(int y1);
int xxcord(int x1);
int yycord(int y1);
int homeposi(int x, int y);
void poofinger(HDC g, int x_finger, int y_finger, int width_finger, COLORREF color);
void pofinger(HDC g, int x_pos, int y_pos, int yubi_haba, int flag);
void pfinger(HDC g, int flag);
int fngposit(int finger);
void difposit(HDC g,wchar_t a,int flag);
void dispguidechar(HDC g,wchar_t key_char,int flag);
void dipline(HDC g,int x, wstring line,int flag);
int dikposit(HDC g,wchar_t a,int flag);
void diposit(HDC g,int flag);
void disperrorcount(HDC g, int flag, int i, int j);
void disperror(HDC g, int flag);
void disperror1(HDC g, int flag);
void disperror2(HDC g, int flag);
void dispseikai(HDC g, int flag);
void dispkeygideonoff(HDC g,int flag);
void disptitle(HDC g, string mes, string submes);
void dispkaisumes(HDC g, int flag, int i, int j);
void dispkaisu(HDC g, int flag);
void dispkaisu2(HDC g, int flag);
void dispabortmessage(HDC g, int flag, int i, int j);
void dispabortmes(HDC g, int flag);
void dispabortmes2(HDC g, int flag);
void dispsecond(HDC g,int flag);
void dispkeyguidonoffmes(HDC g,int flag);
void dispptrain(HDC g, string mestb);
void dispctable(HDC g);
void dispmaxspeedrecord(HDC g,int i1,int j1,int i2,int j2);
void disptrain(HDC g,string mest);
void dispatrain(HDC g,string mest);
void ppseiseki(HDC g, int i, int j, string menu_mes[], double r_speed[], string r_date[], long r_time[]);
void dispseiseki(HDC g);
void dispstart(HDC g);
void dispmen(HDC g);
void menexe(HDC g, string menu_mes[], int menu_cord[6][2], int menu_function[], int sel_flag[], string menut);
int mencom(int* menu_function_table, int* sel_flag, wchar_t nChar);
int exec_func(HWND hWnd,HDC g, wchar_t nChar);
long timeinterval(long time_start,long time_end);
int wwseiseki(FILE *fp);
int wseiseki();
int wwkiroku(FILE* fp);
int wkiroku();
int wwhayasa(FILE* fp, string mes, char s_date[], char s_time[], double speed, long time_i);
int whayasa(string mes, char s_date[], char s_time[], double speed, long time_i);
void savekiroku();
void procexit();
void preptrain(int func_no);
void keyguideoff(HDC g);
void keyguideon(HDC g);
void dispretrymessage(HDC g,int flag);
int funcbackmenu(int func_no);
void procpabort(HDC g);
void  procpnextchar(HDC g);
wchar_t convertupperlower(wchar_t a,wchar_t b);
void procptrain(HWND hWnd,HDC g,wchar_t nChar);
void disperrchar(HDC g, int flag);
void dispspeedrate(HDC g,int flag);
void dispspeedrate2(HDC g,int flag);
double ftypespeed(int count, long start_time, long end_time);
string mesdisptime(int u_flag,int flag,double type_speed_time);
void disptime(HDC g,int flag);
void dispromaji(HDC g,string a,int flag);
void prepflags(int flag);
void dispupmes(HDC g);
void proctrainexit(HDC g);
void proctrainexit2(HDC g);
void prockiroku(HDC g);
void procdispspeed(HDC g);
void procdispspeed2(HDC g);
double roundtime(double time);
void proctrain(HWND hWnd,HDC g, wchar_t nChar);
wchar_t uppertolower(wchar_t nChar);
void procatrain(HWND hWnd,HDC g,wchar_t nChar);
void getromaji(int w_count);
void inctable(wstring a, double speed);
void inatable(wstring,double speed);
void incctable(wstring a,double speed,int flag);
int kfound(wchar_t a);
void intwordtable(string a[], double speed);
void intawordtable(wstring a[], double speed);
void inttangotable(string a[], wstring aa[],double speed, int flag);
clock_t getmillisecond();
void keycord(int* x_pos, int* y_pos, wchar_t a);
int	randomchar(wstring char_table,int char_position);
int randomint(int i);
