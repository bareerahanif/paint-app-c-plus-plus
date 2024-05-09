#include "paint.h"
#include <iostream>

bool drawing(true);

paint::paint(int height, int width, cv::Scalar color, int thickness) :
	canlambai{ height }, canchorai{ width }, shcolor{ color }, shth{ thickness }
{
	cv::Mat canvas(canlambai, canchorai, CV_8UC3, cv::Scalar(255, 255, 255));
	can = canvas;
	cv::namedWindow("My Paint", cv::WINDOW_NORMAL);
	cv::setMouseCallback("My Paint", paint::handleMouseEventWrapper, this);
}

cv::Scalar paint::getsc()
{
	return shcolor;
}

void paint::setsc(cv::Scalar color)
{
	shcolor = color;
}

cv::Scalar paint::getshth()
{
	return shth;
}

void paint::setshth(int Thickness)
{
	shth = Thickness;
}
void paint::handleMouseEventWrapper(int event, int x, int y, int flags, void* param)
{
	paint* app = static_cast<paint*>(param);
	app->handleMouseEvent(event, x, y, flags, param);
}
void paint::handleMouseEvent(int event, int x, int y, int flags, void* param)
{
	if (event == cv::EVENT_LBUTTONDOWN)
	{
		if (chaabi == '1')
		{
			lines.push_back(line(cv::Point(x, y), cv::Point(x, y)));
			lines.at(lines.size() - 1).seth(shth);
			lines.at(lines.size() - 1).sc(cv::Scalar(neela, hara, laal));
		}
		else if (chaabi == '2')
		{
			rec.push_back(rectangle(cv::Point(x, y), cv::Point(x, y)));
			rec.at(rec.size() - 1).seth(shth);
			rec.at(rec.size() - 1).setco(cv::Scalar(neela, hara, laal));
		}
		else if (chaabi == '3')
		{
			arrLine.push_back(aline(cv::Point(x, y), cv::Point(x, y)));
			arrLine.at(arrLine.size() - 1).setThickness(shth);
			arrLine.at(arrLine.size() - 1).setrng(cv::Scalar(neela, hara, laal));
		}
		else if (chaabi == '4')
		{
			fLine.push_back(fline(cv::Point(x, y), cv::Point(x, y)));
			fLine.at(fLine.size() - 1).setthicc(shth);
			fLine.at(fLine.size() - 1).sc(cv::Scalar(neela, hara, laal));
		}
		else if (chaabi == '5')
		{
			cir.push_back(circle(cv::Point(x, y), 0));
			cir.at(cir.size() - 1).setThickness(shth);
			cir.at(cir.size() - 1).setrang(cv::Scalar(neela, hara, laal));
		}
		drawing = true;

	}
	else if (event == cv::EVENT_RBUTTONDOWN) {}

	else if (event == cv::EVENT_MOUSEMOVE && (flags & cv::EVENT_FLAG_LBUTTON))
	{
		if (chaabi == '1')
			lines.back().se(cv::Point(x, y));
		else if (chaabi == '2')
			rec.back().seten(cv::Point(x, y));
		else if (chaabi == '3')
			arrLine.back().setkhatam(cv::Point(x, y));
		else if (chaabi == '4')
			fLine.back().se(cv::Point(x, y));
		else if (chaabi == '5')
			cir.back().setRadiusishalfofdiameter(sqrt(pow(x - cir.back().getdarmayaan().x, 2) + pow(y - cir.back().getdarmayaan().y, 2)));
		

	}
	else if (event == cv::EVENT_LBUTTONUP)
	{
		drawing = false;
	}
}

