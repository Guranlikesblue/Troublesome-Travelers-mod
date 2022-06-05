#ifndef INCLUDED_flixel_util__FlxUnicodeUtil_UnicodeBuffer_Impl_
#define INCLUDED_flixel_util__FlxUnicodeUtil_UnicodeBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,_FlxUnicodeUtil,UnicodeBuffer_Impl_)

namespace flixel{
namespace util{
namespace _FlxUnicodeUtil{


class HXCPP_CLASS_ATTRIBUTES UnicodeBuffer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef UnicodeBuffer_Impl__obj OBJ_;
		UnicodeBuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x245bb1b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_"); }

		inline static ::hx::ObjectPtr< UnicodeBuffer_Impl__obj > __new() {
			::hx::ObjectPtr< UnicodeBuffer_Impl__obj > __this = new UnicodeBuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< UnicodeBuffer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			UnicodeBuffer_Impl__obj *__this = (UnicodeBuffer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UnicodeBuffer_Impl__obj), false, "flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_"));
			*(void **)__this = UnicodeBuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UnicodeBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UnicodeBuffer_Impl_",3d,c6,85,60); }

		static ::String _new(::String s);
		static ::Dynamic _new_dyn();

		static ::String addChar(::String this1,int c);
		static ::Dynamic addChar_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxUnicodeUtil

#endif /* INCLUDED_flixel_util__FlxUnicodeUtil_UnicodeBuffer_Impl_ */ 
