
//Taken and adapted code from https://github.com/KonradIT/goprowifihack/blob/master/HERO5/HERO5-Commands.md
////////////////////PT//////////
void PT_on() {
http.begin("http://10.5.5.9/gp/gpControl/setting/10/1");
while (http.GET() != 200) yield();
http.end();
}
void PT_off() {
http.begin("http://10.5.5.9/gp/gpControl/setting/10/0");
while (http.GET() != 200) yield();
http.end();
}
void autowb() {
http.begin("http://10.5.5.9/gp/gpControl/setting/11/0");
while (http.GET() != 200) yield();
http.end();
}
void wb3000() {
http.begin("http://10.5.5.9/gp/gpControl/setting/11/1");
while (http.GET() != 200) yield();
http.end();
}
void wb4000() {
http.begin("http://10.5.5.9/gp/gpControl/setting/11/5");
while (http.GET() != 200) yield();
http.end();
}
void wb4800() {
http.begin("http://10.5.5.9/gp/gpControl/setting/11/6");
while (http.GET() != 200) yield();
http.end();
}
void wb5500() {
http.begin("http://10.5.5.9/gp/gpControl/setting/11/2");
while (http.GET() != 200) yield();
http.end();
}
void wb6000() {
http.begin("http://10.5.5.9/gp/gpControl/setting/11/7");
while (http.GET() != 200) yield();
http.end();
}
void wb6500() {
http.begin("http://10.5.5.9/gp/gpControl/setting/11/3");
while (http.GET() != 200) yield();
http.end();
}
void nativewb() {
http.begin("http://10.5.5.9/gp/gpControl/setting/11/4");
while (http.GET() != 200) yield();
http.end();
}

void color_gp() {
http.begin("http://10.5.5.9/gp/gpControl/setting/12/0");
while (http.GET() != 200) yield();
http.end();
}
void color_flat() {
http.begin("http://10.5.5.9/gp/gpControl/setting/12/1");
while (http.GET() != 200) yield();
http.end();
}
////////////////////////////

void iso6400() {
http.begin("http://10.5.5.9/gp/gpControl/setting/13/0");
while (http.GET() != 200) yield();
http.end();
}
void iso3200() {
http.begin("http://10.5.5.9/gp/gpControl/setting/13/3");
while (http.GET() != 200) yield();
http.end();
}
void iso1600() {
http.begin("http://10.5.5.9/gp/gpControl/setting/13/1");
while (http.GET() != 200) yield();
http.end();
}
void iso800() {
http.begin("http://10.5.5.9/gp/gpControl/setting/13/4");
while (http.GET() != 200) yield();
http.end();
}
void iso400() {
http.begin("http://10.5.5.9/gp/gpControl/setting/13/2");
while (http.GET() != 200) yield();
http.end();
}
void iso200() {
http.begin("http://10.5.5.9/gp/gpControl/setting/13/7");
while (http.GET() != 200) yield();
http.end();
}
void iso100() {
http.begin("http://10.5.5.9/gp/gpControl/setting/13/8");
while (http.GET() != 200) yield();
http.end();
}

/////////////////////
void iso_max() {
http.begin("http://10.5.5.9/gp/gpControl/setting/74/0");
while (http.GET() != 200) yield();
http.end();
}
void iso_lock() {
http.begin("http://10.5.5.9/gp/gpControl/setting/74/1");
while (http.GET() != 200) yield();
http.end();
}

/////////////////////
void sharpnesshigh() {
http.begin("http://10.5.5.9/gp/gpControl/setting/14/0");
while (http.GET() != 200) yield();
http.end();
}
void sharpnessmedium() {
http.begin("http://10.5.5.9/gp/gpControl/setting/14/2");
while (http.GET() != 200) yield();
http.end();
}
void sharpnesslow() {
http.begin("http://10.5.5.9/gp/gpControl/setting/14/1");
while (http.GET() != 200) yield();
http.end();
}
////////////////////////

void EVP2() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/0");
while (http.GET() != 200) yield();
http.end();
}
void EVP15() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/1");
while (http.GET() != 200) yield();
http.end();
}
void EVP1() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/2");
while (http.GET() != 200) yield();
http.end();
}
void EVP05() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/3");
while (http.GET() != 200) yield();
http.end();
}
void EVZero() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/4");
while (http.GET() != 200) yield();
http.end();
}
void EVN05() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/5");
while (http.GET() != 200) yield();
http.end();
}
void EVN1() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/6");
while (http.GET() != 200) yield();
http.end();
}
void EVN15() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/7");
while (http.GET() != 200) yield();
http.end();
}
void EVN2() {
http.begin("http://10.5.5.9/gp/gpControl/setting/15/8");
while (http.GET() != 200) yield();
http.end();
}

//////////////////////////////

void exposure_auto() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/0");
while (http.GET() != 200) yield();
http.end();
}

//////////////////////////


void exp24() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/3");
while (http.GET() != 200) yield();
http.end();
}
void exp48() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/6");
while (http.GET() != 200) yield();
http.end();
}
void exp96() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/11");
while (http.GET() != 200) yield();
http.end();
}
void exp30() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/5");
while (http.GET() != 200) yield();
http.end();
}
void exp60() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/8");
while (http.GET() != 200) yield();
http.end();
}
void exp120() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/13");
while (http.GET() != 200) yield();
http.end();
}
void exp192() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/16");
while (http.GET() != 200) yield();
http.end();
}
void exp240() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/18");
while (http.GET() != 200) yield();
http.end();
}
void exp90() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/10");
while (http.GET() != 200) yield();
http.end();
}
void exp180() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/15");
while (http.GET() != 200) yield();
http.end();
}
void exp360() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/20");
while (http.GET() != 200) yield();
http.end();
}
void exp480() {
http.begin("http://10.5.5.9/gp/gpControl/setting/73/22");
while (http.GET() != 200) yield();
http.end();
}
