#ifndef INCLUDED_lime__internal_format_LZMA
#define INCLUDED_lime__internal_format_LZMA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,format,LZMA)

namespace lime{
namespace _internal{
namespace format{


class HXCPP_CLASS_ATTRIBUTES LZMA_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LZMA_obj OBJ_;
		LZMA_obj();

	public:
		enum { _hx_ClassId = 0x7fa54a88 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.format.LZMA")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.format.LZMA"); }

		inline static ::hx::ObjectPtr< LZMA_obj > __new() {
			::hx::ObjectPtr< LZMA_obj > __this = new LZMA_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LZMA_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LZMA_obj *__this = (LZMA_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LZMA_obj), false, "lime._internal.format.LZMA"));
			*(void **)__this = LZMA_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LZMA_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LZMA",62,c5,80,32); }

		static  ::haxe::io::Bytes compress( ::haxe::io::Bytes bytes);
		static ::Dynamic compress_dyn();

		static  ::haxe::io::Bytes decompress( ::haxe::io::Bytes bytes);
		static ::Dynamic decompress_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace format

#endif /* INCLUDED_lime__internal_format_LZMA */ 
