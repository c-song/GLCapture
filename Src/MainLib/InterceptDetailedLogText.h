#pragma once
#include "GLIntercept.h"
#include <stdio.h>
#include <string>
#include "ErrorLog.h"
#include "FunctionData.h"
#include "ConfigData.h"
#include "interceptlog.h"

using namespace std;

//@
//@Summary
//This class privedes detailed text output for logging of OpenGL function
//Compared with "InterceptLogText", the output contains more details of OpenGL function, especially the argument values.
// The function members are analogous with  InterceptLotText class  
//
class InterceptDetailedLogText :public InterceptLog
{
public:
	InterceptDetailedLogText(const string& filename, FunctionTable* functionTable, const ConfigData& configData);
	~InterceptDetailedLogText(void);
	virtual bool Init();
	virtual void LogFunctionPre(const FunctionData *functionData, uint index, const FunctionArgs &args);
	virtual void LogFunctionPost(const FunctionData *funcitonData, uint index,const FunctionRetValue &retValue);
	virtual void LogFunctionError(uint errorCode);
	virtual void LogFuncitonComplete();
	virtual void AddLogString(const char* addString);
protected:
	string logFileName;
	FILE *logFile;
	bool logFlush;

	bool shaderRenderCallLog;
	bool imageRenderCallLog;

	bool functionTimerEnabled;
	uint functionTimerCutOff;


};
