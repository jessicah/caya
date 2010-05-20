/*
 * Copyright 2009, Andrea Anzani. All rights reserved.
 * Distributed under the terms of the MIT License.
 */
#ifndef _CHAT_WINDOW_H
#define _CHAT_WINDOW_H
 
#include <Window.h>
#include <TextView.h>
#include "Observer.h"

#include "CayaConstants.h"

class ContactLinker;
class CayaRenderView;

class ChatWindow: public BWindow, public Observer {
public:
						ChatWindow(ContactLinker* cl);

	virtual	void		MessageReceived(BMessage* message);
	virtual	bool		QuitRequested();

			void		ImMessage(BMessage* msg);

			void		ObserveString(int32 what, BString str);
			void		ObservePointer(int32 what, void* ptr);
			void		ObserveInteger(int32 what, int32 val);
			void		AppendStatus(CayaStatus status);

private:
		BTextView*		fSendView;
		ContactLinker*	fContactLinker;		
		CayaRenderView*	fReceiveView;
};

#endif	// _CHAT_WINDOW_H
