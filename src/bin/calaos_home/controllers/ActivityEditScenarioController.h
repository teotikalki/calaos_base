/******************************************************************************
**  Copyright (c) 2006-2012, Calaos. All Rights Reserved.
**
**  This file is part of Calaos Home.
**
**  Calaos Home is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 3 of the License, or
**  (at your option) any later version.
**
**  Calaos Home is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with Calaos; if not, write to the Free Software
**  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**
******************************************************************************/
#ifndef ActivityEditScenarioController_H
#define ActivityEditScenarioController_H

#include <Utils.h>

#include "ActivityController.h"
#include "ActivityEditScenarioView.h"
#include "CalaosModel.h"

using namespace Utils;

class ActivityEditScenarioController: public ActivityController
{
        private:
                Scenario *scenario;

                void createScenario();

                virtual void createView();

        public:
                ActivityEditScenarioController(Evas *evas, Evas_Object *parent);
                ~ActivityEditScenarioController();

                void setScenario(Scenario *sc) { scenario = sc; }
};

#endif // ActivityEditScenarioController_H