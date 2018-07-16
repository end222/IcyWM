union Arg
{
	const char** com;
	const int i;
	const void *v;
};

struct Key
{
	unsigned int mod;
	KeySym keysym;
	void (*func)(const Arg *);
	const Arg arg;
};

struct Button
{
	unsigned int mask, button;
	void (*func)(const Arg *);
	const Arg arg;
};

struct AppRule
{
	const char *clase;
	const int desktop;
	const Bool follow, floating;
};
