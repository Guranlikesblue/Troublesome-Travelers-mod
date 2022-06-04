#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect
#define INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveDirection)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveEffect)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxWaveMode)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES FlxWaveEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxWaveEffect_obj OBJ_;
		FlxWaveEffect_obj();

	public:
		enum { _hx_ClassId = 0x029f6474 };

		void __construct( ::flixel::addons::effects::chainable::FlxWaveMode Mode,::hx::Null< int >  __o_Strength,::hx::Null< Float >  __o_Center,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_Wavelength, ::flixel::addons::effects::chainable::FlxWaveDirection Direction,::hx::Null< Float >  __o_InterlaceOffset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxWaveEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.chainable.FlxWaveEffect"); }
		static ::hx::ObjectPtr< FlxWaveEffect_obj > __new( ::flixel::addons::effects::chainable::FlxWaveMode Mode,::hx::Null< int >  __o_Strength,::hx::Null< Float >  __o_Center,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_Wavelength, ::flixel::addons::effects::chainable::FlxWaveDirection Direction,::hx::Null< Float >  __o_InterlaceOffset);
		static ::hx::ObjectPtr< FlxWaveEffect_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::effects::chainable::FlxWaveMode Mode,::hx::Null< int >  __o_Strength,::hx::Null< Float >  __o_Center,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_Wavelength, ::flixel::addons::effects::chainable::FlxWaveDirection Direction,::hx::Null< Float >  __o_InterlaceOffset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxWaveEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxWaveEffect",1c,a0,de,d8); }

		bool active;
		 ::flixel::math::FlxPoint offset;
		 ::flixel::addons::effects::chainable::FlxWaveMode mode;
		Float speed;
		Float center;
		 ::flixel::addons::effects::chainable::FlxWaveDirection direction;
		int wavelength;
		int strength;
		Float interlaceOffset;
		Float _time;
		 ::openfl::geom::Point _flashPoint;
		 ::openfl::geom::Rectangle _flashRect;
		 ::openfl::display::BitmapData _pixels;
		void destroy();
		::Dynamic destroy_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		 ::openfl::display::BitmapData apply( ::openfl::display::BitmapData bitmapData);
		::Dynamic apply_dyn();

		Float calculateOffset(Float p,int length);
		::Dynamic calculateOffset_dyn();

		Float set_interlaceOffset(Float InterlaceOffset);
		::Dynamic set_interlaceOffset_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect */ 
