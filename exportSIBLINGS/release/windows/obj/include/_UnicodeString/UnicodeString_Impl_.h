#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#define INCLUDED__UnicodeString_UnicodeString_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_UnicodeString,UnicodeString_Impl_)

namespace _UnicodeString{


class HXCPP_CLASS_ATTRIBUTES UnicodeString_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef UnicodeString_Impl__obj OBJ_;
		UnicodeString_Impl__obj();

	public:
		enum { _hx_ClassId = 0x699a1cff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="_UnicodeString.UnicodeString_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"_UnicodeString.UnicodeString_Impl_"); }

		inline static ::hx::ObjectPtr< UnicodeString_Impl__obj > __new() {
			::hx::ObjectPtr< UnicodeString_Impl__obj > __this = new UnicodeString_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< UnicodeString_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			UnicodeString_Impl__obj *__this = (UnicodeString_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UnicodeString_Impl__obj), false, "_UnicodeString.UnicodeString_Impl_"));
			*(void **)__this = UnicodeString_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UnicodeString_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UnicodeString_Impl_",ce,64,09,f3); }

		static  ::Dynamic charCodeAt(::String this1,int index);
		static ::Dynamic charCodeAt_dyn();

		static ::String substr(::String this1,int pos, ::Dynamic len);
		static ::Dynamic substr_dyn();

		static int get_length(::String this1);
		static ::Dynamic get_length_dyn();

};

} // end namespace _UnicodeString

#endif /* INCLUDED__UnicodeString_UnicodeString_Impl_ */ 
