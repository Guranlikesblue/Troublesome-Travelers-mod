#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
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
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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
#ifndef INCLUDED_options_NotesSubState
#include <options/NotesSubState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_13db6fe15635f7e3_30_new,"options.NotesSubState","new",0xf0ea0e94,"options.NotesSubState.new","options/NotesSubState.hx",30,0x2831b15d)
static const ::String _hx_array_data_0afa74a2_2[] = {
	HX_("purple0",74,7e,2d,e7),HX_("blue0",56,04,01,b5),HX_("green0",0d,dc,7f,15),HX_("red0",bf,4d,a7,4b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_95_update,"options.NotesSubState","update",0xb5c92055,"options.NotesSubState.update","options/NotesSubState.hx",95,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_190_changeSelection,"options.NotesSubState","changeSelection",0x8bca54f0,"options.NotesSubState.changeSelection","options/NotesSubState.hx",190,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_221_changeType,"options.NotesSubState","changeType",0xeb5ed896,"options.NotesSubState.changeType","options/NotesSubState.hx",221,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_240_resetValue,"options.NotesSubState","resetValue",0xde61676e,"options.NotesSubState.resetValue","options/NotesSubState.hx",240,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_253_updateValue,"options.NotesSubState","updateValue",0xde5e7adc,"options.NotesSubState.updateValue","options/NotesSubState.hx",253,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_32_boot,"options.NotesSubState","boot",0xd3fbb37e,"options.NotesSubState.boot","options/NotesSubState.hx",32,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_33_boot,"options.NotesSubState","boot",0xd3fbb37e,"options.NotesSubState.boot","options/NotesSubState.hx",33,0x2831b15d)
namespace options{

void NotesSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_13db6fe15635f7e3_30_new)
HXLINE(  94)		this->changingNote = false;
HXLINE(  44)		this->posX = 230;
HXLINE(  39)		this->nextAccept = 5;
HXLINE(  38)		this->holdTime = ((Float)0);
HXLINE(  37)		this->curValue = ((Float)0);
HXLINE(  36)		this->shaderArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		super::__construct();
HXLINE(  48)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  48)		::String library = null();
HXDLIN(  48)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("menuDesat",26,91,04,72),library);
HXDLIN(  48)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  49)		bg1->set_color(-1412611);
HXLINE(  50)		bg1->screenCenter(null());
HXLINE(  51)		bg1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  52)		this->add(bg1);
HXLINE(  54)		this->blackBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->posX - 25),null(),null())->makeGraphic(870,200,-16777216,null(),null());
HXLINE(  55)		this->blackBG->set_alpha(((Float)0.4));
HXLINE(  56)		this->add(this->blackBG);
HXLINE(  58)		this->grpNotes =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  59)		this->add(this->grpNotes);
HXLINE(  60)		this->grpNumbers =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  61)		this->add(this->grpNumbers);
HXLINE(  63)		{
HXLINE(  63)			int _g = 0;
HXDLIN(  63)			int _g1 = ::ClientPrefs_obj::arrowHSV->length;
HXDLIN(  63)			while((_g < _g1)){
HXLINE(  63)				_g = (_g + 1);
HXDLIN(  63)				int i = (_g - 1);
HXLINE(  64)				Float yPos = ( (Float)(((165 * i) + 35)) );
HXLINE(  65)				{
HXLINE(  65)					{
HXLINE(  66)						 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(yPos + 60),::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)),true,null(),null(),null());
HXLINE(  67)						optionText->set_x(( (Float)((this->posX + 250)) ));
HXLINE(  68)						this->grpNumbers->add(optionText).StaticCast<  ::Alphabet >();
            					}
HXLINE(  65)					{
HXLINE(  66)						 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(yPos + 60),::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)),true,null(),null(),null());
HXLINE(  67)						optionText1->set_x(( (Float)(((this->posX + 225) + 250)) ));
HXLINE(  68)						this->grpNumbers->add(optionText1).StaticCast<  ::Alphabet >();
            					}
