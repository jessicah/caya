#ifndef _CayaRenderView_H
#define _CayaRenderView_H_

#include "RunView.h"
#include "SmileTextRender.h"

class RunView;
class Theme;

enum CayaRenderViewColors {
	COL_URL =	 0,
	COL_TIMESTAMP,
	COL_TEXT,
	COL_OWNNICK,
	COL_OTHERNICK,
	COL_ACTION,
	COL_SELECTION,
	COL_TIMESTAMP_DUMMY,
	COL_MAX_COLORS
};

enum {
	R_URL = 0,
	R_TEXT,
	R_TIMESTAMP,
	R_ACTION,
	R_EMOTICON,
	R_TIMESTAMP_DUMMY,
	MAX_RENDERS
};

class CayaRenderView : public RunView
{
	public:
				CayaRenderView(const char* name, const char* smileyConfig = NULL);

		void	AppendOtherMessage(const char* message);
		void	AppendOwnMessage(const char* message);
		void 	AddEmoticText(const char * txt,  int16 cols , int16 font , int16 cols2 , int16 font2);

		void	SetOwnNick(BString nick) { fOwnNick = nick; }
		void	SetOtherNick(BString nick) { fOtherNick = nick; }

	protected:
		void	PrepareTheme(Theme* theme);

	private:
		BString	fOwnNick;
		BString	fOtherNick;
		Theme* fTheme;
		SmileTextRender	str;
		bool lastWasMe;

};

#endif
