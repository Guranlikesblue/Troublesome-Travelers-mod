function onStepHit()
	if curStep == 319 then
		for i = 0, 3 do
			noteTweenAlpha('opponentNotes', i, 0, 1.2, 'linear');
		
		setProperty('scoreTxt.visible', false)
		setProperty('timeBarBG.visible', false);
		setProperty('timeBar.visible', false);
		setProperty('timeTxt.visible', false);
		
		if bfName == 'bf' or 'bf1' or 'bf-winner' or 'tunnel-bf' or 'bf-attacked' then --replace the name for your character name
			for i=0,4,1 do
				setPropertyFromGroup('opponentStrums', i, 'texture', 'evilUi/NOTE_assets')
			end
			for i = 0, getProperty('unspawnNotes.length')-1 do
				if not getPropertyFromGroup('unspawnNotes', i, 'mustPress') then
					setPropertyFromGroup('unspawnNotes', i, 'texture', 'evilUi/NOTE_assets'); --Change texture
				end
			end
		end
	end
end