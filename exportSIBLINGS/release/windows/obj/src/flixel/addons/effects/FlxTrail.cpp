#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_54e0b0e195bf849b_20_new,"flixel.addons.effects.FlxTrail","new",0xad9a4c7b,"flixel.addons.effects.FlxTrail.new","flixel/addons/effects/FlxTrail.hx",20,0x79f2ead4)
HX_LOCAL_STACK_FRAME(_hx_pos_54e0b0e195bf849b_124_destroy,"flixel.addons.effects.FlxTrail","destroy",0x288c5295,"flixel.addons.effects.FlxTrail.destroy","flixel/addons/effects/FlxTrail.hx",124,0x79f2ead4)
HX_LOCAL_STACK_FRAME(_hx_pos_54e0b0e195bf849b_147_update,"flixel.addons.effects.FlxTrail","update",0xf1cd4cce,"flixel.addons.effects.FlxTrail.update","flixel/addons/effects/FlxTrail.hx",147,0x79f2ead4)
HX_LOCAL_STACK_FRAME(_hx_pos_54e0b0e195bf849b_245_cacheValue,"flixel.addons.effects.FlxTrail","cacheValue",0x1383f314,"flixel.addons.effects.FlxTrail.cacheValue","flixel/addons/effects/FlxTrail.hx",245,0x79f2ead4)
HX_LOCAL_STACK_FRAME(_hx_pos_54e0b0e195bf849b_251_resetTrail,"flixel.addons.effects.FlxTrail","resetTrail",0x9dced8bc,"flixel.addons.effects.FlxTrail.resetTrail","flixel/addons/effects/FlxTrail.hx",251,0x79f2ead4)
HX_LOCAL_STACK_FRAME(_hx_pos_54e0b0e195bf849b_275_increaseLength,"flixel.addons.effects.FlxTrail","increaseLength",0x6ebb160d,"flixel.addons.effects.FlxTrail.increaseLength","flixel/addons/effects/FlxTrail.hx",275,0x79f2ead4)
HX_LOCAL_STACK_FRAME(_hx_pos_54e0b0e195bf849b_317_changeGraphic,"flixel.addons.effects.FlxTrail","changeGraphic",0x690acaf3,"flixel.addons.effects.FlxTrail.changeGraphic","flixel/addons/effects/FlxTrail.hx",317,0x79f2ead4)
HX_LOCAL_STACK_FRAME(_hx_pos_54e0b0e195bf849b_335_changeValuesEnabled,"flixel.addons.effects.FlxTrail","changeValuesEnabled",0x328b834a,"flixel.addons.effects.FlxTrail.changeValuesEnabled","flixel/addons/effects/FlxTrail.hx",335,0x79f2ead4)
namespace flixel{
namespace addons{
namespace effects{

void FlxTrail_obj::__construct( ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< int >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff){
            		int Length = __o_Length.Default(10);
            		int Delay = __o_Delay.Default(3);
            		Float Alpha = __o_Alpha.Default(((Float)0.4));
            		Float Diff = __o_Diff.Default(((Float)0.05));
            	HX_STACKFRAME(&_hx_pos_54e0b0e195bf849b_20_new)
HXLINE(  88)		this->_recentAnimations = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  87)		this->_recentFlipY = ::Array_obj< bool >::__new(0);
HXLINE(  86)		this->_recentFlipX = ::Array_obj< bool >::__new(0);
HXLINE(  85)		this->_recentFrames = ::Array_obj< int >::__new(0);
HXLINE(  84)		this->_recentScales = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  83)		this->_recentAngles = ::Array_obj< Float >::__new(0);
HXLINE(  82)		this->_recentPositions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  75)		this->_transp = ((Float)1);
HXLINE(  65)		this->_trailLength = 0;
HXLINE(  60)		this->_counter = 0;
HXLINE(  55)		this->framesEnabled = true;
HXLINE(  50)		this->scalesEnabled = true;
HXLINE(  45)		this->rotationsEnabled = true;
HXLINE(  40)		this->yEnabled = true;
HXLINE(  35)		this->xEnabled = true;
HXLINE( 107)		super::__construct(null(),null(),null());
HXLINE( 109)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 109)		point->_inPool = false;
HXDLIN( 109)		 ::flixel::math::FlxPoint _this = point;
HXDLIN( 109)		 ::flixel::math::FlxPoint point1 = Target->origin;
HXDLIN( 109)		_this->set_x(point1->x);
HXDLIN( 109)		_this->set_y(point1->y);
HXDLIN( 109)		if (point1->_weak) {
HXLINE( 109)			point1->put();
            		}
