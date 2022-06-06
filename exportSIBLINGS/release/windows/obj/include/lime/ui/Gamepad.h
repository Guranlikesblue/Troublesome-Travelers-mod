#ifndef INCLUDED_lime_ui_Gamepad
#define INCLUDED_lime_ui_Gamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_GamepadAxis_Float_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_GamepadButton_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_Gamepad_Void)
HX_DECLARE_CLASS2(lime,ui,Gamepad)

namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Gamepad_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Gamepad_obj OBJ_;
		Gamepad_obj();

	public:
		enum { _hx_ClassId = 0x0ce13738 };

		void __construct(int id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.ui.Gamepad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.ui.Gamepad"); }
		static ::hx::ObjectPtr< Gamepad_obj > __new(int id);
		static ::hx::ObjectPtr< Gamepad_obj > __alloc(::hx::Ctx *_hx_ctx,int id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Gamepad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Gamepad",81,08,d7,56); }

		static void __boot();
		static  ::haxe::ds::IntMap devices;
		static  ::lime::app::_Event_lime_ui_Gamepad_Void onConnect;
		static void addMappings(::Array< ::String > mappings);
		static ::Dynamic addMappings_dyn();

		static void _hx___connect(int id);
		static ::Dynamic _hx___connect_dyn();

		static void _hx___disconnect(int id);
		static ::Dynamic _hx___disconnect_dyn();

		bool connected;
		int id;
		 ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void onAxisMove;
		 ::lime::app::_Event_lime_ui_GamepadButton_Void onButtonDown;
		 ::lime::app::_Event_lime_ui_GamepadButton_Void onButtonUp;
		 ::lime::app::_Event_Void_Void onDisconnect;
		::String get_guid();
		::Dynamic get_guid_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Gamepad */ 
