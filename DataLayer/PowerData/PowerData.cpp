/**
 *  Schulich Delta Hermes
 *  Copyright (C) 2015 University of Calgary Solar Car Team
 *
 *  This file is part of Schulich Delta Hermes
 *
 *  Schulich Delta Hermes is free software:
 *  you can redistribute it and/or modify it under the terms
 *  of the GNU Affero General Public License as published by
 *  the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  Schulich Delta Hermes is distributed
 *  in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General
 *  Public License along with Schulich Delta Hermes.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 *  For further contact, email <software@calgarysolarcar.ca>
 */

#include "PowerData.h"

PowerData::PowerData()
: busCurrentA_(-1)
, busVoltage_(-1)
, motorVoltageReal_(-1)
, motorCurrentReal_(-1)
, backEmfImaginary_(-1)
, dcBusAmpHours_(-1)
{
   // initialize to -1
}

PowerData::~PowerData()
{
}

/*PowerData "Gets"*/
double PowerData::busCurrentA() const
{
   return busCurrentA_;
}
double PowerData::busVoltage() const
{
   return busVoltage_;
}
double PowerData::motorVoltageReal() const
{
   return motorVoltageReal_;
}
double PowerData::motorCurrentReal() const
{
   return motorCurrentReal_;
}
double PowerData::backEmfImaginary() const
{
   return backEmfImaginary_;
}
double PowerData::dcBusAmpHours() const
{
   return dcBusAmpHours_;
}

/*PowerData "Sets"*/
void PowerData::setBusCurrentA(double busCurrentA)
{
   busCurrentA_ = busCurrentA;
   emit busCurrentAReceived(busCurrentA_);
}
void PowerData::setBusVoltage(double busVoltage)
{
   busVoltage_ = busVoltage;
   emit busVoltageReceived(busVoltage_);
}
void PowerData::setMotorVoltageReal(double motorVoltageReal)
{
   motorVoltageReal_ = motorVoltageReal;
   emit motorVoltageRealReceived(motorVoltageReal_);
}
void PowerData::setMotorCurrentReal(double motorCurrentReal)
{
   motorCurrentReal_ = motorCurrentReal;
   emit motorCurrentRealReceived(motorCurrentReal_);
}
void PowerData::setBackEmfImaginary(double backEmfImaginary)
{
   backEmfImaginary_ = backEmfImaginary;
   emit backEmfImaginaryReceived(backEmfImaginary_);
}
void PowerData::setDcBusAmpHours(double dcBusAmpHours)
{
   dcBusAmpHours_ = dcBusAmpHours;
   emit dcBusAmpHoursReceived(dcBusAmpHours_);
}
