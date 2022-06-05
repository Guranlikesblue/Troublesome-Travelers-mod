#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FlashingState
#include <FlashingState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OutdatedState
#include <OutdatedState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_52_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",52,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_1[] = {
	HX_("SHADOW",e0,73,a3,cf),HX_("RIVER",ec,a2,5d,67),HX_("SHUBS",f1,3b,1a,fa),HX_("BBPANZU",78,33,57,57),HX_("DARK",76,1c,24,2d),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_85_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",85,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_115_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",115,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_126_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",126,0xd132a6e5)
static const int _hx_array_data_8ca18d79_6[] = {
	(int)9,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_210_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",210,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_203_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",203,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_223_startIntro,"TitleState","startIntro",0x6a094b7f,"TitleState.startIntro","TitleState.hx",223,0xd132a6e5)
static const int _hx_array_data_8ca18d79_11[] = {
	(int)14,(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,
};
static const int _hx_array_data_8ca18d79_12[] = {
	(int)27,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,
};
static const int _hx_array_data_8ca18d79_13[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_8ca18d79_14[] = {
	(int)29,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_8ca18d79_15[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_8ca18d79_16[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_388_getIntroTextShit,"TitleState","getIntroTextShit",0x5dcf15b8,"TitleState.getIntroTextShit","TitleState.hx",388,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_406_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",406,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_451_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",451,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_490_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",490,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_525_createCoolText,"TitleState","createCoolText",0x83610287,"TitleState.createCoolText","TitleState.hx",525,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_539_addMoreText,"TitleState","addMoreText",0xcf420fae,"TitleState.addMoreText","TitleState.hx",539,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_550_deleteCoolText,"TitleState","deleteCoolText",0x8afda2b6,"TitleState.deleteCoolText","TitleState.hx",550,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_560_beatHit,"TitleState","beatHit",0xfba69a88,"TitleState.beatHit","TitleState.hx",560,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_29[] = {
	HX_("Psych Engine by",10,a0,74,89),
};
static const ::String _hx_array_data_8ca18d79_30[] = {
	HX_("Not associated",53,f0,cf,18),HX_("with",06,76,f8,4e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_646_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",646,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_683_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",683,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_695_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",695,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_54_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",54,0xd132a6e5)
static const int _hx_array_data_8ca18d79_36[] = {
	(int)48,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_55_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",55,0xd132a6e5)
static const int _hx_array_data_8ca18d79_38[] = {
	(int)109,(int)189,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_56_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",56,0xd132a6e5)
static const int _hx_array_data_8ca18d79_40[] = {
	(int)107,(int)187,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_58_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",58,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_82_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",82,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_403_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",403,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_558_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",558,0xd132a6e5)

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_52_new)
HXLINE( 644)		this->increaseVolume = false;
HXLINE( 643)		this->skippedIntro = false;
HXLINE( 557)		this->sickBeats = 0;
HXLINE( 402)		this->transitioning = false;
HXLINE( 220)		this->swagShader = null();
HXLINE( 218)		this->danceLeft = false;
HXLINE(  78)		this->mustUpdate = false;
HXLINE(  75)		this->easterEggKeysBuffer = HX_("",00,00,00,00);
HXLINE(  74)		this->allowedKeys = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZ",6d,2b,3e,d6);
HXLINE(  71)		this->easterEggKeys = ::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_1,5);
HXLINE(  66)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  52)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x22c6bd01) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void TitleState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_85_create)
HXDLIN(  85)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  86)		::Paths_obj::clearStoredMemory(null());
HXLINE(  87)		::Paths_obj::clearUnusedMemory();
HXLINE(  90)		::WeekData_obj::loadTheFirstEnabledMod();
HXLINE( 110)		if (!(::TitleState_obj::closedState)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            			void _hx_run(::String data){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_115_create)
HXLINE( 116)				::TitleState_obj::updateVersion = ::StringTools_obj::trim(data.split(HX_("\n",0a,00,00,00))->__get(0));
HXLINE( 117)				::String curVersion = ::StringTools_obj::trim(::MainMenuState_obj::psychEngineVersion);
HXLINE( 118)				::haxe::Log_obj::trace((((HX_("version online: ",01,48,fa,0b) + ::TitleState_obj::updateVersion) + HX_(", your version: ",85,c4,81,a1)) + curVersion),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),118,HX_("TitleState",79,8d,a1,8c),HX_("create",fc,66,0f,7c)));
HXLINE( 119)				if ((::TitleState_obj::updateVersion != curVersion)) {
HXLINE( 120)					::haxe::Log_obj::trace(HX_("versions arent matching!",f9,fc,92,ec),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),120,HX_("TitleState",79,8d,a1,8c),HX_("create",fc,66,0f,7c)));
HXLINE( 121)					_gthis->mustUpdate = true;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run(::String error){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_126_create)
HXLINE( 126)				::haxe::Log_obj::trace((HX_("error: ",6e,80,0a,ea) + error),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),126,HX_("TitleState",79,8d,a1,8c),HX_("create",fc,66,0f,7c)));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 111)			::haxe::Log_obj::trace(HX_("checking for update",86,83,c8,0b),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),111,HX_("TitleState",79,8d,a1,8c),HX_("create",fc,66,0f,7c)));
HXLINE( 112)			 ::sys::Http http =  ::sys::Http_obj::__alloc( HX_CTX ,HX_("https://raw.githubusercontent.com/ShadowMario/FNF-PsychEngine/main/gitVersion.txt",8c,16,f1,a1));
HXLINE( 114)			http->onData =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 125)			http->onError =  ::Dynamic(new _hx_Closure_1());
HXLINE( 129)			http->request(null());
            		}
