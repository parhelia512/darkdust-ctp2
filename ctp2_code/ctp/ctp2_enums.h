//
// C++ Interface: ctp2_enums
//
// Description: 
//
//
// Author:  <ctp2source@apolyton.net>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifdef HAVE_PRAGMA_ONCE
#pragma once
#endif

#ifndef __ctp__ctp2_enums_h__
#define __ctp__ctp2_enums_h__ 1

enum CONVERTED_BY {
	CONVERTED_BY_CLERIC,
	CONVERTED_BY_TELEVANGELIST,
	CONVERTED_BY_NOTHING
};

#include "GameOver.h"

enum HAPPY_REASON {
	HAPPY_REASON_SMOKING_CRACK = -1,

	
	HAPPY_REASON_CITY_SIZE,
	HAPPY_REASON_DISTANCE_FROM_CAPITOL,
	HAPPY_REASON_ENEMY_ACTION,
	HAPPY_REASON_POLLUTION,
	HAPPY_REASON_STARVATION,
	HAPPY_REASON_PEACE_MOVEMENT,
	HAPPY_REASON_WORKDAY,
	HAPPY_REASON_WAGES,
	HAPPY_REASON_RATIONS,
	HAPPY_REASON_MARTIAL_LAW,
	HAPPY_REASON_ENTERTAINERS,
	HAPPY_REASON_BUILDINGS,
	HAPPY_REASON_WONDERS,
	HAPPY_REASON_CRIME,
	HAPPY_REASON_CONQUEST_DISTRESS,
	HAPPY_REASON_NUM_CITIES,
	HAPPY_REASON_FEATS,
	
	
	

	
	HAPPY_REASON_HAPPINESS_ATTACK,
	HAPPY_REASON_SLAVES_TAKEN,
	HAPPY_REASON_INDULGENCES,
	HAPPY_REASON_BIO_INFECTION,
	HAPPY_REASON_REFORMATION,
	HAPPY_REASON_POP_TYPE_REMOVED,
	HAPPY_REASON_POP_TYPE_ADDED,
	HAPPY_REASON_SOOTHSAY,
	HAPPY_REASON_EMANCIPATION,
	HAPPY_REASON_ATTACKED_CONVERTER,

	HAPPY_REASON_POST_REVOULTION_BLISS,  
	HAPPY_REASON_WONDER_TURNS_REMAINING,
	HAPPY_REASON_ASSASSINATION,
	HAPPY_REASON_MAX
};


enum UNIT_ORDER_TYPE {
	UNIT_ORDER_NONE,
	UNIT_ORDER_MOVE,
	UNIT_ORDER_PATROL,
	UNIT_ORDER_CIRCULAR_PATROL,
	UNIT_ORDER_ENTRENCH,
	UNIT_ORDER_SLEEP,
	UNIT_ORDER_DETRENCH,
	UNIT_ORDER_UNLOAD,
	UNIT_ORDER_MOVE_TO,
	UNIT_ORDER_TELEPORT_TO,

	
	UNIT_ORDER_EXPEL_TO,
	UNIT_ORDER_GROUP,
	UNIT_ORDER_UNGROUP,
	UNIT_ORDER_INVESTIGATE_CITY,
	UNIT_ORDER_NULLIFY_WALLS,
	UNIT_ORDER_STEAL_TECHNOLOGY,
	UNIT_ORDER_INCITE_REVOLUTION,
	UNIT_ORDER_ASSASSINATE,
	UNIT_ORDER_INVESTIGATE_READINESS,
	UNIT_ORDER_BOMBARD,

	
	UNIT_ORDER_SUE,
	UNIT_ORDER_FRANCHISE,
	UNIT_ORDER_SUE_FRANCHISE,
	UNIT_ORDER_EXPEL,
	UNIT_ORDER_ESTABLISH_EMBASSY,
	UNIT_ORDER_THROW_PARTY,
	UNIT_ORDER_CAUSE_UNHAPPINESS,
	UNIT_ORDER_PLANT_NUKE,
	UNIT_ORDER_SLAVE_RAID,
	UNIT_ORDER_ENSLAVE_SETTLER,

	
	UNIT_ORDER_UNDERGROUND_RAILWAY,
	UNIT_ORDER_INCITE_UPRISING,
	UNIT_ORDER_BIO_INFECT,
	UNIT_ORDER_NANO_INFECT,
	UNIT_ORDER_CONVERT,
	UNIT_ORDER_REFORM,
	UNIT_ORDER_INDULGENCE,
	UNIT_ORDER_SOOTHSAY,
	UNIT_ORDER_CREATE_PARK,
	UNIT_ORDER_PILLAGE,

	
	UNIT_ORDER_INJOIN,
	UNIT_ORDER_INTERCEPT_TRADE,
	UNIT_ORDER_PARADROP_MOVE,
	UNIT_ORDER_SET_UNLOAD_MOVEMENT_POINTS,
	UNIT_ORDER_GROUP_UNIT,
	UNIT_ORDER_DISBAND,
	UNIT_ORDER_FINISH_ATTACK,
	UNIT_ORDER_UNLOAD_ONE_UNIT,
	UNIT_ORDER_BOARD_TRANSPORT,
	UNIT_ORDER_WAKE_UP,

	
	UNIT_ORDER_PILLAGE_UNCONDITIONALLY,
	UNIT_ORDER_MOVE_THEN_UNLOAD,
	UNIT_ORDER_ADVERTISE,
    UNIT_ORDER_INFORM_AI_CAPTURE_CITY, 
	UNIT_ORDER_UNLOAD_SELECTED_STACK,
	UNIT_ORDER_ADD_EVENT,
	UNIT_ORDER_SETTLE, 
	UNIT_ORDER_LAUNCH,
	UNIT_ORDER_TARGET,
	UNIT_ORDER_CLEAR_TARGET,

	
	UNIT_ORDER_PLAGUE,
	UNIT_ORDER_VICTORY_MOVE,

	UNIT_ORDER_MAX
};

enum ORDER_RESULT {
	ORDER_RESULT_ILLEGAL,
	ORDER_RESULT_FAILED,
	ORDER_RESULT_SUCCEEDED,
	ORDER_RESULT_INCOMPLETE,
	ORDER_RESULT_SUCCEEDED_INCOMPLETE,
};


#endif