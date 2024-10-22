// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/MoveBase.h"
#include "Commands/MoveShooterDown.h"
#include "Commands/MoveShooterUp.h"
#include "Commands/ShooterToCollectPosition.h"
#include "Commands/ShooterToDrivePosition.h"
#include "Commands/StopDriveBase.h"
#include "Commands/driveWithJoystcks.h"
#include "Commands/reverseDriveBaseDirection.h"
#include "Commands/shiftDriveBase.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
/**********************************************************************
 * Define the XBox Controller.  The lines that are commented out represent buttons that
 * we are not currently using, but which I don't want to have to look up later.
 * *********************************************************************/
	xController.reset(new Joystick(2));

	buttonA.reset(new JoystickButton(xController.get(), 1));
	buttonB.reset(new JoystickButton(xController.get(), 2));
	buttonX.reset(new JoystickButton(xController.get(), 3));
	buttonY.reset(new JoystickButton(xController.get(), 4));
//	buttonLB.reset(new JoystickButton(xController.get(), 5));
//	buttonRB.reset(new JoystickButton(xController.get(), 6));
//	buttonSelect.reset(new JoystickButton(xController.get(), 7));
//	buttonStart.reset(new JoystickButton(xController.get(), 8));

/**********************************************************************
 * Define the Logitech Controllers
 * The axis control the left and right bases respectively, the left controller trigger toggles the shift, and the
 * right controller trigger reverses the base.  The base has to stop before it will reverse
 * *********************************************************************/
    leftController.reset(new Joystick(1));
    shiftButton.reset(new JoystickButton(leftController.get(), 1));
    shiftButton->WhenPressed(new shiftDriveBase(0));

    rightController.reset(new Joystick(0));
    reverseDriveButton.reset(new JoystickButton(rightController.get(), 1));
    reverseDriveButton->WhenPressed(new reverseDriveBaseDirection(0));

/****************************************************************************
 * SmartDashboard Buttons
 */
//    SmartDashboard::PutData("MoveShooterUp", new MoveShooterUp());
//    SmartDashboard::PutData("MoveShooterDown", new MoveShooterDown());
//    SmartDashboard::PutData("MoveBase", new MoveBase());
//    SmartDashboard::PutData("StopBase", new StopBase());
//    SmartDashboard::PutData("reverseDriveBaseDirection: forward", new reverseDriveBaseDirection(1));
//    SmartDashboard::PutData("shiftDriveBase: lowGear", new shiftDriveBase(0));
//    SmartDashboard::PutData("driveWithJoystcks: forward", new driveWithJoystcks(1));
//    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getRightController() {
   return rightController;
}

std::shared_ptr<Joystick> OI::getLeftController() {
   return leftController;
}

std::shared_ptr<Joystick> OI::getxController() {
   return xController;
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

/****************************************************************************
* Enter button functions here.  TODO definitions for A,B, X and Y and POV
*/
//buttonA->WhenPressed()(new runFlywheelsReverse());
//buttonB->WhenHeld()->RunRoller();
//buttonX->WhenPressed()->Kick();
//buttonY->WhenPressed()->RunFlywheelsForward();


// Get the Y axis for the left and right Logitech controllers
float OI::getRightDriveAxis()
{
	return OI::rightController->GetY();
}

float OI::getLeftDriveAxis()
{
	return OI::leftController->GetY();
}

//Get the left axis on the XBox controller

float OI::getLeftXBoxAxis()
{
	return OI::xController->GetRawAxis(1);
}

//Get the right axis on the Xbox controller
float OI::getRightXBoxAxis()
{
	return OI::xController->GetRawAxis(5);
}

int OI::getXBoxPOV()
{
	return OI::xController->GetPOV();
}


