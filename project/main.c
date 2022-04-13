#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "draw.h"
#include "main.h"
#include "stateMachines.h"
#include "buzzer.h"
#include "switches.h"

#define LED_GREEN BIT6             // P1.6
#define LED_RED BIT0

short redrawScreen3 = 0;          /* needed for special actions */
char substateLed2 = 0;
char substateLed = 0;             /* this is the substate for the led */
short redrawScreen = 0;           /* true if anything needs to be redrawn */
short redrawScreen2 = 1;          /* true for the typewriter section */
u_int fontFgColor = COLOR_RED;    /* these are the 2 font colors */
u_int fontFgColor2 = COLOR_WHITE;
int secCount = 0;                 /* keeps track of time */
char seconds = 0;                 /* keeps track of number of times an interval passed */
char state_changed = 0;           /* true if a state has changed with the led */

