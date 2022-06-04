function onCreate()
	makeLuaSprite("bg", 'parkBG/parksky', -1000, -500)
	setScrollFactor('bg', 0.9, 0.9);

	makeLuaSprite("fgcloud", 'parkBG/fgcloud', -1000, -300)
	setScrollFactor('fgcloud', 0.9, 0.9);
	scaleObject('fgcloud', 0.7, 0.7);
	
	makeLuaSprite("speedline", 'parkBG/speedLines', 0, 0)
	setScrollFactor('speedline', 0.9, 0.9);

	makeAnimatedLuaSprite('scrollingclouds', 'parkBG/clouds', -1000, -500)
	addAnimationByPrefix('scrollingclouds', 'idle', 'clouds idle', 24, true)
	objectPlayAnimation('scrollingclouds', true);
	
	addLuaSprite("bg", false)
	addLuaSprite("fgcloud", false)
	addLuaSprite("speedline", false)
	addLuaSprite('scrollingclouds', true)
end
