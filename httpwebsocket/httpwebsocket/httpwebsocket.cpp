// httpwebsocket.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include "WebSocketServer.h"
using namespace std;
int main()
{
	CWebSocketServer::GetWebSocketServer(true);
	if (CWebSocketServer::GetWebSocketServer())
	{
		CWebSocketServer::GetWebSocketServer()->startserver("");
	}
	std::string input;
	while (true)
	{
		std::getline(std::cin, input);
		if (input == "quit")
		{
			break;
		}
		CWebSocketServer::GetWebSocketServer()->sendmsgtoweb(input.c_str());
	}
    return 0;
}

