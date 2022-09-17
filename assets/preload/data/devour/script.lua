local allowCountdown = false
local startedFirstDialogue = false
local startedEndDialogue = false
function onStartCountdown()
	if not allowCountdown and isStoryMode and not startedFirstDialogue then
		setProperty('inCutscene', true);
		runTimer('startDialogue', 0.8);
		startedFirstDialogue = true;
		return Function_Stop;
	end
	return Function_Continue;
end

function onEndSong()
	if not allowCountdown and isStoryMode and not startedEndDialogue then
		setProperty('inCutscene', true);
		runTimer('startDialogueEnd', 0.8);
		startedEndDialogue = true;
		return Function_Stop;
	end
	return Function_Continue;
end

function onTimerCompleted(tag, loops, loopsLeft)
	if tag == 'startDialogue' then
		startDialogue('dialogue');
	elseif tag == 'startDialogueEnd' then
		startDialogue('dialogueEnd');
	end
end

function opponentNoteHit()
    health = getProperty('health')
    if getProperty('health') > 0.20 then
        setProperty('health', health- 0.01);
    end
end

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
