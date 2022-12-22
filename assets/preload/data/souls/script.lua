function onCreate()
	setProperty('boyfriendGroup.visible', false);
	setProperty('dad.visible', false);
	setProperty('scoreTxt.visible', false)
	setProperty('timeBarBG.visible', false);
  	setProperty('timeBar.visible', false);
	setProperty('timeTxt.visible', false);
end

function onCreatePost()
	luaDebugMode = true
	initLuaShader("glitch")

	makeLuaSprite("shaderImage")
	makeGraphic("shaderImage", screenWidth, screenHeight)

	setSpriteShader("shaderImage", "glitch")

	addHaxeLibrary("ShaderFilter", "openfl.filters")
	runHaxeCode([[
		trace(ShaderFilter);
		game.camGame.setFilters([new ShaderFilter(game.getLuaObject("shaderImage").shader)]);
		game.camHUD.setFilters([new ShaderFilter(game.getLuaObject("shaderImage").shader)]);
	]])
end

function onUpdate(elapsed)
	setShaderFloat("shaderImage", "iTime", os.clock())
end

function onSongStart()
	setProperty('boyfriendGroup.visible', true);
end

function onStepHit()
	if curStep == 251 then
		setProperty('dad.visible', true);
	end
	if curStep == 2819 then
		setProperty('dad.visible', false);
	end
end