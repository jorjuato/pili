//////////////////////////////////////////////////////////////////
//  main.h
//
//
// Copyleft (L)		Septiembre 2008		Jorge Ibáñez
//
//////////////////////////////////////////////////////////////////


//Cabeceras estandar del SO
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <time.h>

//Cabeceras de la libreria SDL
#ifndef __INCLUDESDL
#include "SDL/SDL.h"
#define __INCLUDESDL
#endif

//Cabeceras con definiciones del API Wacom
#ifndef __INCLUDEWACOM
#include "wacom.h"
#define __INCLUDEWACOM
#endif

//Cabeceras específicas para configurar este experimento
#include "pili.h"
#include "pili_draw.h"

//Cabeceras genéricas para todos los experimentos
#include "display.h"
#include "auxfuncs.h"


//////////////////////////////////////////////////////////////////
//		PROTOTIPOS DE LAS FUNCIONES								//
//////////////////////////////////////////////////////////////////

void OnExit();

void OnInit();

static void ExperimentLoop(void);

static void ExperimentSetup(int argc, char **argv);

static int ExperimentFSA();

static void SetDelay(long int ns);

//static void ExperimentHandler(int);

static void ExperimentGraphics(void);

static void ExperimentEnd(void);

static void ExperimentEventMask();

void ExperimentSaveConfig();

void ExperimentSaveData(float x, float y, int press, long int time_inc);

//////////External defs

void  ParseConfFile(const char* filename);

void ParseCmdLine(int argc, char** argv);
