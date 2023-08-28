#ifndef __CONFIG__
#define __CONFIG__

	// Deifne Module
	#define _WeatherStat_
	#define B108AA
	#define LE910S1_EAG

	// Define UI Configurations
//	#define DEBUG
	#define LIGHTS

	// Serial Communications Definations
	#define Serial_Terminal 		Serial
	#define Serial_GSM 				Serial3

	// Version Parameters
	#define	__Hardware__			"03.00.00"
	#define	__Firmware__			"03.01.00"

	// Device Parameters
	#define	__Company__				"STF"
	#define	__Device__				"WeatherStat"

	// Operator Parameters
	#define _PDP_APN_				"mgbs"

	// BackEnd Parameters
	// stf-service.bilpp.com/api/v1/source/weather
	#define	_BackEnd_Server_		"165.227.154.147"
	#define	_BackEnd_EndPoint_		"/"
//	#define	_BackEnd_Server_		"stf-service.bilpp.com"
//	#define	_BackEnd_EndPoint_		"/api/v1/source/weather/"

	// Full Pack Parameters
	#define _Full_Pack_Hour_		14

#endif