HXLINE( 133)		::flixel::FlxG_obj::game->focusLostFramerate = 60;
HXLINE( 134)		::flixel::FlxG_obj::sound->muteKeys = ::TitleState_obj::muteKeys;
HXLINE( 135)		::flixel::FlxG_obj::sound->volumeDownKeys = ::TitleState_obj::volumeDownKeys;
HXLINE( 136)		::flixel::FlxG_obj::sound->volumeUpKeys = ::TitleState_obj::volumeUpKeys;
HXLINE( 137)		::flixel::FlxG_obj::keys->preventDefaultKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_6,1);
HXLINE( 139)		::PlayerSettings_obj::init();
HXLINE( 141)		 ::flixel::math::FlxRandom _hx_tmp = ::flixel::FlxG_obj::random;
HXDLIN( 141)		this->curWacky = _hx_tmp->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE( 145)		this->swagShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 146)		this->super::create();
HXLINE( 148)		::flixel::FlxG_obj::save->bind(HX_("funkin",31,b2,4f,6f),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE( 150)		::ClientPrefs_obj::loadPrefs();
HXLINE( 152)		::Highscore_obj::load();
HXLINE( 155)		this->titleJSON =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::Paths_obj::getTextFromFile(HX_("images/gfDanceTitle.json",1b,dc,af,fc),null()))->doParse();
HXLINE( 158)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic) )) {
HXLINE( 158)			::flixel::FlxG_obj::save->data->__SetField(HX_("psychDevsEasterEgg",22,2b,1d,02),HX_("",00,00,00,00),::hx::paccDynamic);
            		}
HXLINE( 159)		 ::Dynamic _hx_switch_0 =  ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic))->__Field(HX_("toUpperCase",37,30,fd,38),::hx::paccDynamic)();
            		if (  (_hx_switch_0==HX_("BBPANZU",78,33,57,57)) ){
HXLINE( 171)			 ::Dynamic fh = this->titleJSON;
HXDLIN( 171)			fh->__SetField(HX_("gfx",79,81,4e,00),(fh->__Field(HX_("gfx",79,81,4e,00),::hx::paccDynamic) + 45),::hx::paccDynamic);
HXLINE( 172)			 ::Dynamic fh1 = this->titleJSON;
HXDLIN( 172)			fh1->__SetField(HX_("gfy",7a,81,4e,00),(fh1->__Field(HX_("gfy",7a,81,4e,00),::hx::paccDynamic) + 100),::hx::paccDynamic);
HXLINE( 170)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("RIVER",ec,a2,5d,67)) ){
HXLINE( 165)			 ::Dynamic fh = this->titleJSON;
HXDLIN( 165)			fh->__SetField(HX_("gfx",79,81,4e,00),(fh->__Field(HX_("gfx",79,81,4e,00),::hx::paccDynamic) + 100),::hx::paccDynamic);
HXLINE( 166)			 ::Dynamic fh1 = this->titleJSON;
HXDLIN( 166)			fh1->__SetField(HX_("gfy",7a,81,4e,00),(fh1->__Field(HX_("gfy",7a,81,4e,00),::hx::paccDynamic) + 20),::hx::paccDynamic);
HXLINE( 164)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("SHADOW",e0,73,a3,cf)) ){
HXLINE( 162)			 ::Dynamic fh = this->titleJSON;
HXDLIN( 162)			fh->__SetField(HX_("gfx",79,81,4e,00),(fh->__Field(HX_("gfx",79,81,4e,00),::hx::paccDynamic) + 210),::hx::paccDynamic);
HXLINE( 163)			 ::Dynamic fh1 = this->titleJSON;
HXDLIN( 163)			fh1->__SetField(HX_("gfy",7a,81,4e,00),(fh1->__Field(HX_("gfy",7a,81,4e,00),::hx::paccDynamic) + 40),::hx::paccDynamic);
HXLINE( 161)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("SHUBS",f1,3b,1a,fa)) ){
HXLINE( 168)			 ::Dynamic fh = this->titleJSON;
HXDLIN( 168)			fh->__SetField(HX_("gfx",79,81,4e,00),(fh->__Field(HX_("gfx",79,81,4e,00),::hx::paccDynamic) + 160),::hx::paccDynamic);
HXLINE( 169)			 ::Dynamic fh1 = this->titleJSON;
HXDLIN( 169)			fh1->__SetField(HX_("gfy",7a,81,4e,00),(( (Float)(fh1->__Field(HX_("gfy",7a,81,4e,00),::hx::paccDynamic)) ) - ( (Float)(10) )),::hx::paccDynamic);
HXLINE( 167)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
HXLINE( 176)		bool _hx_tmp1;
HXDLIN( 176)		bool _hx_tmp2;
HXDLIN( 176)		if (!(::TitleState_obj::initialized)) {
HXLINE( 176)			_hx_tmp2 = ::hx::IsNotNull( ::flixel::FlxG_obj::save->data );
            		}
            		else {
HXLINE( 176)			_hx_tmp2 = false;
            		}
HXDLIN( 176)		if (_hx_tmp2) {
HXLINE( 176)			_hx_tmp1 = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 176)			_hx_tmp1 = false;
            		}
HXDLIN( 176)		if (_hx_tmp1) {
HXLINE( 178)			::flixel::FlxG_obj::set_fullscreen(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) ));
            		}
HXLINE( 182)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic) )) {
HXLINE( 184)			::StoryMenuState_obj::weekCompleted = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic)) );
            		}
HXLINE( 187)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 193)		bool _hx_tmp3;
HXDLIN( 193)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE( 193)			_hx_tmp3 = !(::FlashingState_obj::leftState);
            		}
            		else {
HXLINE( 193)			_hx_tmp3 = false;
            		}
HXDLIN( 193)		if (_hx_tmp3) {
HXLINE( 194)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE( 195)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE( 196)			::MusicBeatState_obj::switchState( ::FlashingState_obj::__alloc( HX_CTX ,null(),null()));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::TitleState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_210_create)
HXLINE( 210)				_gthis->startIntro();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 199)			if (!(::DiscordClient_obj::isInitialized)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            				void _hx_run(int exitCode){
            					HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_203_create)
HXLINE( 203)					::DiscordClient_obj::shutdown();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 201)				::DiscordClient_obj::initialize();
HXLINE( 202)				::lime::app::Application_obj::current->onExit->add( ::Dynamic(new _hx_Closure_2()),null(),null());
            			}
