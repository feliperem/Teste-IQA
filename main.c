#include "gtkQuery/gtkQuery.h"

void calculaIqa() { 
	
	printf("Alô Brasil\n");

} 

int main (int argc, char *argv[]) {

 gtkQueryStart(argc, argv, "window_main.xml");
 
 window("window_main").show();

 button("calcular").send();
 
 gtk_main();
}