#ifndef INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_
#define INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_StageDisplayState,StageDisplayState_Impl_)

namespace openfl{
namespace display{
namespace _StageDisplayState{


class HXCPP_CLASS_ATTRIBUTES StageDisplayState_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StageDisplayState_Impl__obj OBJ_;
		StageDisplayState_Impl__obj();

	public:
		enum { _hx_ClassId = 0x55e399ed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._StageDisplayState.StageDisplayState_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._StageDisplayState.StageDisplayState_Impl_"); }

		inline static ::hx::ObjectPtr< StageDisplayState_Impl__obj > __new() {
			::hx::ObjectPtr< StageDisplayState_Impl__obj > __this = new StageDisplayState_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StageDisplayState_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			StageDisplayState_Impl__obj *__this = (StageDisplayState_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StageDisplayState_Impl__obj), false, "openfl.display._StageDisplayState.StageDisplayState_Impl_"));
			*(void **)__this = StageDisplayState_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StageDisplayState_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StageDisplayState_Impl_",8d,04,09,e1); }

		static void __boot();
		static  ::Dynamic FULL_SCREEN;
		static  ::Dynamic FULL_SCREEN_INTERACTIVE;
		static  ::Dynamic NORMAL;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _StageDisplayState

#endif /* INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_ */ 
