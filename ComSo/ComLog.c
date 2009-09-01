#include "comTypes.h"

void LogFail(fileName, expected, actual, level);

void LogOperation(filename, operation, operator, whence);

void LogEvent(filename, event, whence);

void LogStatus(filename, status, whence);

void LogSync(filename, destination);