HXLINE( 208)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_3(_gthis)),null());
            		}
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_223_startIntro)
HXLINE( 224)		if (!(::TitleState_obj::initialized)) {
HXLINE( 247)			if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 248)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 248)				::String library = null();
HXDLIN( 248)				 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 248)				_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 250)				{
HXLINE( 250)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 250)					 ::Dynamic onComplete = null();
HXDLIN( 250)					if (::hx::IsNull( _this->_channel )) {
HXLINE( 250)						_this->play(null(),null(),null());
            					}
HXDLIN( 250)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 250)						_this->fadeTween->cancel();
            					}
HXDLIN( 250)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
            			}
            		}
HXLINE( 254)		::Conductor_obj::changeBPM(( (Float)(this->titleJSON->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ));
HXLINE( 255)		this->persistentUpdate = true;
HXLINE( 257)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 259)		bool _hx_tmp;
HXDLIN( 259)		bool _hx_tmp1;
HXDLIN( 259)		if (::hx::IsNotNull( this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic) )) {
HXLINE( 259)			_hx_tmp1 = (( (::String)(this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic)) ).length > 0);
            		}
            		else {
HXLINE( 259)			_hx_tmp1 = false;
            		}
HXDLIN( 259)		if (_hx_tmp1) {
HXLINE( 259)			_hx_tmp = ::hx::IsNotEq( this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic),HX_("none",b8,12,0a,49) );
            		}
            		else {
HXLINE( 259)			_hx_tmp = false;
            		}
HXDLIN( 259)		if (_hx_tmp) {
HXLINE( 260)			::String library = null();
HXDLIN( 260)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(( (::String)(this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic)) ),library);
HXDLIN( 260)			bg->loadGraphic(returnAsset,null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 262)			bg->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
            		}
HXLINE( 268)		this->add(bg);
HXLINE( 270)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("titlex",e0,cf,77,23),::hx::paccDynamic),this->titleJSON->__Field(HX_("titley",e1,cf,77,23),::hx::paccDynamic),null());
HXLINE( 271)		 ::flixel::FlxSprite _hx_tmp2 = this->logoBl;
HXDLIN( 271)		::String library = null();
HXDLIN( 271)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("siblingslogoBumpin",97,c7,3b,e8),null());
HXDLIN( 271)		bool xmlExists = false;
HXDLIN( 271)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("siblingslogoBumpin",97,c7,3b,e8)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 271)			xmlExists = true;
            		}
HXDLIN( 271)		 ::Dynamic _hx_tmp3;
HXDLIN( 271)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 271)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE( 271)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("siblingslogoBumpin",97,c7,3b,e8),library);
HXDLIN( 271)			_hx_tmp3 = returnAsset;
            		}
HXDLIN( 271)		::String _hx_tmp4;
HXDLIN( 271)		if (xmlExists) {
HXLINE( 271)			_hx_tmp4 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("siblingslogoBumpin",97,c7,3b,e8)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 271)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("siblingslogoBumpin",97,c7,3b,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 271)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE( 273)		this->logoBl->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 274)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,false,null(),null());
HXLINE( 275)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 276)		this->logoBl->updateHitbox();
HXLINE( 277)		 ::flixel::FlxSprite fh = this->logoBl;
HXDLIN( 277)		fh->set_x((fh->x + 400));
HXLINE( 278)		 ::flixel::FlxSprite fh1 = this->logoBl;
HXDLIN( 278)		fh1->set_y((fh1->y + 100));
HXLINE( 282)		this->swagShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 283)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("gfx",79,81,4e,00),::hx::paccDynamic),this->titleJSON->__Field(HX_("gfy",7a,81,4e,00),::hx::paccDynamic),null());
HXLINE( 285)		::String easterEgg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 286)		::String _hx_switch_0 = easterEgg.toUpperCase();
            		if (  (_hx_switch_0==HX_("BBPANZU",78,33,57,57)) ){
HXLINE( 302)			 ::flixel::FlxSprite _hx_tmp = this->gfDance;
HXDLIN( 302)			::String library = null();
HXDLIN( 302)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("BBBump",d6,55,f9,8f),null());
HXDLIN( 302)			bool xmlExists = false;
HXDLIN( 302)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("BBBump",d6,55,f9,8f)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 302)				xmlExists = true;
            			}
HXDLIN( 302)			 ::Dynamic _hx_tmp1;
HXDLIN( 302)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 302)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE( 302)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("BBBump",d6,55,f9,8f),library);
HXDLIN( 302)				_hx_tmp1 = returnAsset;
            			}
HXDLIN( 302)			::String _hx_tmp2;
HXDLIN( 302)			if (xmlExists) {
HXLINE( 302)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("BBBump",d6,55,f9,8f)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 302)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("BBBump",d6,55,f9,8f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 302)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 303)			this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("BB Title Bump",1e,7a,fc,18),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_11,14),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 304)			this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("BB Title Bump",1e,7a,fc,18),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_12,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 301)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("RIVER",ec,a2,5d,67)) ){
HXLINE( 294)			 ::flixel::FlxSprite _hx_tmp = this->gfDance;
HXDLIN( 294)			::String library = null();
HXDLIN( 294)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("RiverBump",02,fd,9b,63),null());
HXDLIN( 294)			bool xmlExists = false;
HXDLIN( 294)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("RiverBump",02,fd,9b,63)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 294)				xmlExists = true;
            			}
HXDLIN( 294)			 ::Dynamic _hx_tmp1;
HXDLIN( 294)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 294)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE( 294)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("RiverBump",02,fd,9b,63),library);
HXDLIN( 294)				_hx_tmp1 = returnAsset;
            			}