HXLINE(  65)					{
HXLINE(  66)						 ::Alphabet optionText2 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(yPos + 60),::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)),true,null(),null(),null());
HXLINE(  67)						optionText2->set_x(( (Float)(((this->posX + 450) + 250)) ));
HXLINE(  68)						this->grpNumbers->add(optionText2).StaticCast<  ::Alphabet >();
            					}
            				}
HXLINE(  71)				 ::flixel::FlxSprite note =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->posX,yPos,null());
HXLINE(  72)				::String library = null();
HXDLIN(  72)				 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("NOTE_assets",70,3c,09,f7),null());
HXDLIN(  72)				bool xmlExists = false;
HXDLIN(  72)				if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  72)					xmlExists = true;
            				}
HXDLIN(  72)				 ::Dynamic _hx_tmp;
HXDLIN(  72)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  72)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  72)					 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("NOTE_assets",70,3c,09,f7),library);
HXDLIN(  72)					_hx_tmp = returnAsset;
            				}
HXDLIN(  72)				::String _hx_tmp1;
HXDLIN(  72)				if (xmlExists) {
HXLINE(  72)					_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))));
            				}
            				else {
HXLINE(  72)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            				}
HXDLIN(  72)				note->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  73)				::Array< ::String > animations = ::Array_obj< ::String >::fromData( _hx_array_data_0afa74a2_2,4);
HXLINE(  74)				note->animation->addByPrefix(HX_("idle",14,a7,b3,45),animations->__get(i),null(),null(),null(),null());
HXLINE(  75)				note->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  76)				note->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  77)				this->grpNotes->add(note).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  79)				 ::ColorSwap newShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE(  80)				note->shader = newShader->shader;
HXLINE(  81)				newShader->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE(  82)				newShader->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE(  83)				newShader->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
HXLINE(  84)				this->shaderArray->push(newShader);
            			}
            		}
HXLINE(  87)		this->hsbText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("Hue    Saturation  Brightness",7b,47,68,9c),false,false,0,((Float)0.65));
HXLINE(  88)		this->hsbText->set_x(( (Float)((this->posX + 240)) ));
HXLINE(  89)		this->add(this->hsbText);
HXLINE(  91)		this->changeSelection(null());
            	}

Dynamic NotesSubState_obj::__CreateEmpty() { return new NotesSubState_obj; }

void *NotesSubState_obj::_hx_vtable = 0;

Dynamic NotesSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotesSubState_obj > _hx_result = new NotesSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotesSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x1154fc14) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1154fc14;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void NotesSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_95_update)
HXLINE(  96)		if (this->changingNote) {
HXLINE(  97)			if ((this->holdTime < ((Float)0.5))) {
HXLINE(  98)				if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE(  99)					this->updateValue(-1);
HXLINE( 100)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 100)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 101)					if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 102)						this->updateValue(1);
HXLINE( 103)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 103)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            					else {
HXLINE( 104)						if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 105)							this->resetValue(::options::NotesSubState_obj::curSelected,::options::NotesSubState_obj::typeSelected);
HXLINE( 106)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 106)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            					}
            				}
HXLINE( 108)				bool _hx_tmp;
HXDLIN( 108)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 108)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 108)					_hx_tmp = true;
            				}
HXDLIN( 108)				if (_hx_tmp) {
HXLINE( 109)					this->holdTime = ( (Float)(0) );
            				}
            				else {
HXLINE( 110)					bool _hx_tmp;
HXDLIN( 110)					if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 110)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            					}
            					else {
HXLINE( 110)						_hx_tmp = true;
            					}
HXDLIN( 110)					if (_hx_tmp) {
HXLINE( 111)						 ::options::NotesSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 111)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            			}
            			else {
HXLINE( 114)				Float add = ( (Float)(90) );
HXLINE( 115)				switch((int)(::options::NotesSubState_obj::typeSelected)){
            					case (int)1: case (int)2: {
HXLINE( 116)						add = ( (Float)(50) );
            					}
            					break;
            				}
HXLINE( 118)				if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 119)					this->updateValue((elapsed * -(add)));
            				}
            				else {
HXLINE( 120)					if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 121)						this->updateValue((elapsed * add));
            					}
            				}
