#define MODKEY Mod4Mask
#define NWM_WITH_BORDERS 0
#define NWM_WITH_GAPS    0
#define NWM_WITH_PERTAG  1

#define TAGKEYS(KEY,TAG) \
	{ MODKEY,              KEY, view,      {.ui = 1u << (TAG)} }, \
	{ MODKEY|ControlMask,  KEY, toggleview,{.ui = 1u << (TAG)} }, \
	{ MODKEY|ShiftMask,    KEY, tag,       {.ui = 1u << (TAG)} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY, toggletag, {.ui = 1u << (TAG)} },

#if NWM_WITH_BORDERS
static const unsigned int borderpx      = 2;
static const char col_nborder[]         = "#0E2426";
static const char col_sborder[]         = "#59C6B5";
static const char col_uborder[]         = "#c47f50";
#endif

#if NWM_WITH_GAPS
static const unsigned int gappx         = 6;
#endif

static const unsigned int snap          = 0;
static const int          attachbottom  = 0;
static const int          focusonopen   = 1;
static const float        mfact         = 0.5f;
static const int          nmaster       = 1;

static const char *tags[] = {
	"1", "2", "3", "4", "5", "6", "7", "8", "9"
};

static const L layouts[] = {
	{ tile    }, /* tiling   */
	{ NULL    }, /* floating */
	{ monocle }, /* monocle  */
};

static const char *termcmd[]  = { "kitty", NULL };
static const char *dmenucmd[] = { "dmenu_run", NULL };

static const Rule rules[] = {
	/* class     instance  title  tags  isfloating */
	//{ "Gimp",    NULL,     NULL,  0,    1 },
	//{ "MPlayer", NULL,     NULL,  0,    1 },
	{ NULL, NULL, NULL, 0, 0, -1 }
};

static const K keys[] = {
	{ MODKEY,              XK_q,	 spawn,        {.v = termcmd} },
	{ MODKEY,              XK_d,      spawn,        {.v = dmenucmd} },
	{ MODKEY,              XK_c,      killclient,   {0} },
	{ MODKEY|ShiftMask,    XK_q,      quit,         {0} },
	{ MODKEY,              XK_j,      focusnext,    {.i = +1} },
	{ MODKEY,              XK_k,      focusnext,    {.i = -1} },
	{ MODKEY,              XK_i,      incnmaster,   {.i = +1} },
	{ MODKEY,              XK_o,      incnmaster,   {.i = -1} },
	{ MODKEY,              XK_h,      setmasterfact,{.f = -0.05} },
	{ MODKEY,              XK_l,      setmasterfact,{.f = +0.05} },
	{ MODKEY,              XK_space,  zoom,         {0} },
	{ MODKEY,              XK_Tab,    view,         {0} },
	{ MODKEY,              XK_t,      setlayout,    {.v = &layouts[0]} },
	{ MODKEY,              XK_f,      setlayout,    {.v = &layouts[1]} },
	{ MODKEY,              XK_m,      setlayout,    {.v = &layouts[2]} },
	{ MODKEY,              XK_v,      togglefullscreen, {0} },
	{ MODKEY|ShiftMask,    XK_space,  togglefloating,   {0} },
	{ MODKEY,              XK_0,      view,         {.ui = ~0u} },
	{ MODKEY|ShiftMask,    XK_0,      tag,          {.ui = ~0u} },
	{ MODKEY,			  XK_Print,  spawn,		{.v = (char*[]){"sh", "-c", "maim -s | xclip -selection clipboard -t image/png", NULL}}},
	TAGKEYS(XK_1,0)
	TAGKEYS(XK_2,1)
	TAGKEYS(XK_3,2)
	TAGKEYS(XK_4,3)
	TAGKEYS(XK_5,4)
	TAGKEYS(XK_6,5)
	TAGKEYS(XK_7,6)
	TAGKEYS(XK_8,7)
	TAGKEYS(XK_9,8)
};

static const B buttons[] = {
	{ ClkClientWin, MODKEY, Button1, movemouse,     {0} },
	{ ClkClientWin, MODKEY, Button2, togglefloating,{0} },
	{ ClkClientWin, MODKEY, Button3, resizemouse,   {0} },
};
