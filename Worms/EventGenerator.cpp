#include "EventGenerator.h"

#include <stdio.h>
#include <allegro5/allegro.h>


EventGenerator::EventGenerator()
{
	
}

bool EventGenerator::hayEvento(void)
{
	ev = NO_EVENT;
	if (al_get_next_event(,ret_event))
	{
		ev = AllegroToEvent(ret_event);

	}
	return (ev != NO_EVENT);
}

