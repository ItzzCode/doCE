#include <tice.h>
#include <graphx.h>
#include <stdio.h>
#include <stdarg.h>

void pause(void){
    while(!os_GetCSC());
}

//painnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn
void menu(char title[26], char opt1[26], char opt2[26], char opt3[26], char opt4[26], char opt5[26]){
	gfx_Begin();
	gfx_SetTextScale(2,2);
	os_ClrLCDFull();
	bool undecided = true;
	int selection = 0;
	while(undecided){
		gfx_PrintStringXY(title,0,0);
		gfx_PrintStringXY(opt1,1,0);
		undecided=false;
		pause();
		gfx_End();
    }
    /*
    while `undecided`
        var int selection
        output title
        output options with selection
        if arrow pressed
            change selection
        if enter pressed
            go to function determined by args
    */
}

int main(void){
	os_ClrHome();
	
	/*greet user*/
	os_SetCursorPos(0,6);
	os_PutStrFull("Welcome to doCE!");
	/*by time*/
	if (boot_IsAfterNoon()){
		os_SetCursorPos(1,6);
		os_PutStrFull("Good afternoon!");
	} else {
		os_SetCursorPos(1,7);
		os_PutStrFull("Good morning!");
	}
	pause();
	menu("title","1","","","","");
}