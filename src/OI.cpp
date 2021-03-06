/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>
#include <SmartDashboard/SmartDashboard.h>

OI::OI() {
	// Process operator interface input here.
	m_joy1.WhenPressed(new PrepareToPickup());
	m_joy2.WhenPressed(new Pickup());
	m_joy3.WhenPressed(new Place());
	m_joy4.WhenPressed(new Autonomous());
}

frc::Joystick& OI::GetJoystick() {
	return m_joy;
}
