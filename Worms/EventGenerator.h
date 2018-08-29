#define NO_EVENT 0

class EventGenerator
{
	public:
		EventGenerator();
		bool hayEvento(void);
		eventType getEvento();
		bool isQuit(void);

	private:
		eventType ev;
		eventType AllegroToEvent(ALLEGRO_EVENT *);
};
