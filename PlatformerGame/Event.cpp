#pragma once
#include "headers.h"
/*
Dagan Poulin, SadBoat Entertainment, 4/12/2021
 Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
#include "Event.h"
using namespace std;
namespace PPS {
	/*

	enum eventType
	{
		ERROR, //ErrorNumber, ErrorName, EventName, EventParent

		COLLISION, //CollisionA, CollisionB
		PHYSICS, //Location, Velocity, Direction

		MAPCHANGE, //NewMap
		CUTSCENE, //
		DIALOGUE, //SpeakerObject, Text, Instant, Duration

		ACTIONTRIGGER, //ObjectTrigger
		COMBAT, //UnitA, UnitB
		AI, //Location, PlayerLocation

		KEYPRESS,
		CLICK,

		AUDIO, //Sound, Duration
		RENDER, //
	};

	*/
	EventParameters::EventParameters()
	{

	}

	string Event::ErrorTypes[332];

	Event::Event(eventType type, EventParameters params)
	{
		this->type = type;
		this->params = params;

		//Goes to 331
		ErrorTypes[0] = "Undefined Error Type";
		ErrorTypes[1] = "Debug Error Type";
		ErrorTypes[2] = "GLFW Init Failure";
		ErrorTypes[3] = "Window Open Failure";
		ErrorTypes[4] = "GLEW Init Failure";
		ErrorTypes[5] = "";
		ErrorTypes[6] = "";
		ErrorTypes[7] = "";
		ErrorTypes[8] = "";
		ErrorTypes[9] = "";
		ErrorTypes[10] = "";
		ErrorTypes[11] = "";
		ErrorTypes[12] = "";
		ErrorTypes[13] = "";
		ErrorTypes[14] = "";
	}

	eventType Event::getType()
	{
		return this->type;
	}

	EventParameters Event::getParams()
	{
		return this->params;
	}

	void Event::handle()
	{

		if (type == ERROR)
		{//ErrorNumber, ErrorName, EventName, EventParent

			cout << "Error Number " << params.ERROR_ErrorNumber << ": " << ErrorTypes[params.ERROR_ErrorNumber] << " at " << params.ERROR_EventName << " event in " << params.ERROR_EventParent << endl;

			//return false;
		}

		if (type == COLLISION)
		{

		}

		if (type == PHYSICS)
		{

		}

		if (type == PROJECTILEPHYSICS)
		{

		}

		if (type == MAPCHANGE)
		{

		}

		if (type == CUTSCENE)
		{

		}

		if (type == DIALOGUE)
		{

		}

		if (type == ACTIONTRIGGER)
		{

		}

		if (type == COMBAT)
		{

		}

		if (type == AI)
		{

		}

		if (type == KEYPRESS)
		{

		}

		if (type == CLICK)
		{

		}

		if (type == AUDIO)
		{

		}

		if (type == RENDER)
		{

		}

	}

}