HXDLIN( 294)			::String _hx_tmp2;
HXDLIN( 294)			if (xmlExists) {
HXLINE( 294)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("RiverBump",02,fd,9b,63)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 294)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("RiverBump",02,fd,9b,63)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 294)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 295)			this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("River Title Bump",72,50,b8,9a),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_13,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 296)			this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("River Title Bump",72,50,b8,9a),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_14,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 293)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("SHADOW",e0,73,a3,cf)) ){
HXLINE( 290)			 ::flixel::FlxSprite _hx_tmp = this->gfDance;
HXDLIN( 290)			::String library = null();
HXDLIN( 290)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("ShadowBump",16,78,fc,06),null());
HXDLIN( 290)			bool xmlExists = false;
HXDLIN( 290)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("ShadowBump",16,78,fc,06)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 290)				xmlExists = true;
            			}
HXDLIN( 290)			 ::Dynamic _hx_tmp1;
HXDLIN( 290)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 290)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE( 290)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("ShadowBump",16,78,fc,06),library);
HXDLIN( 290)				_hx_tmp1 = returnAsset;
            			}
HXDLIN( 290)			::String _hx_tmp2;
HXDLIN( 290)			if (xmlExists) {
HXLINE( 290)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("ShadowBump",16,78,fc,06)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 290)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("ShadowBump",16,78,fc,06)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 290)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 291)			this->gfDance->animation->addByPrefix(HX_("danceLeft",da,cc,f9,df),HX_("Shadow Title Bump",de,1f,1e,d8),24,null(),null(),null());
HXLINE( 292)			this->gfDance->animation->addByPrefix(HX_("danceRight",a9,7f,a6,91),HX_("Shadow Title Bump",de,1f,1e,d8),24,null(),null(),null());
HXLINE( 289)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("SHUBS",f1,3b,1a,fa)) ){
HXLINE( 298)			 ::flixel::FlxSprite _hx_tmp = this->gfDance;
HXDLIN( 298)			::String library = null();
HXDLIN( 298)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("ShubBump",58,8b,12,d1),null());
HXDLIN( 298)			bool xmlExists = false;
HXDLIN( 298)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("ShubBump",58,8b,12,d1)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 298)				xmlExists = true;
            			}
HXDLIN( 298)			 ::Dynamic _hx_tmp1;
HXDLIN( 298)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 298)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE( 298)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("ShubBump",58,8b,12,d1),library);
HXDLIN( 298)				_hx_tmp1 = returnAsset;
            			}
HXDLIN( 298)			::String _hx_tmp2;
HXDLIN( 298)			if (xmlExists) {
HXLINE( 298)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("ShubBump",58,8b,12,d1)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 298)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("ShubBump",58,8b,12,d1)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 298)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 299)			this->gfDance->animation->addByPrefix(HX_("danceLeft",da,cc,f9,df),HX_("Shub Title Bump",dc,d8,41,9a),24,false,null(),null());
HXLINE( 300)			this->gfDance->animation->addByPrefix(HX_("danceRight",a9,7f,a6,91),HX_("Shub Title Bump",dc,d8,41,9a),24,false,null(),null());
HXLINE( 297)			goto _hx_goto_9;
            		}
            		/* default */{
HXLINE( 311)			 ::flixel::FlxSprite _hx_tmp = this->gfDance;
HXDLIN( 311)			::String library = null();
HXDLIN( 311)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("gfDanceTitle",64,64,d2,7b),null());
HXDLIN( 311)			bool xmlExists = false;
HXDLIN( 311)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 311)				xmlExists = true;
            			}
HXDLIN( 311)			 ::Dynamic _hx_tmp1;
HXDLIN( 311)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 311)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE( 311)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("gfDanceTitle",64,64,d2,7b),library);
HXDLIN( 311)				_hx_tmp1 = returnAsset;
            			}
HXDLIN( 311)			::String _hx_tmp2;
HXDLIN( 311)			if (xmlExists) {
HXLINE( 311)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 311)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 311)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE( 312)			this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_15,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 313)			this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_16,15),HX_("",00,00,00,00),24,false,null(),null());
            		}
            		_hx_goto_9:;
HXLINE( 315)		this->gfDance->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 318)		this->gfDance->shader = this->swagShader->shader;
HXLINE( 319)		this->add(this->logoBl);
HXLINE( 320)		this->logoBl->shader = this->swagShader->shader;
HXLINE( 322)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("startx",d6,61,fa,05),::hx::paccDynamic),this->titleJSON->__Field(HX_("starty",d7,61,fa,05),::hx::paccDynamic),null());
HXLINE( 324)		::String path = ((HX_("mods/",9e,2f,58,0c) + ::Paths_obj::currentModDirectory) + HX_("/images/titleEnter.png",c3,97,17,95));
HXLINE( 326)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 327)			path = HX_("mods/images/titleEnter.png",f4,47,59,97);
            		}
HXLINE( 330)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 331)			path = HX_("assets/images/titleEnter.png",86,9a,cd,1d);
            		}