void paint::run()
{
	chaabi = '1';
	char current = chaabi;
	while (1)
	{
		cv::Mat tempimg = can.clone();
		if (drawing)
		{
			if (chaabi == '1')
			{
				current = '1';
				for (int i = 0; i < lines.size(); i++)
					cv::line(tempimg, lines.at(i).gets(), lines.at(i).gete(), lines.at(i).gc(), lines.at(i).geth());
			}
			else if (chaabi == '2')
			{
				current = '2';
				for (int i = 0; i < rec.size(); i++)
					cv::rectangle(tempimg, rec.at(i).gsi(), rec.at(i).gei(), rec.at(i).getco(), rec.at(i).geth());
			}
			else if (chaabi == '3')
			{
				current = '3';
				for (int i = 0; i < arrLine.size(); i++)
					cv::arrowedLine(tempimg, arrLine.at(i).getshuru(), arrLine.at(i).getkahtam(), arrLine.at(i).getrng(), arrLine.at(i).getThickness());
			}
			else if (chaabi == '4')
			{
				current = '4';
				for (int i = 0; i < fLine.size(); i++)
				{
					for (int j = 1; j < fLine.at(i).freeline.size(); j++)
						cv::line(tempimg, fLine.at(i).freeline.at(j - 1), fLine.at(i).freeline.at(j), fLine.at(i).gc(), fLine.at(i).getthic());
				}

			}
			else if (chaabi == '5')
			{
				current = '5';
				for (int i = 0; i < cir.size(); i++)
					cv::circle(tempimg, cir.at(i).getdarmayaan(), cir.at(i).getRadiusishalfofdiameter(), cir.at(i).getrang(), cir.at(i).getThickness());
			}
			cv::imshow("My Paint", tempimg);
		}
		else if (!drawing)
		{
			for (int i = 0; i < lines.size(); i++)
				cv::line(can, lines.at(i).gets(), lines.at(i).gete(), lines.at(i).gc(), lines.at(i).geth());
			for (int i = 0; i < rec.size(); i++)
				cv::rectangle(can, rec.at(i).gsi(), rec.at(i).gei(), rec.at(i).getco(), rec.at(i).geth());
			for (int i = 0; i < arrLine.size(); i++)
				cv::arrowedLine(can, arrLine.at(i).getshuru(), arrLine.at(i).getkahtam(), arrLine.at(i).getrng(), arrLine.at(i).getThickness());
			for (int i = 0; i < fLine.size(); i++)
			{
				for (int j = 1; j < fLine.at(i).freeline.size(); j++)
					cv::line(can, fLine.at(i).freeline.at(j - 1), fLine.at(i).freeline.at(j), fLine.at(i).gc(), fLine.at(i).getthic());
			}
			for (int i = 0; i < cir.size(); i++)
				cv::circle(can,cir.at(i).getdarmayaan(), cir.at(i).getRadiusishalfofdiameter(), cir.at(i).getrang(), cir.at(i).getThickness());
			cv::imshow("My Paint", can);
		}
		chaabi = cv::waitKey(10);

		bscs23158_collshapes s(tempimg, canlambai, canchorai);

		switch (chaabi)
		{
		case -1:
			chaabi = current;
			break;
		case 27:
			return;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
			current = chaabi;
			break;
		case '+':
			if (shth <= 5)
				shth++;
			break;
		case '-':
			if (shth > 1)
				shth--;
		case 'R':
			if (laal <= 245)
				laal += 10;
			break;
		case 'r':
			if (laal >= 10)
				laal -= 10;
			break;
		case 'B':
			if (neela <= 245)
				neela += 10;
			break;
		case 'b':
			if (neela >= 10)
				neela -= 10;
			break;
		case 'G':
			if (hara <= 245)
				hara += 10;
			break;
		case 'g':
			if (hara >= 10)
				hara -= 10;
			break;
		case 'S':
		case 's':
			s.Save("Paint.png"), std::cout << "\n~~Painting Saved~~\n";
			break;
		case 'C':
		case 'c':
			s.clear(can);
			for (int l = 0; l < lines.size(); l++)
				lines.clear();
			for (int r = 0; r < rec.size(); r++)
				rec.clear();
			for (int al = 0; al < arrLine.size(); al++)
				arrLine.clear();
			for (int fl = 0; fl < fLine.size(); fl++)
				fLine.clear();
			for (int c = 0; c < cir.size(); c++)
				cir.clear();
			break;
		default:
			break;
		}

	}
}

