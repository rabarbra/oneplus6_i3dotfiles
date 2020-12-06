/*
  distancethreshold: Minimum cutoff for a gestures to take effect
  degreesleniency: Offset degrees within which gesture is recognized (max=45)
  timeoutms: Maximum duration for a gesture to take place in miliseconds
  orientation: Number of 90 degree turns to shift gestures by
  verbose: 1=enabled, 0=disabled; helpful for debugging
  device: Path to the /dev/ filesystem device events should be read from
  gestures: Array of gestures; binds num of fingers / gesturetypes to commands
            Supported gestures: SwipeLR, SwipeRL, SwipeDU, SwipeUD,
                                SwipeDLUR, SwipeURDL, SwipeDRUL, SwipeULDR
*/

unsigned int distancethreshold = 10;
unsigned int degreesleniency = 35;
unsigned int timeoutms = 800;
unsigned int orientation = 0;
unsigned int verbose = 0;
double edgesizeleft = 50.0;
double edgesizetop = 50.0;
double edgesizeright = 50.0;
double edgesizebottom = 50.0;
char *device = "/dev/input/event0";

Gesture gestures[] = {
	/* nfingers  gesturetype  command */
	{ 2,         SwipeDLUR,   EdgeAny, DistanceAny, "chromium-browser" },
	{ 2,         SwipeURDL,   EdgeAny, DistanceAny, "dolphin" },
	{ 2,         SwipeDRUL,   EdgeAny, DistanceAny, "polybar-msg cmd toggle" },
	{ 2,         SwipeULDR,   EdgeAny, DistanceAny, "sxmo_brightness.sh down" },
	{ 2,         SwipeLR,     EdgeAny, DistanceAny, "i3 workspace prev" },
	{ 2,         SwipeRL,     EdgeAny, DistanceAny, "i3 workspace next" },
	{ 2,         SwipeDU,     EdgeAny, DistanceAny, "i3 kill" },
	{ 2,         SwipeUD,     EdgeAny, DistanceAny, "onboard" },
};
