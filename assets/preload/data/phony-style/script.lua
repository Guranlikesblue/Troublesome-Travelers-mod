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
		startDialogue('dialogue', 'breakfast');
	elseif tag == 'startDialogueEnd' then
		startDialogue('dialogueEnd', 'breakfast');
	end
end

function onStepHit()
		if curStep == 208 then
            setProperty('defaultCamZoom', 1.1);
		end
		if curStep == 336 then
            setProperty('defaultCamZoom', 0.7);
		end
		if curStep == 799 then
            setProperty('defaultCamZoom', 1.1);
		end
		if curStep == 928 then
            setProperty('defaultCamZoom', 0.7);
		end
end