#ifndef INCLUDED_openfl_events_ErrorEvent
#define INCLUDED_openfl_events_ErrorEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,TextEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ErrorEvent_obj : public  ::openfl::events::TextEvent_obj
{
	public:
		typedef  ::openfl::events::TextEvent_obj super;
		typedef ErrorEvent_obj OBJ_;
		ErrorEvent_obj();

	public:
		enum { _hx_ClassId = 0x27730e1f };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.ErrorEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.ErrorEvent"); }
		static ::hx::ObjectPtr< ErrorEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< ErrorEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ErrorEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ErrorEvent",52,bb,79,e1); }

		static void __boot();
		static ::String ERROR;
		int errorID;
		virtual  ::openfl::events::Event clone();

		virtual ::String toString();

		virtual void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_ErrorEvent */ 