HXLINE( 123)				bool _hx_tmp;
HXDLIN( 123)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 123)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 123)					_hx_tmp = true;
            				}
HXDLIN( 123)				if (_hx_tmp) {
HXLINE( 124)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 124)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 125)					this->holdTime = ( (Float)(0) );
            				}
            			}
            		}
            		else {
HXLINE( 129)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 130)				this->changeSelection(-1);
HXLINE( 131)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 131)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 133)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 134)				this->changeSelection(1);
HXLINE( 135)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 135)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 137)			if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 138)				this->changeType(-1);
HXLINE( 139)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 139)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 141)			if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 142)				this->changeType(1);
HXLINE( 143)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 143)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 145)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 146)				{
HXLINE( 147)					this->resetValue(::options::NotesSubState_obj::curSelected,0);
HXDLIN( 147)					this->resetValue(::options::NotesSubState_obj::curSelected,1);
HXDLIN( 147)					this->resetValue(::options::NotesSubState_obj::curSelected,2);
            				}
HXLINE( 149)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 149)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 151)			bool _hx_tmp;
HXDLIN( 151)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 151)				_hx_tmp = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 151)				_hx_tmp = false;
            			}
HXDLIN( 151)			if (_hx_tmp) {
HXLINE( 152)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 152)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 153)				this->changingNote = true;
HXLINE( 154)				this->holdTime = ( (Float)(0) );
HXLINE( 155)				{
HXLINE( 155)					int _g = 0;
HXDLIN( 155)					int _g1 = this->grpNumbers->length;
HXDLIN( 155)					while((_g < _g1)){
HXLINE( 155)						_g = (_g + 1);
HXDLIN( 155)						int i = (_g - 1);
HXLINE( 156)						 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 157)						item->set_alpha(( (Float)(0) ));
HXLINE( 158)						if ((((::options::NotesSubState_obj::curSelected * 3) + ::options::NotesSubState_obj::typeSelected) == i)) {
HXLINE( 159)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 162)				{
HXLINE( 162)					int _g2 = 0;
HXDLIN( 162)					int _g3 = this->grpNotes->length;
HXDLIN( 162)					while((_g2 < _g3)){
HXLINE( 162)						_g2 = (_g2 + 1);
HXDLIN( 162)						int i = (_g2 - 1);
HXLINE( 163)						 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 164)						item->set_alpha(( (Float)(0) ));
HXLINE( 165)						if ((::options::NotesSubState_obj::curSelected == i)) {
HXLINE( 166)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 169)				this->super::update(elapsed);
HXLINE( 170)				return;
            			}
            		}
HXLINE( 174)		bool _hx_tmp;
HXDLIN( 174)		if (!(::PlayerSettings_obj::player1->controls->_back->check())) {
HXLINE( 174)			if (this->changingNote) {
HXLINE( 174)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_accept->check();
            			}
            			else {
HXLINE( 174)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 174)			_hx_tmp = true;
            		}
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 175)			if (!(this->changingNote)) {
HXLINE( 176)				this->close();
            			}
            			else {
HXLINE( 178)				this->changeSelection(null());
            			}
HXLINE( 180)			this->changingNote = false;
HXLINE( 181)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 181)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 184)		if ((this->nextAccept > 0)) {
HXLINE( 185)			 ::options::NotesSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 185)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 187)		this->super::update(elapsed);
            	}


void NotesSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_190_changeSelection)
HXLINE( 191)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::NotesSubState >();
HXDLIN( 191)		::options::NotesSubState_obj::curSelected = (::options::NotesSubState_obj::curSelected + change);
HXLINE( 192)		if ((::options::NotesSubState_obj::curSelected < 0)) {
HXLINE( 193)			::options::NotesSubState_obj::curSelected = (::ClientPrefs_obj::arrowHSV->length - 1);
            		}
HXLINE( 194)		if ((::options::NotesSubState_obj::curSelected >= ::ClientPrefs_obj::arrowHSV->length)) {
HXLINE( 195)			::options::NotesSubState_obj::curSelected = 0;
            		}
