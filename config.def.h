/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack NF:style:medium:size=10",
    "Noto Color Emoji:size=10",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#C1C8D6", "#242C3E" },
	[SchemeSel] = { "#C1C8D6", "#0080C9" },
	[SchemeSelHighlight] = { "#7896C8", "#242C3E" },
	[SchemeNormHighlight] = { "#7896C8", "#242C3E" },
	[SchemeOut] = { "#242C3E", "#6478A8" },
	[SchemeOutHighlight] = { "#7896C8", "#6478A8" },
	[SchemeHp] = { "#bbbbbb", "#242C3E" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int maxhist    = 64;
static int histnodup           = 1;	/* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 1;
