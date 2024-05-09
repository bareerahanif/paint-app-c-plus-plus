#ifndef PAINT_H
#define PAINT_H
#include"collshape.h"

class paint
{
	public:
		paint(int height, int width, cv::Scalar color = (0, 0, 0), int thickness = 1);

		cv::Scalar getsc(); //shaoe colour
		void setsc(cv::Scalar color);

		cv::Scalar getshth();
		void setshth(int Thickness);

		void run();
		void handleMouseEvent(int event, int x, int y, int flags, void* param);
	private:
		cv::Mat can{}; //canvas
		int canlambai{}; //height of canvas
		int canchorai{}; //width of canvas
		char chaabi; //key press
		int neela{}, hara{}, laal{}; //rgb values
		cv::Scalar shcolor{ 0,0,0 }; //shape colour
		int shth{}; //shape thickness

		std::vector<circle> cir{};
		std::vector<rectangle> rec{};
		std::vector<line> lines{};
		std::vector<aline> arrLine{};
		std::vector<fline> fLine{};

		static void handleMouseEventWrapper(int event, int x, int y, int flags, void* param);
	};


#endif




