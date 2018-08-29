int main(void)
{
	//inits
	Worms * Ws[2];
	Ws[0] = &w1();
	Ws[1] = &w2();
	while (!evg.isQuit())
	{
		if (evg.hayEvento())
		{
			dispatch(evg.getEvento(), );
		}
	}

	//destroys
}