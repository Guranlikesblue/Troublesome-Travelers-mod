package troublesome;

import flixel.*;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;
import flixel.addons.ui.FlxInputText; // you need to install the flixel-ui and flixel-addons library
import flixel.addons.ui.FlxUI;
import flixel.addons.ui.FlxUIInputText;
import flixel.addons.display.shapes.*;
#if desktop
import Discord.DiscordClient;
#end

class TroublesomePassword extends MusicBeatState
{	
	var theInput:FlxUIInputText;
	
	override function create() 
	{
		#if desktop
		DiscordClient.changePresence("Password Menu", null);
		#end
		
		FlxG.mouse.visible = true; // make the mouse visible
		FlxG.mouse.enabled = true; // make the mouse usable

		var bg:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image('menuBGBlue')); // add the background
		bg.scrollFactor.set(0, 0);
		bg.updateHitbox();
		bg.screenCenter();
		bg.antialiasing = ClientPrefs.globalAntialiasing;
		add(bg);
		
		theInput = new FlxUIInputText(0, 0, 600, "", 60);
		theInput.screenCenter(X); // center the text
		theInput.screenCenter(Y);
		theInput.y += 18;
		theInput.fieldBorderThickness = 0; // remove border
		
		var inputDecoration = new FlxShapeBox(theInput.x - 10, theInput.x - 10, theInput.width + 20, theInput.height + 20, {thickness: 16, color: FlxColor.BLACK}, FlxColor.WHITE); // square
		add(inputDecoration); // add the rounded square
		
		add(theInput); // add the input field
		
		var inputHint = new FlxText(theInput.x + 50, 220, 1000, "Enter the password", 60); // add hint text
		inputHint.setFormat("assets/fonts/pixel.otf", 32, FlxColor.BLACK); // make it black
		add(inputHint);
	
		FlxG.watch.add(inputHint, "x", "inputHint.x");
		FlxG.watch.add(inputHint, "y", "inputHint.y");
		FlxG.watch.add(inputDecoration, "x", "inputDecoration.x");
		FlxG.watch.add(inputDecoration, "y", "inputDecoration.y");
		FlxG.watch.add(theInput, "x", "theInput.x");
		FlxG.watch.add(theInput, "y", "theInput.y");
	}
	
	override function update(elapsed:Float)
	{
		if (FlxG.keys.justPressed.ENTER)
		{
			trace(theInput.text); // print the password
			switch (theInput.text)
			{
				case 'PASSWORD':
					// do thing
				case 'PASSWORD2':
					// do another thing
				default: // in case the password is wrong
					FlxG.camera.flash(FlxColor.RED, 1, null, true); // camera flashes red
			}
		}
		
		if (FlxG.keys.justPressed.BACKSPACE)
			returnToMenu();
	}
	
	function returnToMenu()
	{
		MusicBeatState.switchState(new MainMenuState());
	}
}