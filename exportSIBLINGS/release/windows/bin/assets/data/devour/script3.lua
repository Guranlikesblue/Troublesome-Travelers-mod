function onCreate()
	makeLuaSprite('spookyEvil', 'halloweenevil_bg_low', -200, -100);
	addLuaSprite('spookyEvil', false);
	scaleObject('spookyEvil', 1, 1);
	
end
	
function onStepHit()
	if curStep == 319 then
		setProperty('gf.visible', false);
		removeLuaSprite('spookyEvil');
		makeLuaSprite('spookyEvilfront', 'halloweenevil', -200, -100);
		addLuaSprite('spookyEvilfront', false);
		scaleObject('spookyEvilfront', 1, 1);
	
	end
end