HXLINE( 197)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::options::NotesSubState_obj::curSelected).StaticCast< ::Array< int > >()->__get(::options::NotesSubState_obj::typeSelected)) );
HXLINE( 198)		this->updateValue(null());
HXLINE( 200)		{
HXLINE( 200)			int _g = 0;
HXDLIN( 200)			int _g1 = this->grpNumbers->length;
HXDLIN( 200)			while((_g < _g1)){
HXLINE( 200)				_g = (_g + 1);
HXDLIN( 200)				int i = (_g - 1);
HXLINE( 201)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 202)				item->set_alpha(((Float)0.6));
HXLINE( 203)				if ((((::options::NotesSubState_obj::curSelected * 3) + ::options::NotesSubState_obj::typeSelected) == i)) {
HXLINE( 204)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 207)		{
HXLINE( 207)			int _g2 = 0;
HXDLIN( 207)			int _g3 = this->grpNotes->length;
HXDLIN( 207)			while((_g2 < _g3)){
HXLINE( 207)				_g2 = (_g2 + 1);
HXDLIN( 207)				int i = (_g2 - 1);
HXLINE( 208)				 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 209)				item->set_alpha(((Float)0.6));
HXLINE( 210)				item->scale->set(((Float)0.75),((Float)0.75));
HXLINE( 211)				if ((::options::NotesSubState_obj::curSelected == i)) {
HXLINE( 212)					item->set_alpha(( (Float)(1) ));
HXLINE( 213)					item->scale->set(1,1);
HXLINE( 214)					this->hsbText->set_y((item->y - ( (Float)(70) )));
HXLINE( 215)					this->blackBG->set_y((item->y - ( (Float)(20) )));
            				}
            			}
            		}
HXLINE( 218)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 218)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubState_obj,changeSelection,(void))

void NotesSubState_obj::changeType(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_221_changeType)
HXLINE( 222)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::NotesSubState >();
HXDLIN( 222)		::options::NotesSubState_obj::typeSelected = (::options::NotesSubState_obj::typeSelected + change);
HXLINE( 223)		if ((::options::NotesSubState_obj::typeSelected < 0)) {
HXLINE( 224)			::options::NotesSubState_obj::typeSelected = 2;
            		}
HXLINE( 225)		if ((::options::NotesSubState_obj::typeSelected > 2)) {
HXLINE( 226)			::options::NotesSubState_obj::typeSelected = 0;
            		}
