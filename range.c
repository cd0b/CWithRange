long range_func(int a, int b) {

	static long begin;
	static int ctl = 0;

	switch(ctl) {
		case 0:
			ctl = 1;
			begin = a;
			while(begin <= b) {
				return begin;
				case 1: begin++;;
			}
	}
	ctl = 0;
	return 0;
}