HXDLIN( 109)		this->_spriteOrigin = _this;
HXLINE( 112)		this->target = Target;
HXLINE( 113)		this->delay = Delay;
HXLINE( 114)		this->_graphic = Graphic;
HXLINE( 115)		this->_transp = Alpha;
HXLINE( 116)		this->_difference = Diff;
HXLINE( 119)		this->increaseLength(Length);
HXLINE( 120)		this->set_solid(false);
            	}

Dynamic FlxTrail_obj::__CreateEmpty() { return new FlxTrail_obj; }

void *FlxTrail_obj::_hx_vtable = 0;

Dynamic FlxTrail_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTrail_obj > _hx_result = new FlxTrail_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxTrail_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x1dbd5e03) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1dbd5e03;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTrail_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_54e0b0e195bf849b_124_destroy)
HXLINE( 125)		::flixel::util::FlxDestroyUtil_obj::putArray(this->_recentPositions);
HXLINE( 126)		::flixel::util::FlxDestroyUtil_obj::putArray(this->_recentScales);
HXLINE( 128)		this->_recentAngles = null();
HXLINE( 129)		this->_recentPositions = null();
HXLINE( 130)		this->_recentScales = null();
HXLINE( 131)		this->_recentFrames = null();
HXLINE( 132)		this->_recentFlipX = null();
HXLINE( 133)		this->_recentFlipY = null();
HXLINE( 134)		this->_recentAnimations = null();
HXLINE( 135)		this->_spriteOrigin = null();
HXLINE( 137)		this->target = null();
HXLINE( 138)		this->_graphic = null();
HXLINE( 140)		this->super::destroy();
            	}


void FlxTrail_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_54e0b0e195bf849b_147_update)
HXLINE( 149)		this->_counter++;
HXLINE( 152)		bool _hx_tmp;
HXDLIN( 152)		if ((this->_counter >= this->delay)) {
HXLINE( 152)			_hx_tmp = (this->_trailLength >= 1);
            		}
            		else {
HXLINE( 152)			_hx_tmp = false;
            		}
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 154)			this->_counter = 0;
HXLINE( 157)			 ::flixel::math::FlxPoint spritePosition = null();
HXLINE( 158)			if ((this->_recentPositions->length == this->_trailLength)) {
HXLINE( 160)				spritePosition = this->_recentPositions->pop().StaticCast<  ::flixel::math::FlxPoint >();
            			}
            			else {
HXLINE( 164)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 164)				point->_inPool = false;
HXDLIN( 164)				spritePosition = point;
            			}
HXLINE( 167)			spritePosition->set((this->target->x - this->target->offset->x),(this->target->y - this->target->offset->y));
HXLINE( 168)			this->_recentPositions->unshift(spritePosition);
HXLINE( 171)			if (this->rotationsEnabled) {
HXLINE( 173)				this->cacheValue(this->_recentAngles,this->target->angle);
            			}
HXLINE( 177)			if (this->scalesEnabled) {
HXLINE( 179)				 ::flixel::math::FlxPoint spriteScale = null();
HXLINE( 180)				if ((this->_recentScales->length == this->_trailLength)) {
HXLINE( 182)					spriteScale = this->_recentScales->pop().StaticCast<  ::flixel::math::FlxPoint >();
            				}
            				else {
HXLINE( 186)					 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 186)					point->_inPool = false;
HXDLIN( 186)					spriteScale = point;
            				}
