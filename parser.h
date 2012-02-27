/************************************************************************##
** 							libparser						 			 ##
**																		 ##
**			Jorge Ib��ez				Diciembre 2006					 ##
**																		 ##
**																		 ##
**																		 ##
**  Libreria que contiene funciones para parsear la linea de comando y	 ##
**  responder apropiadamente al usuario. Muy b�sico, sirve de referencia ##
**																		 ##
**************************************************************************/


//////////////////////////////////////////////////////////////////
//		PROTOTIPOS DE LAS FUNCIONES								//
//////////////////////////////////////////////////////////////////


void ParseCmdLine(int argc, char** argv);

static void Version();

static void Usage(int rtn);

static void Fatal(const char* pszFmt, ...);

void  ParseConfFile(const char* filename);

CONFIG* read_config(const char* rptr);