HXLINE( 334)		 ::flixel::FlxSprite _hx_tmp5 = this->titleText;
HXDLIN( 334)		 ::openfl::display::BitmapData _hx_tmp6 = ::openfl::display::BitmapData_obj::fromFile(path);
HXDLIN( 334)		_hx_tmp5->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp6,::sys::io::File_obj::getContent(::StringTools_obj::replace(path,HX_(".png",3b,2d,bd,1e),HX_(".xml",69,3e,c3,1e)))));
HXLINE( 339)		this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 340)		this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
HXLINE( 341)		this->titleText->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 342)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 343)		this->titleText->updateHitbox();
HXLINE( 345)		this->add(this->titleText);
HXLINE( 347)		 ::flixel::FlxSprite logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 347)		::String library1 = null();
HXDLIN( 347)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("logo",6b,9f,b7,47),library1);
HXDLIN( 347)		 ::flixel::FlxSprite logo1 = logo->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 348)		logo1->screenCenter(null());
HXLINE( 349)		logo1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 355)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 356)		this->add(this->credGroup);
HXLINE( 357)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 359)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 360)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 362)		this->credTextShit =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("",00,00,00,00),true,null(),null(),null());
HXLINE( 363)		this->credTextShit->screenCenter(null());
HXLINE( 367)		this->credTextShit->set_visible(false);
HXLINE( 369)		 ::flixel::FlxSprite _hx_tmp7 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.52)),null());
HXDLIN( 369)		::String library2 = null();
HXDLIN( 369)		 ::flixel::graphics::FlxGraphic returnAsset1 = ::Paths_obj::returnGraphic(HX_("newgrounds_logo",1e,5c,8d,a6),library2);
HXDLIN( 369)		this->ngSpr = _hx_tmp7->loadGraphic(returnAsset1,null(),null(),null(),null(),null());
HXLINE( 370)		this->add(this->ngSpr);
HXLINE( 371)		this->ngSpr->set_visible(false);
HXLINE( 372)		 ::flixel::FlxSprite _hx_tmp8 = this->ngSpr;
HXDLIN( 372)		_hx_tmp8->setGraphicSize(::Std_obj::_hx_int((this->ngSpr->get_width() * ((Float)0.8))),null());
HXLINE( 373)		this->ngSpr->updateHitbox();
HXLINE( 374)		this->ngSpr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 375)		this->ngSpr->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 377)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 379)		if (::TitleState_obj::initialized) {
HXLINE( 380)			this->skipIntro();
            		}
            		else {
HXLINE( 382)			::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_388_getIntroTextShit)
HXLINE( 389)		::String library = null();
HXDLIN( 389)		::String fullText = ::openfl::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("introText",39,69,67,a6)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 391)		::Array< ::String > firstArray = fullText.split(HX_("\n",0a,00,00,00));
HXLINE( 392)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 394)		{
HXLINE( 394)			int _g = 0;
HXDLIN( 394)			while((_g < firstArray->length)){
HXLINE( 394)				::String i = firstArray->__get(_g);
HXDLIN( 394)				_g = (_g + 1);
HXLINE( 396)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 399)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_406_update)
HXDLIN( 406)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 407)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 408)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 411)		bool pressedEnter;
HXDLIN( 411)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 411)		if (!(_this->keyManager->checkStatus(13,_this->status))) {
HXLINE( 411)			pressedEnter = ::PlayerSettings_obj::player1->controls->_accept->check();
            		}
            		else {
HXLINE( 411)			pressedEnter = true;
            		}
HXLINE( 423)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 425)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 427)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 427)			int id = 7;
HXDLIN( 427)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 427)			int Status = _this->status;
HXDLIN( 427)			bool _hx_tmp;
HXDLIN( 427)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 427)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 427)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 427)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 427)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 427)					if (::hx::IsNotNull( button )) {
HXLINE( 427)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 427)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 427)			if (_hx_tmp) {
HXLINE( 428)				pressedEnter = true;
            			}
            		}
HXLINE( 438)		bool _hx_tmp;
HXDLIN( 438)		bool _hx_tmp1;
HXDLIN( 438)		if (::TitleState_obj::initialized) {
HXLINE( 438)			_hx_tmp1 = !(this->transitioning);
            		}
            		else {
HXLINE( 438)			_hx_tmp1 = false;
            		}
HXDLIN( 438)		if (_hx_tmp1) {
HXLINE( 438)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 438)			_hx_tmp = false;
            		}
HXDLIN( 438)		if (_hx_tmp) {
HXLINE( 440)			if (pressedEnter) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_451_update)
HXLINE( 452)					if (_gthis->mustUpdate) {
HXLINE( 453)						::MusicBeatState_obj::switchState( ::OutdatedState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            					else {
HXLINE( 455)						::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            					}
HXLINE( 457)					::TitleState_obj::closedState = true;
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 442)				if (::hx::IsNotNull( this->titleText )) {
HXLINE( 442)					this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            				}
HXLINE( 444)				::flixel::FlxG_obj::camera->flash(-1,1,null(),null());
HXLINE( 445)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 445)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 447)				this->transitioning = true;
HXLINE( 450)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            			}
            			else {
HXLINE( 462)				if ((::flixel::FlxG_obj::keys->firstJustPressed() != -1)) {
HXLINE( 464)					int keyPressed = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 465)					::String keyName = ( (::String)(::haxe::IMap_obj::get(::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap,keyPressed)) );
HXLINE( 466)					if ((this->allowedKeys.indexOf(keyName,null()) != -1)) {
HXLINE( 467)						 ::TitleState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 467)						_hx_tmp->easterEggKeysBuffer = (_hx_tmp->easterEggKeysBuffer + keyName);
HXLINE( 468)						if ((this->easterEggKeysBuffer.length >= 32)) {
HXLINE( 468)							this->easterEggKeysBuffer = this->easterEggKeysBuffer.substring(1,null());
            						}
HXLINE( 471)						{
HXLINE( 471)							int _g = 0;
HXDLIN( 471)							::Array< ::String > _g1 = this->easterEggKeys;
HXDLIN( 471)							while((_g < _g1->length)){
HXLINE( 471)								::String wordRaw = _g1->__get(_g);
HXDLIN( 471)								_g = (_g + 1);
HXLINE( 473)								::String word = wordRaw.toUpperCase();
HXLINE( 474)								if ((this->easterEggKeysBuffer.indexOf(word,null()) != -1)) {
            									HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            									void _hx_run( ::flixel::tweens::FlxTween twn){
            										HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_490_update)
HXLINE( 491)										::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE( 492)										::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE( 493)										::MusicBeatState_obj::switchState( ::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            									}
            									HX_END_LOCAL_FUNC1((void))

HXLINE( 477)									if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic),word )) {
HXLINE( 478)										::flixel::FlxG_obj::save->data->__SetField(HX_("psychDevsEasterEgg",22,2b,1d,02),HX_("",00,00,00,00),::hx::paccDynamic);
            									}
            									else {
HXLINE( 480)										::flixel::FlxG_obj::save->data->__SetField(HX_("psychDevsEasterEgg",22,2b,1d,02),word,::hx::paccDynamic);
            									}
HXLINE( 481)									::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 483)									 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 483)									_hx_tmp->play(::Paths_obj::sound(HX_("ToggleJingle",05,8e,17,8e),null()),null(),null(),null(),null(),null());
HXLINE( 485)									 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 486)									black->set_alpha(( (Float)(0) ));
HXLINE( 487)									this->add(black);
HXLINE( 489)									::flixel::tweens::FlxTween_obj::tween(black, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1()))));
HXLINE( 496)									{
HXLINE( 496)										 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 496)										 ::Dynamic onComplete = null();
HXDLIN( 496)										if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 496)											_this->fadeTween->cancel();
            										}
