#ifndef	_DEBUG_H
#define	_DEBUG_H

#include	<stdint.h>
#include	"config.h"

#ifdef	DEBUG
	#define		DEBUG_PID	1
	#define		DEBUG_DDA	2
	#define		DEBUG_POSITION	4
	#define		DEBUG_HOMING	8
	#define		DEBUG_TRAJECT	16
	#define		DEBUG_GCODE_PROCESS	32
	#define		DEBUG_TEMPERATURE	64
	#define		DEBUG_ANALOG	128
#else
	// by setting these to zero, the compiler should optimise the relevant code out
	#define		DEBUG_PID	0
	#define		DEBUG_DDA	0
	#define		DEBUG_POSITION	0
	#define		DEBUG_HOMING	0
	#define		DEBUG_TRAJECT	0
	#define		DEBUG_GCODE_PROCESS	0
	#define		DEBUG_TEMPERATURE	0
	#define		DEBUG_ANALOG	0
#endif

#define			DEBUG_ECHO	1024

extern volatile uint8_t	debug_flags;

#endif	/* _DEBUG_H */