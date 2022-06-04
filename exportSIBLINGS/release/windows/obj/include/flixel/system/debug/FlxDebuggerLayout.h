#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#define INCLUDED_flixel_system_debug_FlxDebuggerLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,FlxDebuggerLayout)
namespace flixel{
namespace _hx_system{
namespace debug{


class FlxDebuggerLayout_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxDebuggerLayout_obj OBJ_;

	public:
		FlxDebuggerLayout_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.system.debug.FlxDebuggerLayout",15,d0,5b,09); }
		::String __ToString() const { return HX_("FlxDebuggerLayout.",f1,97,82,c5) + _hx_tag; }

		static ::flixel::_hx_system::debug::FlxDebuggerLayout BIG;
		static inline ::flixel::_hx_system::debug::FlxDebuggerLayout BIG_dyn() { return BIG; }
		static ::flixel::_hx_system::debug::FlxDebuggerLayout LEFT;
		static inline ::flixel::_hx_system::debug::FlxDebuggerLayout LEFT_dyn() { return LEFT; }
		static ::flixel::_hx_system::debug::FlxDebuggerLayout MICRO;
		static inline ::flixel::_hx_system::debug::FlxDebuggerLayout MICRO_dyn() { return MICRO; }
		static ::flixel::_hx_system::debug::FlxDebuggerLayout RIGHT;
		static inline ::flixel::_hx_system::debug::FlxDebuggerLayout RIGHT_dyn() { return RIGHT; }
		static ::flixel::_hx_system::debug::FlxDebuggerLayout STANDARD;
		static inline ::flixel::_hx_system::debug::FlxDebuggerLayout STANDARD_dyn() { return STANDARD; }
		static ::flixel::_hx_system::debug::FlxDebuggerLayout TOP;
		static inline ::flixel::_hx_system::debug::FlxDebuggerLayout TOP_dyn() { return TOP; }
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_FlxDebuggerLayout */ 
