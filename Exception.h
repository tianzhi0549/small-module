#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string>
using namespace std;
class CException
{
	string errMsg;
	int errCode;
public:
	CException(int errCode,string errMsg)
	{
		this->errMsg=errMsg;
		this->errCode=errCode;
	}
	CException(int errCode)
	{
		this->errCode=errCode;
	}
	const string& getErrMsg()
	{
		return errMsg;
	}
	int getErrCode()
	{
		return errCode;
	}
};
#endif
