#ifndef FREQUENCY_TIMER_H
#define FREQUENCY_TIMER_H

#include "HAL.h"

typedef struct {
	uint8_t 	timeoutCounter;
	uint32_t 	previousEdge;
	uint32_t 	lastInterval;
	uint32_t 	maxInterval;
	bool			pulseStarted;
} FrequencyTimer_t;

int FrequencyTimer_Enable(TimerBlock_t timer, const PinDef_t* pin, uint32_t maxInterval, uint8_t priority, FrequencyTimer_t* freqTimer);
float FrequencyTimer_GetFrequency(FrequencyTimer_t* freqTimer);

#endif