HXLINE( 189)				spriteScale->set(this->target->scale->x,this->target->scale->y);
HXLINE( 190)				this->_recentScales->unshift(spriteScale);
            			}
HXLINE( 194)			bool _hx_tmp;
HXDLIN( 194)			if (this->framesEnabled) {
HXLINE( 194)				_hx_tmp = ::hx::IsNull( this->_graphic );
            			}
            			else {
HXLINE( 194)				_hx_tmp = false;
            			}
HXDLIN( 194)			if (_hx_tmp) {
HXLINE( 196)				this->cacheValue(this->_recentFrames,this->target->animation->frameIndex);
HXLINE( 197)				this->cacheValue(this->_recentFlipX,this->target->flipX);
HXLINE( 198)				this->cacheValue(this->_recentFlipY,this->target->flipY);
HXLINE( 199)				this->cacheValue(this->_recentAnimations,this->target->animation->_curAnim);
            			}
HXLINE( 203)			 ::flixel::FlxSprite trailSprite;
HXLINE( 205)			{
HXLINE( 205)				int _g = 0;
HXDLIN( 205)				int _g1 = this->_recentPositions->length;
HXDLIN( 205)				while((_g < _g1)){
HXLINE( 205)					_g = (_g + 1);
HXDLIN( 205)					int i = (_g - 1);
HXLINE( 207)					trailSprite = Dynamic( this->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 208)					trailSprite->set_x(this->_recentPositions->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x);
HXLINE( 209)					trailSprite->set_y(this->_recentPositions->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y);
HXLINE( 212)					if (this->rotationsEnabled) {
HXLINE( 214)						trailSprite->set_angle(this->_recentAngles->__get(i));
HXLINE( 215)						trailSprite->origin->set_x(this->_spriteOrigin->x);
HXLINE( 216)						trailSprite->origin->set_y(this->_spriteOrigin->y);
            					}
HXLINE( 220)					if (this->scalesEnabled) {
HXLINE( 222)						trailSprite->scale->set_x(this->_recentScales->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x);
HXLINE( 223)						trailSprite->scale->set_y(this->_recentScales->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y);
            					}
HXLINE( 227)					bool _hx_tmp;
HXDLIN( 227)					if (this->framesEnabled) {
HXLINE( 227)						_hx_tmp = ::hx::IsNull( this->_graphic );
            					}
            					else {
HXLINE( 227)						_hx_tmp = false;
            					}
HXDLIN( 227)					if (_hx_tmp) {
HXLINE( 229)						trailSprite->animation->set_frameIndex(this->_recentFrames->__get(i));
HXLINE( 230)						trailSprite->set_flipX(this->_recentFlipX->__get(i));
HXLINE( 231)						trailSprite->set_flipY(this->_recentFlipY->__get(i));
HXLINE( 233)						{
HXLINE( 233)							 ::flixel::animation::FlxAnimationController _this = trailSprite->animation;
HXDLIN( 233)							 ::flixel::animation::FlxAnimation Anim = this->_recentAnimations->__get(i).StaticCast<  ::flixel::animation::FlxAnimation >();
HXDLIN( 233)							if (::hx::IsInstanceNotEq( Anim,_this->_curAnim )) {
HXLINE( 233)								if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 233)									_this->_curAnim->stop();
            								}
HXDLIN( 233)								if (::hx::IsNotNull( Anim )) {
HXLINE( 233)									Anim->play(null(),null(),null());
            								}
            							}
HXDLIN( 233)							_this->_curAnim = Anim;
            						}
            					}
HXLINE( 237)					trailSprite->set_exists(true);
            				}
            			}
            		}
HXLINE( 241)		this->super::update(elapsed);
            	}


void FlxTrail_obj::cacheValue(::cpp::VirtualArray array, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_54e0b0e195bf849b_245_cacheValue)
HXLINE( 246)		array->unshift(value);
HXLINE( 247)		::flixel::util::FlxArrayUtil_obj::setLength_cacheValue_T(array,this->_trailLength);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTrail_obj,cacheValue,(void))