HXDLIN( 496)										_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),( (Float)(1) ), ::Dynamic(::hx::Anon_obj::Create(1)
            											->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            									}
HXLINE( 497)									::TitleState_obj::closedState = true;
HXLINE( 498)									this->transitioning = true;
HXLINE( 499)									::TitleState_obj::playJingle = true;
HXLINE( 500)									this->easterEggKeysBuffer = HX_("",00,00,00,00);
HXLINE( 501)									goto _hx_goto_19;
            								}
            							}
            							_hx_goto_19:;
            						}
            					}
            				}
            			}
            		}
HXLINE( 509)		bool _hx_tmp2;
HXDLIN( 509)		bool _hx_tmp3;
HXDLIN( 509)		if (::TitleState_obj::initialized) {
HXLINE( 509)			_hx_tmp3 = pressedEnter;
            		}
            		else {
HXLINE( 509)			_hx_tmp3 = false;
            		}
HXDLIN( 509)		if (_hx_tmp3) {
HXLINE( 509)			_hx_tmp2 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 509)			_hx_tmp2 = false;
            		}
HXDLIN( 509)		if (_hx_tmp2) {
HXLINE( 511)			this->skipIntro();
            		}
HXLINE( 514)		if (::hx::IsNotNull( this->swagShader )) {
HXLINE( 516)			if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 516)				 ::ColorSwap fh = this->swagShader;
HXDLIN( 516)				fh->set_hue((fh->hue - (elapsed * ((Float)0.1))));
            			}
HXLINE( 517)			if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 517)				 ::ColorSwap fh = this->swagShader;
HXDLIN( 517)				fh->set_hue((fh->hue + (elapsed * ((Float)0.1))));
            			}
            		}
HXLINE( 520)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_525_createCoolText)
HXDLIN( 525)		int _g = 0;
HXDLIN( 525)		int _g1 = textArray->length;
HXDLIN( 525)		while((_g < _g1)){
HXDLIN( 525)			_g = (_g + 1);
HXDLIN( 525)			int i = (_g - 1);
HXLINE( 527)			 ::Alphabet money =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true,false,null(),null());
HXLINE( 528)			money->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 529)			money->set_y((money->y + (((i * 60) + 200) + offset)));
HXLINE( 530)			bool _hx_tmp;
HXDLIN( 530)			if (::hx::IsNotNull( this->credGroup )) {
HXLINE( 530)				_hx_tmp = ::hx::IsNotNull( this->textGroup );
            			}
            			else {
HXLINE( 530)				_hx_tmp = false;
            			}
HXDLIN( 530)			if (_hx_tmp) {
HXLINE( 531)				this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 532)				this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_539_addMoreText)
HXDLIN( 539)		bool _hx_tmp;
HXDLIN( 539)		if (::hx::IsNotNull( this->textGroup )) {
HXDLIN( 539)			_hx_tmp = ::hx::IsNotNull( this->credGroup );
            		}
            		else {
HXDLIN( 539)			_hx_tmp = false;
            		}
HXDLIN( 539)		if (_hx_tmp) {
HXLINE( 540)			 ::Alphabet coolText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true,false,null(),null());
HXLINE( 541)			coolText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 542)			coolText->set_y((coolText->y + (((this->textGroup->length * 60) + 200) + offset)));
HXLINE( 543)			this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 544)			this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_550_deleteCoolText)
HXDLIN( 550)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 552)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 553)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_560_beatHit)
HXLINE( 561)		this->super::beatHit();
HXLINE( 563)		if (::hx::IsNotNull( this->logoBl )) {
HXLINE( 564)			this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
            		}
