#ifndef ABS

#define ABS(x) {		\
			if ((x) < 0) \
				((x) * (-1)); \
			else		\
				((x) * 1); \
		}
#endif

