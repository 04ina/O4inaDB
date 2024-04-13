/*-------------------------------------------------------------------------
 * auxprocess.h
 *	  functions related to auxiliary processes.
 *
 * IDENTIFICATION
 *	  src/include/master/auxprocess.c
 *-------------------------------------------------------------------------
 */

#ifndef AUXPROCESS_H
#define AUXPROCESS_H

/*
 * Types of auxiliary processes
 */
typedef enum AuxProcType {
	BgWriterProcess,
	CheckPointerProcess,
	SysLoggerProcess
} AuxProcType;

#define StartBgWriter		StartAuxProcess(BgWriterProcess)	
#define StartCheckPointer	StartAuxProcess(CheckPointerProcess) 
#define StartSysLogger 		StartAuxProcess(BgWriterProcess)








#endif  /* AUXPROCESS_H */