HXLINE( 566)		if (::hx::IsNotNull( this->gfDance )) {
HXLINE( 567)			this->danceLeft = !(this->danceLeft);
HXLINE( 568)			if (this->danceLeft) {
HXLINE( 569)				this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            			else {
HXLINE( 571)				this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            			}
            		}
HXLINE( 574)		if (!(::TitleState_obj::closedState)) {
HXLINE( 575)			this->sickBeats++;
HXLINE( 576)			switch((int)(this->sickBeats)){
            				case (int)1: {
HXLINE( 580)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_29,1),15);
            				}
            				break;
            				case (int)3: {
HXLINE( 587)					this->addMoreText(HX_("Shadow Mario",c4,01,05,71),15);
HXLINE( 588)					this->addMoreText(HX_("RiverOaken",36,1d,dd,33),15);
HXLINE( 589)					this->addMoreText(HX_("shubs",11,04,2c,7c),15);
            				}
            				break;
            				case (int)4: {
HXLINE( 596)					this->deleteCoolText();
            				}
            				break;
            				case (int)5: {
HXLINE( 602)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_30,2),-40);
            				}
            				break;
            				case (int)7: {
HXLINE( 607)					this->addMoreText(HX_("newgrounds",ac,0f,a7,f6),-40);
HXLINE( 608)					this->ngSpr->set_visible(true);
            				}
            				break;
            				case (int)8: {
HXLINE( 611)					this->deleteCoolText();
HXLINE( 612)					this->ngSpr->set_visible(false);
            				}
            				break;
            				case (int)9: {
HXLINE( 618)					this->createCoolText(::Array_obj< ::String >::__new(1)->init(0,this->curWacky->__get(0)),null());
            				}
            				break;
            				case (int)11: {
HXLINE( 621)					this->addMoreText(this->curWacky->__get(1),null());
            				}
            				break;
            				case (int)12: {
HXLINE( 624)					this->deleteCoolText();
            				}
            				break;
            				case (int)13: {
HXLINE( 629)					this->addMoreText(HX_("Friday",ff,00,5d,e6),null());
            				}
            				break;
            				case (int)14: {
HXLINE( 632)					this->addMoreText(HX_("Night",b8,29,f7,2e),null());
            				}
            				break;
            				case (int)15: {
HXLINE( 635)					this->addMoreText(HX_("Funkin",51,26,e4,a3),null());
            				}
            				break;
            				case (int)16: {
HXLINE( 638)					this->skipIntro();
            				}
            				break;
            			}
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_646_skipIntro)
HXDLIN( 646)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 647)		if (!(this->skippedIntro)) {
HXLINE( 649)			if (::TitleState_obj::playJingle) {
HXLINE( 651)				::String easteregg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 652)				if (::hx::IsNull( easteregg )) {
HXLINE( 652)					easteregg = HX_("",00,00,00,00);
            				}
HXLINE( 653)				easteregg = easteregg.toUpperCase();
HXLINE( 655)				 ::flixel::_hx_system::FlxSound sound = null();
HXLINE( 656)				::String _hx_switch_0 = easteregg;
            				if (  (_hx_switch_0==HX_("BBPANZU",78,33,57,57)) ){
HXLINE( 665)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 665)					sound = sound1->play(::Paths_obj::sound(HX_("JingleBB",51,0b,1a,28),null()),null(),null(),null(),null(),null());
HXDLIN( 665)					goto _hx_goto_31;
            				}
            				if (  (_hx_switch_0==HX_("RIVER",ec,a2,5d,67)) ){
HXLINE( 659)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 659)					sound = sound1->play(::Paths_obj::sound(HX_("JingleRiver",fb,99,93,2f),null()),null(),null(),null(),null(),null());
HXDLIN( 659)					goto _hx_goto_31;
            				}
            				if (  (_hx_switch_0==HX_("SHADOW",e0,73,a3,cf)) ){
HXLINE( 663)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 663)					_hx_tmp->play(::Paths_obj::sound(HX_("JingleShadow",11,aa,a5,36),null()),null(),null(),null(),null(),null());
HXDLIN( 663)					goto _hx_goto_31;
            				}
            				if (  (_hx_switch_0==HX_("SHUBS",f1,3b,1a,fa)) ){
HXLINE( 661)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 661)					sound = sound1->play(::Paths_obj::sound(HX_("JingleShubs",00,33,50,c2),null()),null(),null(),null(),null(),null());
HXDLIN( 661)					goto _hx_goto_31;
            				}
            				/* default */{
HXLINE( 668)					this->remove(this->ngSpr,null());
HXLINE( 669)					this->remove(this->credGroup,null());
HXLINE( 670)					::flixel::FlxG_obj::camera->flash(-1,2,null(),null());
HXLINE( 671)					this->skippedIntro = true;
HXLINE( 672)					::TitleState_obj::playJingle = false;
HXLINE( 674)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 674)					::String library = null();
HXDLIN( 674)					 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 674)					_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 675)					{
HXLINE( 675)						 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 675)						 ::Dynamic onComplete = null();
HXDLIN( 675)						if (::hx::IsNull( _this->_channel )) {
HXLINE( 675)							_this->play(null(),null(),null());
            						}
HXDLIN( 675)						if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 675)							_this->fadeTween->cancel();
            						}
HXDLIN( 675)						_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            					}
HXLINE( 676)					return;
            				}
            				_hx_goto_31:;
HXLINE( 679)				this->transitioning = true;
HXLINE( 680)				if ((easteregg == HX_("SHADOW",e0,73,a3,cf))) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_683_skipIntro)
HXLINE( 684)						_gthis->remove(_gthis->ngSpr,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 685)						_gthis->remove(_gthis->credGroup,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 686)						::flixel::FlxG_obj::camera->flash(-1,((Float)0.6),null(),null());
HXLINE( 687)						_gthis->transitioning = false;
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 682)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)3.2), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::TitleState,_gthis) HXARGC(0)
            					void _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_695_skipIntro)
HXLINE( 696)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 696)						::String library = null();
HXDLIN( 696)						 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 696)						_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 697)						{
HXLINE( 697)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 697)							 ::Dynamic onComplete = null();
HXDLIN( 697)							if (::hx::IsNull( _this->_channel )) {
HXLINE( 697)								_this->play(null(),null(),null());
            							}
HXDLIN( 697)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 697)								_this->fadeTween->cancel();
            							}
HXDLIN( 697)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
HXLINE( 698)						_gthis->transitioning = false;
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 692)					this->remove(this->ngSpr,null());
HXLINE( 693)					this->remove(this->credGroup,null());
HXLINE( 694)					::flixel::FlxG_obj::camera->flash(-1,3,null(),null());
HXLINE( 695)					sound->onComplete =  ::Dynamic(new _hx_Closure_1(_gthis));
            				}
HXLINE( 701)				::TitleState_obj::playJingle = false;
            			}
            			else {
HXLINE( 705)				this->remove(this->ngSpr,null());
HXLINE( 706)				this->remove(this->credGroup,null());
HXLINE( 707)				::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 709)				::String easteregg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 710)				if (::hx::IsNull( easteregg )) {
HXLINE( 710)					easteregg = HX_("",00,00,00,00);
            				}
HXLINE( 711)				easteregg = easteregg.toUpperCase();
HXLINE( 713)				if ((easteregg == HX_("SHADOW",e0,73,a3,cf))) {
HXLINE( 715)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 715)					 ::Dynamic onComplete = null();
HXDLIN( 715)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 715)						_this->fadeTween->cancel();
            					}
HXDLIN( 715)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),( (Float)(1) ), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
            			}
HXLINE( 719)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

::Array< int > TitleState_obj::muteKeys;

::Array< int > TitleState_obj::volumeDownKeys;

::Array< int > TitleState_obj::volumeUpKeys;

bool TitleState_obj::initialized;

::String TitleState_obj::updateVersion;

bool TitleState_obj::playJingle;

