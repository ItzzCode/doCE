#include <tice.h>
#include <stdio.h>

int main(void){
	os_ClrHome();
	
	os_SetCursorPos(0,6);
	os_PutStrFull("Welcome to doCE!");
	if (boot_IsAfterNoon()){
		os_SetCursorPos(1,6);
		os_PutStrFull("Good afternoon!");
	} else {
		os_SetCursorPos(1,7);
		os_PutStrFull("Good morning!");
	}
	while(!os_GetCSC());
}