HXLINE( 228)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::options::NotesSubState_obj::curSelected).StaticCast< ::Array< int > >()->__get(::options::NotesSubState_obj::typeSelected)) );
HXLINE( 229)		this->updateValue(null());
HXLINE( 231)		{
HXLINE( 231)			int _g = 0;
HXDLIN( 231)			int _g1 = this->grpNumbers->length;
HXDLIN( 231)			while((_g < _g1)){
HXLINE( 231)				_g = (_g + 1);
HXDLIN( 231)				int i = (_g - 1);
HXLINE( 232)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 233)				item->set_alpha(((Float)0.6));
HXLINE( 234)				if ((((::options::NotesSubState_obj::curSelected * 3) + ::options::NotesSubState_obj::typeSelected) == i)) {
HXLINE( 235)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubState_obj,changeType,(void))

void NotesSubState_obj::resetValue(int selected,int type){
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_240_resetValue)
HXLINE( 241)		this->curValue = ( (Float)(0) );
HXLINE( 242)		::ClientPrefs_obj::arrowHSV->__get(selected).StaticCast< ::Array< int > >()[type] = 0;
HXLINE( 243)		switch((int)(type)){
            			case (int)0: {
HXLINE( 244)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_hue(( (Float)(0) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 245)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_saturation(( (Float)(0) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 246)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_brightness(( (Float)(0) ));
            			}
            			break;
            		}
HXLINE( 249)		 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(((selected * 3) + type))).StaticCast<  ::Alphabet >();
HXLINE( 250)		item->changeText(HX_("0",30,00,00,00),null());
HXLINE( 251)		item->offset->set_x((( (Float)((40 * (item->lettersArray->length - 1))) ) / ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC2(NotesSubState_obj,resetValue,(void))

void NotesSubState_obj::updateValue(::hx::Null< Float >  __o_change){
            		Float change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_253_updateValue)
HXLINE( 254)		 ::options::NotesSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)		_hx_tmp->curValue = (_hx_tmp->curValue + change);
HXLINE( 255)		int roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 256)		Float max = ( (Float)(180) );
HXLINE( 257)		switch((int)(::options::NotesSubState_obj::typeSelected)){
            			case (int)1: case (int)2: {
HXLINE( 258)				max = ( (Float)(100) );
            			}
            			break;
            		}
HXLINE( 261)		if ((roundedValue < -(max))) {
HXLINE( 262)			this->curValue = -(max);
            		}
            		else {
HXLINE( 263)			if ((roundedValue > max)) {
HXLINE( 264)				this->curValue = max;
            			}
            		}
HXLINE( 266)		roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 267)		::ClientPrefs_obj::arrowHSV->__get(::options::NotesSubState_obj::curSelected).StaticCast< ::Array< int > >()[::options::NotesSubState_obj::typeSelected] = roundedValue;
HXLINE( 269)		switch((int)(::options::NotesSubState_obj::typeSelected)){
            			case (int)0: {
HXLINE( 270)				this->shaderArray->__get(::options::NotesSubState_obj::curSelected).StaticCast<  ::ColorSwap >()->set_hue((( (Float)(roundedValue) ) / ( (Float)(360) )));
            			}
            			break;
            			case (int)1: {
HXLINE( 271)				this->shaderArray->__get(::options::NotesSubState_obj::curSelected).StaticCast<  ::ColorSwap >()->set_saturation((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            			case (int)2: {
HXLINE( 272)				this->shaderArray->__get(::options::NotesSubState_obj::curSelected).StaticCast<  ::ColorSwap >()->set_brightness((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            		}
HXLINE( 275)		 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(((::options::NotesSubState_obj::curSelected * 3) + ::options::NotesSubState_obj::typeSelected))).StaticCast<  ::Alphabet >();
HXLINE( 276)		item->changeText(::Std_obj::string(roundedValue),null());
HXLINE( 277)		item->offset->set_x((( (Float)((40 * (item->lettersArray->length - 1))) ) / ( (Float)(2) )));
HXLINE( 278)		if ((roundedValue < 0)) {
HXLINE( 278)			 ::flixel::math::FlxPoint fh = item->offset;
HXDLIN( 278)			fh->set_x((fh->x + 10));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubState_obj,updateValue,(void))

int NotesSubState_obj::curSelected;

int NotesSubState_obj::typeSelected;


::hx::ObjectPtr< NotesSubState_obj > NotesSubState_obj::__new() {
	::hx::ObjectPtr< NotesSubState_obj > __this = new NotesSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NotesSubState_obj > NotesSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NotesSubState_obj *__this = (NotesSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotesSubState_obj), true, "options.NotesSubState"));
	*(void **)__this = NotesSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NotesSubState_obj::NotesSubState_obj()
{
}

void NotesSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotesSubState);
	HX_MARK_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_MARK_MEMBER_NAME(grpNotes,"grpNotes");
	HX_MARK_MEMBER_NAME(shaderArray,"shaderArray");
	HX_MARK_MEMBER_NAME(curValue,"curValue");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(blackBG,"blackBG");
	HX_MARK_MEMBER_NAME(hsbText,"hsbText");
	HX_MARK_MEMBER_NAME(posX,"posX");
	HX_MARK_MEMBER_NAME(changingNote,"changingNote");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NotesSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_VISIT_MEMBER_NAME(grpNotes,"grpNotes");
	HX_VISIT_MEMBER_NAME(shaderArray,"shaderArray");
	HX_VISIT_MEMBER_NAME(curValue,"curValue");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(blackBG,"blackBG");
	HX_VISIT_MEMBER_NAME(hsbText,"hsbText");
	HX_VISIT_MEMBER_NAME(posX,"posX");
	HX_VISIT_MEMBER_NAME(changingNote,"changingNote");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NotesSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { return ::hx::Val( posX ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blackBG") ) { return ::hx::Val( blackBG ); }
		if (HX_FIELD_EQ(inName,"hsbText") ) { return ::hx::Val( hsbText ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { return ::hx::Val( grpNotes ); }
		if (HX_FIELD_EQ(inName,"curValue") ) { return ::hx::Val( curValue ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { return ::hx::Val( grpNumbers ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"changeType") ) { return ::hx::Val( changeType_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetValue") ) { return ::hx::Val( resetValue_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { return ::hx::Val( shaderArray ); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return ::hx::Val( updateValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { return ::hx::Val( changingNote ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NotesSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { outValue = ( typeSelected ); return true; }
	}
	return false;
}

::hx::Val NotesSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { posX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blackBG") ) { blackBG=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hsbText") ) { hsbText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { grpNotes=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curValue") ) { curValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { grpNumbers=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { shaderArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { changingNote=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NotesSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { typeSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void NotesSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpNumbers",25,7c,95,ca));
	outFields->push(HX_("grpNotes",1c,82,cb,82));
	outFields->push(HX_("shaderArray",34,18,bc,fc));
	outFields->push(HX_("curValue",d1,79,66,79));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("blackBG",44,3d,62,35));
	outFields->push(HX_("hsbText",44,8f,da,84));
	outFields->push(HX_("posX",44,84,5c,4a));
	outFields->push(HX_("changingNote",3f,d5,59,d6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NotesSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubState_obj,grpNumbers),HX_("grpNumbers",25,7c,95,ca)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubState_obj,grpNotes),HX_("grpNotes",1c,82,cb,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NotesSubState_obj,shaderArray),HX_("shaderArray",34,18,bc,fc)},
	{::hx::fsFloat,(int)offsetof(NotesSubState_obj,curValue),HX_("curValue",d1,79,66,79)},
	{::hx::fsFloat,(int)offsetof(NotesSubState_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsInt,(int)offsetof(NotesSubState_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(NotesSubState_obj,blackBG),HX_("blackBG",44,3d,62,35)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(NotesSubState_obj,hsbText),HX_("hsbText",44,8f,da,84)},
	{::hx::fsInt,(int)offsetof(NotesSubState_obj,posX),HX_("posX",44,84,5c,4a)},
	{::hx::fsBool,(int)offsetof(NotesSubState_obj,changingNote),HX_("changingNote",3f,d5,59,d6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NotesSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &NotesSubState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(void *) &NotesSubState_obj::typeSelected,HX_("typeSelected",35,23,d0,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NotesSubState_obj_sMemberFields[] = {
	HX_("grpNumbers",25,7c,95,ca),
	HX_("grpNotes",1c,82,cb,82),
	HX_("shaderArray",34,18,bc,fc),
	HX_("curValue",d1,79,66,79),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("nextAccept",5b,44,38,c0),
	HX_("blackBG",44,3d,62,35),
	HX_("hsbText",44,8f,da,84),
	HX_("posX",44,84,5c,4a),
	HX_("changingNote",3f,d5,59,d6),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeType",4a,28,52,27),
	HX_("resetValue",22,b7,54,1a),
	HX_("updateValue",a8,e8,50,17),
	::String(null()) };

static void NotesSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotesSubState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(NotesSubState_obj::typeSelected,"typeSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotesSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotesSubState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(NotesSubState_obj::typeSelected,"typeSelected");
};

#endif

::hx::Class NotesSubState_obj::__mClass;

static ::String NotesSubState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("typeSelected",35,23,d0,98),
	::String(null())
};

void NotesSubState_obj::__register()
{
	NotesSubState_obj _hx_dummy;
	NotesSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.NotesSubState",a2,74,fa,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NotesSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &NotesSubState_obj::__SetStatic;
	__mClass->mMarkFunc = NotesSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NotesSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotesSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotesSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotesSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotesSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotesSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NotesSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_32_boot)
HXDLIN(  32)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_33_boot)
HXDLIN(  33)		typeSelected = 0;
            	}
}

} // end namespace options