void FlxTrail_obj::resetTrail(){
            	HX_STACKFRAME(&_hx_pos_54e0b0e195bf849b_251_resetTrail)
HXLINE( 252)		this->_recentPositions->removeRange(0,this->_recentPositions->length);
HXLINE( 253)		this->_recentAngles->removeRange(0,this->_recentAngles->length);
HXLINE( 254)		this->_recentScales->removeRange(0,this->_recentScales->length);
HXLINE( 255)		this->_recentFrames->removeRange(0,this->_recentFrames->length);
HXLINE( 256)		this->_recentFlipX->removeRange(0,this->_recentFlipX->length);
HXLINE( 257)		this->_recentFlipY->removeRange(0,this->_recentFlipY->length);
HXLINE( 258)		this->_recentAnimations->removeRange(0,this->_recentAnimations->length);
HXLINE( 260)		{
HXLINE( 260)			int _g = 0;
HXDLIN( 260)			int _g1 = this->group->members->get_length();
HXDLIN( 260)			while((_g < _g1)){
HXLINE( 260)				_g = (_g + 1);
HXDLIN( 260)				int i = (_g - 1);
HXLINE( 262)				if (::hx::IsNotNull( Dynamic( this->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >() )) {
HXLINE( 264)					Dynamic( this->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->set_exists(false);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrail_obj,resetTrail,(void))

void FlxTrail_obj::increaseLength(int Amount){
            	HX_GC_STACKFRAME(&_hx_pos_54e0b0e195bf849b_275_increaseLength)
HXLINE( 277)		if ((Amount <= 0)) {
HXLINE( 279)			return;
            		}
HXLINE( 282)		 ::flixel::addons::effects::FlxTrail _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)		_hx_tmp->_trailLength = (_hx_tmp->_trailLength + Amount);
HXLINE( 285)		{
HXLINE( 285)			int _g = 0;
HXDLIN( 285)			int _g1 = Amount;
HXDLIN( 285)			while((_g < _g1)){
HXLINE( 285)				_g = (_g + 1);
HXDLIN( 285)				int i = (_g - 1);
HXLINE( 287)				 ::flixel::FlxSprite trailSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE( 289)				if (::hx::IsNull( this->_graphic )) {
HXLINE( 291)					trailSprite->loadGraphicFromSprite(this->target);
            				}
            				else {
HXLINE( 295)					trailSprite->loadGraphic(this->_graphic,null(),null(),null(),null(),null());
            				}
HXLINE( 297)				trailSprite->set_exists(false);
HXLINE( 298)				trailSprite->set_active(false);
HXLINE( 299)				this->add(trailSprite);
HXLINE( 300)				trailSprite->set_alpha(this->_transp);
HXLINE( 301)				 ::flixel::addons::effects::FlxTrail _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 301)				_hx_tmp->_transp = (_hx_tmp->_transp - this->_difference);
HXLINE( 302)				trailSprite->set_solid(((this->allowCollisions & 4369) > 0));
HXLINE( 304)				if ((trailSprite->alpha <= 0)) {
HXLINE( 306)					trailSprite->kill();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrail_obj,increaseLength,(void))

void FlxTrail_obj::changeGraphic( ::Dynamic Image){
            	HX_STACKFRAME(&_hx_pos_54e0b0e195bf849b_317_changeGraphic)
HXLINE( 318)		this->_graphic = Image;
HXLINE( 320)		{
HXLINE( 320)			int _g = 0;
HXDLIN( 320)			int _g1 = this->_trailLength;
HXDLIN( 320)			while((_g < _g1)){
HXLINE( 320)				_g = (_g + 1);
HXDLIN( 320)				int i = (_g - 1);
HXLINE( 322)				Dynamic( this->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->loadGraphic(Image,null(),null(),null(),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrail_obj,changeGraphic,(void))

void FlxTrail_obj::changeValuesEnabled(bool Angle,::hx::Null< bool >  __o_X,::hx::Null< bool >  __o_Y,::hx::Null< bool >  __o_Scale){
            		bool X = __o_X.Default(true);
            		bool Y = __o_Y.Default(true);
            		bool Scale = __o_Scale.Default(true);
            	HX_STACKFRAME(&_hx_pos_54e0b0e195bf849b_335_changeValuesEnabled)
HXLINE( 336)		this->rotationsEnabled = Angle;
HXLINE( 337)		this->xEnabled = X;
HXLINE( 338)		this->yEnabled = Y;
HXLINE( 339)		this->scalesEnabled = Scale;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTrail_obj,changeValuesEnabled,(void))


::hx::ObjectPtr< FlxTrail_obj > FlxTrail_obj::__new( ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< int >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff) {
	::hx::ObjectPtr< FlxTrail_obj > __this = new FlxTrail_obj();
	__this->__construct(Target,Graphic,__o_Length,__o_Delay,__o_Alpha,__o_Diff);
	return __this;
}

::hx::ObjectPtr< FlxTrail_obj > FlxTrail_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< int >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff) {
	FlxTrail_obj *__this = (FlxTrail_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTrail_obj), true, "flixel.addons.effects.FlxTrail"));
	*(void **)__this = FlxTrail_obj::_hx_vtable;
	__this->__construct(Target,Graphic,__o_Length,__o_Delay,__o_Alpha,__o_Diff);
	return __this;
}

FlxTrail_obj::FlxTrail_obj()
{
}

void FlxTrail_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTrail);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(xEnabled,"xEnabled");
	HX_MARK_MEMBER_NAME(yEnabled,"yEnabled");
	HX_MARK_MEMBER_NAME(rotationsEnabled,"rotationsEnabled");
	HX_MARK_MEMBER_NAME(scalesEnabled,"scalesEnabled");
	HX_MARK_MEMBER_NAME(framesEnabled,"framesEnabled");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_trailLength,"_trailLength");
	HX_MARK_MEMBER_NAME(_graphic,"_graphic");
	HX_MARK_MEMBER_NAME(_transp,"_transp");
	HX_MARK_MEMBER_NAME(_difference,"_difference");
	HX_MARK_MEMBER_NAME(_recentPositions,"_recentPositions");
	HX_MARK_MEMBER_NAME(_recentAngles,"_recentAngles");
	HX_MARK_MEMBER_NAME(_recentScales,"_recentScales");
	HX_MARK_MEMBER_NAME(_recentFrames,"_recentFrames");
	HX_MARK_MEMBER_NAME(_recentFlipX,"_recentFlipX");
	HX_MARK_MEMBER_NAME(_recentFlipY,"_recentFlipY");
	HX_MARK_MEMBER_NAME(_recentAnimations,"_recentAnimations");
	HX_MARK_MEMBER_NAME(_spriteOrigin,"_spriteOrigin");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTrail_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(xEnabled,"xEnabled");
	HX_VISIT_MEMBER_NAME(yEnabled,"yEnabled");
	HX_VISIT_MEMBER_NAME(rotationsEnabled,"rotationsEnabled");
	HX_VISIT_MEMBER_NAME(scalesEnabled,"scalesEnabled");
	HX_VISIT_MEMBER_NAME(framesEnabled,"framesEnabled");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_trailLength,"_trailLength");
	HX_VISIT_MEMBER_NAME(_graphic,"_graphic");
	HX_VISIT_MEMBER_NAME(_transp,"_transp");
	HX_VISIT_MEMBER_NAME(_difference,"_difference");
	HX_VISIT_MEMBER_NAME(_recentPositions,"_recentPositions");
	HX_VISIT_MEMBER_NAME(_recentAngles,"_recentAngles");
	HX_VISIT_MEMBER_NAME(_recentScales,"_recentScales");
	HX_VISIT_MEMBER_NAME(_recentFrames,"_recentFrames");
	HX_VISIT_MEMBER_NAME(_recentFlipX,"_recentFlipX");
	HX_VISIT_MEMBER_NAME(_recentFlipY,"_recentFlipY");
	HX_VISIT_MEMBER_NAME(_recentAnimations,"_recentAnimations");
	HX_VISIT_MEMBER_NAME(_spriteOrigin,"_spriteOrigin");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTrail_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_transp") ) { return ::hx::Val( _transp ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xEnabled") ) { return ::hx::Val( xEnabled ); }
		if (HX_FIELD_EQ(inName,"yEnabled") ) { return ::hx::Val( yEnabled ); }
		if (HX_FIELD_EQ(inName,"_counter") ) { return ::hx::Val( _counter ); }
		if (HX_FIELD_EQ(inName,"_graphic") ) { return ::hx::Val( _graphic ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cacheValue") ) { return ::hx::Val( cacheValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetTrail") ) { return ::hx::Val( resetTrail_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_difference") ) { return ::hx::Val( _difference ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_trailLength") ) { return ::hx::Val( _trailLength ); }
		if (HX_FIELD_EQ(inName,"_recentFlipX") ) { return ::hx::Val( _recentFlipX ); }
		if (HX_FIELD_EQ(inName,"_recentFlipY") ) { return ::hx::Val( _recentFlipY ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scalesEnabled") ) { return ::hx::Val( scalesEnabled ); }
		if (HX_FIELD_EQ(inName,"framesEnabled") ) { return ::hx::Val( framesEnabled ); }
		if (HX_FIELD_EQ(inName,"_recentAngles") ) { return ::hx::Val( _recentAngles ); }
		if (HX_FIELD_EQ(inName,"_recentScales") ) { return ::hx::Val( _recentScales ); }
		if (HX_FIELD_EQ(inName,"_recentFrames") ) { return ::hx::Val( _recentFrames ); }
		if (HX_FIELD_EQ(inName,"_spriteOrigin") ) { return ::hx::Val( _spriteOrigin ); }
		if (HX_FIELD_EQ(inName,"changeGraphic") ) { return ::hx::Val( changeGraphic_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"increaseLength") ) { return ::hx::Val( increaseLength_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rotationsEnabled") ) { return ::hx::Val( rotationsEnabled ); }
		if (HX_FIELD_EQ(inName,"_recentPositions") ) { return ::hx::Val( _recentPositions ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_recentAnimations") ) { return ::hx::Val( _recentAnimations ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"changeValuesEnabled") ) { return ::hx::Val( changeValuesEnabled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTrail_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_transp") ) { _transp=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xEnabled") ) { xEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yEnabled") ) { yEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_graphic") ) { _graphic=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_difference") ) { _difference=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_trailLength") ) { _trailLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentFlipX") ) { _recentFlipX=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentFlipY") ) { _recentFlipY=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scalesEnabled") ) { scalesEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesEnabled") ) { framesEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentAngles") ) { _recentAngles=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentScales") ) { _recentScales=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentFrames") ) { _recentFrames=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spriteOrigin") ) { _spriteOrigin=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rotationsEnabled") ) { rotationsEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentPositions") ) { _recentPositions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_recentAnimations") ) { _recentAnimations=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTrail_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("xEnabled",e9,aa,27,1b));
	outFields->push(HX_("yEnabled",08,1d,5a,54));
	outFields->push(HX_("rotationsEnabled",8c,1b,2e,98));
	outFields->push(HX_("scalesEnabled",d8,d8,9a,ec));
	outFields->push(HX_("framesEnabled",7b,5d,56,fc));
	outFields->push(HX_("_counter",7d,08,12,57));
	outFields->push(HX_("_trailLength",4d,63,cf,2d));
	outFields->push(HX_("_graphic",29,b4,bf,ad));
	outFields->push(HX_("_transp",e7,9c,fc,b3));
	outFields->push(HX_("_difference",1c,69,1b,19));
	outFields->push(HX_("_recentPositions",10,4e,ba,ee));
	outFields->push(HX_("_recentAngles",1a,df,8c,9a));
	outFields->push(HX_("_recentScales",83,b4,99,73));
	outFields->push(HX_("_recentFrames",80,79,f9,e3));
	outFields->push(HX_("_recentFlipX",71,f4,17,a0));
	outFields->push(HX_("_recentFlipY",72,f4,17,a0));
	outFields->push(HX_("_recentAnimations",c9,f3,02,00));
	outFields->push(HX_("_spriteOrigin",aa,4e,52,c5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTrail_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxTrail_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsInt,(int)offsetof(FlxTrail_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(FlxTrail_obj,xEnabled),HX_("xEnabled",e9,aa,27,1b)},
	{::hx::fsBool,(int)offsetof(FlxTrail_obj,yEnabled),HX_("yEnabled",08,1d,5a,54)},
	{::hx::fsBool,(int)offsetof(FlxTrail_obj,rotationsEnabled),HX_("rotationsEnabled",8c,1b,2e,98)},
	{::hx::fsBool,(int)offsetof(FlxTrail_obj,scalesEnabled),HX_("scalesEnabled",d8,d8,9a,ec)},
	{::hx::fsBool,(int)offsetof(FlxTrail_obj,framesEnabled),HX_("framesEnabled",7b,5d,56,fc)},
	{::hx::fsInt,(int)offsetof(FlxTrail_obj,_counter),HX_("_counter",7d,08,12,57)},
	{::hx::fsInt,(int)offsetof(FlxTrail_obj,_trailLength),HX_("_trailLength",4d,63,cf,2d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTrail_obj,_graphic),HX_("_graphic",29,b4,bf,ad)},
	{::hx::fsFloat,(int)offsetof(FlxTrail_obj,_transp),HX_("_transp",e7,9c,fc,b3)},
	{::hx::fsFloat,(int)offsetof(FlxTrail_obj,_difference),HX_("_difference",1c,69,1b,19)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTrail_obj,_recentPositions),HX_("_recentPositions",10,4e,ba,ee)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxTrail_obj,_recentAngles),HX_("_recentAngles",1a,df,8c,9a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTrail_obj,_recentScales),HX_("_recentScales",83,b4,99,73)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTrail_obj,_recentFrames),HX_("_recentFrames",80,79,f9,e3)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(FlxTrail_obj,_recentFlipX),HX_("_recentFlipX",71,f4,17,a0)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(FlxTrail_obj,_recentFlipY),HX_("_recentFlipY",72,f4,17,a0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTrail_obj,_recentAnimations),HX_("_recentAnimations",c9,f3,02,00)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTrail_obj,_spriteOrigin),HX_("_spriteOrigin",aa,4e,52,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTrail_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTrail_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("delay",83,d7,26,d7),
	HX_("xEnabled",e9,aa,27,1b),
	HX_("yEnabled",08,1d,5a,54),
	HX_("rotationsEnabled",8c,1b,2e,98),
	HX_("scalesEnabled",d8,d8,9a,ec),
	HX_("framesEnabled",7b,5d,56,fc),
	HX_("_counter",7d,08,12,57),
	HX_("_trailLength",4d,63,cf,2d),
	HX_("_graphic",29,b4,bf,ad),
	HX_("_transp",e7,9c,fc,b3),
	HX_("_difference",1c,69,1b,19),
	HX_("_recentPositions",10,4e,ba,ee),
	HX_("_recentAngles",1a,df,8c,9a),
	HX_("_recentScales",83,b4,99,73),
	HX_("_recentFrames",80,79,f9,e3),
	HX_("_recentFlipX",71,f4,17,a0),
	HX_("_recentFlipY",72,f4,17,a0),
	HX_("_recentAnimations",c9,f3,02,00),
	HX_("_spriteOrigin",aa,4e,52,c5),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("cacheValue",cf,e5,70,74),
	HX_("resetTrail",77,cb,bb,fe),
	HX_("increaseLength",48,82,f7,59),
	HX_("changeGraphic",18,ff,db,d4),
	HX_("changeValuesEnabled",2f,e1,d5,2f),
	::String(null()) };

::hx::Class FlxTrail_obj::__mClass;

void FlxTrail_obj::__register()
{
	FlxTrail_obj _hx_dummy;
	FlxTrail_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.FlxTrail",09,f3,cd,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTrail_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTrail_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTrail_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTrail_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
