/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const unsigned int alpha = 0xc0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Noto Color Emoji:pixelsize=16:antialias=true:autohint=true",
	"JetBrainsMono Nerd Font:size=10:style=Bold"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#eeeeee", "#1A1C24" },
	[SchemeSel] = { "#eeeeee", "#282a36" },
	[SchemeSelHighlight] = { "#ffc978", "#282a36" },
	[SchemeNormHighlight] = { "#ffc978", "#1A1C24" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
	[SchemeHp] = { "#bbbbbb", "#333333" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;