# FGCT4016 Task 1 'Reflection System'

## 1. Introduction

The task outlined was to create an Unreal Engine 5 project using C++ that uses its blueprint reflection system to have a class have a reflected function and/or function. The approach used was to create a class that derives itself from AActor, the base class for 'physical' objects in Unreal Engine 5. Then a function was made that was blueprint callable that would output a text message when called. This task is necessary to do due to most aspects of game development deriving from skills learnt in from task, especially since creating functions, variables etc... that can be accessed in the editor streamlines the work flow for game designers to focus on tweaking and balancing rather than wrapping their head around complex code systems. On top of that, relying on C++ instead of blueprints allows for greater freedom in terms of what can be done in Unreal instead of working around complex context-dependent blueprint nodes. From a programmer's perspective, working with raw code along with blueprints is useful as smaller tasks for a game can simply be programmed with blueprints, while complex systems can be done with code.

## 2. Implementation

The project first began with the blank template from Unreal as the starting point, to ensure proper learning of creating content in Unreal Engine 5 without pre-existing objects.

Then, a class that inherits from `AActor `was created. This was to allow for future proofing, as it can be placed on the world for future revisions of this Task

Then, a function called `Greeting` was created and had code attached to make it write text on the screen of the game when the function was called. `Greeting` is made to be `BluePrintCallable` to ensure it can be used in the editor.

`public:
	UFUNCTION(BlueprintCallable)
	virtual void Greeting();
`
[ Figure 1. TestActor.h's code declaring `Greeting`  .]

`void ATestActor::Greeting()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Hello there!"));
}`


[ Figure 2. TestActor.cpp's code of the function `Greeting`  .]

Then after writing the code that writes to the screen, to test if it is blueprint callable, it was called within the level's event tick, rather than `TestActor`'s itself, since `TestActor` isn't a blueprint class, so it does not have it's own blueprint. A copy of `TestActor` turned into a blueprint is possible, but any changes to `TestActor` would warrant having to reduplicate `TestActor` in future versions of the project.

![Alt text](./gitimages/blueprint.png "blueprint")

[ Figure 3. The Level Blueprint calling `Greeting` per tick  .]

![Alt text](./gitimages/ingame.png "ingame")
[ Figure 4. Ingame screenshot of 'Hello There!' being written per tick on screen  .]

## 3. Outcome

The project now functions where once the player loads in the to the level, per tick, a message on the screen appears displaying 'Hello there!'. This meets the task requirements are there is a class with a reflected function to blueprints, and to demonstrate said function in use, it has logic behind it and its being called by the level to test if the function works. 

### 3.1 Video Demonstration

## 4. Bibliography

## 5. AI Use Declaration

The Epic Developer Assistant for Unreal Engine was used to figure out the function to output text to the screen, that being `AddOnScreenDebugMessage()`, as it is much more convenient for quick testing than outputting to the console since the initializing the game has a lot of text to scroll before the game even runs.
