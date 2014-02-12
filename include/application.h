#ifndef APPLICATION_H_
#define APPLICATION_H_

#include <boost/thread.hpp>

class Application
{
	public:
		Application();
		~Application();
	private:
		boost::thread mainThread;
		bool isRunning;
		long startTime;
};
#endif // end APPLICATION_H_