bool TitleState_obj::closedState;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(ngSpr,"ngSpr");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(easterEggKeys,"easterEggKeys");
	HX_MARK_MEMBER_NAME(allowedKeys,"allowedKeys");
	HX_MARK_MEMBER_NAME(easterEggKeysBuffer,"easterEggKeysBuffer");
	HX_MARK_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_MARK_MEMBER_NAME(titleJSON,"titleJSON");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(swagShader,"swagShader");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(sickBeats,"sickBeats");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	HX_MARK_MEMBER_NAME(increaseVolume,"increaseVolume");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(ngSpr,"ngSpr");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(easterEggKeys,"easterEggKeys");
	HX_VISIT_MEMBER_NAME(allowedKeys,"allowedKeys");
	HX_VISIT_MEMBER_NAME(easterEggKeysBuffer,"easterEggKeysBuffer");
	HX_VISIT_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_VISIT_MEMBER_NAME(titleJSON,"titleJSON");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(swagShader,"swagShader");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(sickBeats,"sickBeats");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	HX_VISIT_MEMBER_NAME(increaseVolume,"increaseVolume");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { return ::hx::Val( ngSpr ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"titleJSON") ) { return ::hx::Val( titleJSON ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { return ::hx::Val( sickBeats ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { return ::hx::Val( mustUpdate ); }
		if (HX_FIELD_EQ(inName,"swagShader") ) { return ::hx::Val( swagShader ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"allowedKeys") ) { return ::hx::Val( allowedKeys ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"easterEggKeys") ) { return ::hx::Val( easterEggKeys ); }
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"increaseVolume") ) { return ::hx::Val( increaseVolume ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"easterEggKeysBuffer") ) { return ::hx::Val( easterEggKeysBuffer ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { outValue = ( muteKeys ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playJingle") ) { outValue = ( playJingle ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { outValue = ( closedState ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { outValue = ( volumeUpKeys ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { outValue = ( updateVersion ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { outValue = ( volumeDownKeys ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { ngSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleJSON") ) { titleJSON=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { sickBeats=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { mustUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagShader") ) { swagShader=inValue.Cast<  ::ColorSwap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowedKeys") ) { allowedKeys=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"easterEggKeys") ) { easterEggKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"increaseVolume") ) { increaseVolume=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"easterEggKeysBuffer") ) { easterEggKeysBuffer=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playJingle") ) { playJingle=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { closedState=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { updateVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("ngSpr",7c,26,68,9a));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("easterEggKeys",cf,c5,08,0a));
	outFields->push(HX_("allowedKeys",3c,b3,e0,3a));
	outFields->push(HX_("easterEggKeysBuffer",2f,bc,6e,e9));
	outFields->push(HX_("mustUpdate",f2,14,07,8d));
	outFields->push(HX_("titleJSON",c0,cb,fa,69));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("swagShader",4f,e1,a0,28));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("sickBeats",9f,58,9e,58));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	outFields->push(HX_("increaseVolume",3c,17,43,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,ngSpr),HX_("ngSpr",7c,26,68,9a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,easterEggKeys),HX_("easterEggKeys",cf,c5,08,0a)},
	{::hx::fsString,(int)offsetof(TitleState_obj,allowedKeys),HX_("allowedKeys",3c,b3,e0,3a)},
	{::hx::fsString,(int)offsetof(TitleState_obj,easterEggKeysBuffer),HX_("easterEggKeysBuffer",2f,bc,6e,e9)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,mustUpdate),HX_("mustUpdate",f2,14,07,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TitleState_obj,titleJSON),HX_("titleJSON",c0,cb,fa,69)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(TitleState_obj,swagShader),HX_("swagShader",4f,e1,a0,28)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsInt,(int)offsetof(TitleState_obj,sickBeats),HX_("sickBeats",9f,58,9e,58)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,increaseVolume),HX_("increaseVolume",3c,17,43,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::muteKeys,HX_("muteKeys",6d,5d,88,16)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeDownKeys,HX_("volumeDownKeys",70,2f,58,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeUpKeys,HX_("volumeUpKeys",69,bb,f5,23)},
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsString,(void *) &TitleState_obj::updateVersion,HX_("updateVersion",0f,4c,60,48)},
	{::hx::fsBool,(void *) &TitleState_obj::playJingle,HX_("playJingle",45,b8,ae,c6)},
	{::hx::fsBool,(void *) &TitleState_obj::closedState,HX_("closedState",c5,ac,a4,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("ngSpr",7c,26,68,9a),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("easterEggKeys",cf,c5,08,0a),
	HX_("allowedKeys",3c,b3,e0,3a),
	HX_("easterEggKeysBuffer",2f,bc,6e,e9),
	HX_("mustUpdate",f2,14,07,8d),
	HX_("titleJSON",c0,cb,fa,69),
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("gfDance",94,88,3a,eb),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("swagShader",4f,e1,a0,28),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("sickBeats",9f,58,9e,58),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("increaseVolume",3c,17,43,1a),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_MARK_MEMBER_NAME(TitleState_obj::playJingle,"playJingle");
	HX_MARK_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_VISIT_MEMBER_NAME(TitleState_obj::playJingle,"playJingle");
	HX_VISIT_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("muteKeys",6d,5d,88,16),
	HX_("volumeDownKeys",70,2f,58,0b),
	HX_("volumeUpKeys",69,bb,f5,23),
	HX_("initialized",14,f5,0f,37),
	HX_("updateVersion",0f,4c,60,48),
	HX_("playJingle",45,b8,ae,c6),
	HX_("closedState",c5,ac,a4,98),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_54_boot)
HXDLIN(  54)		muteKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_36,1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_55_boot)
HXDLIN(  55)		volumeDownKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_38,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_56_boot)
HXDLIN(  56)		volumeUpKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_40,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_58_boot)
HXDLIN(  58)		initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_82_boot)
HXDLIN(  82)		updateVersion = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_403_boot)
HXDLIN( 403)		playJingle = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_558_boot)
HXDLIN( 558)		closedState = false;
            	}
}

