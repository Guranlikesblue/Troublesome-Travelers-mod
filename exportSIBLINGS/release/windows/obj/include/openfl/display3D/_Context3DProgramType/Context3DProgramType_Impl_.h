#ifndef INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_
#define INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DProgramType,Context3DProgramType_Impl_)

namespace openfl{
namespace display3D{
namespace _Context3DProgramType{


class HXCPP_CLASS_ATTRIBUTES Context3DProgramType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DProgramType_Impl__obj OBJ_;
		Context3DProgramType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x748211f8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_"); }

		inline static ::hx::ObjectPtr< Context3DProgramType_Impl__obj > __new() {
			::hx::ObjectPtr< Context3DProgramType_Impl__obj > __this = new Context3DProgramType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DProgramType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DProgramType_Impl__obj *__this = (Context3DProgramType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DProgramType_Impl__obj), false, "openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_"));
			*(void **)__this = Context3DProgramType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DProgramType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DProgramType_Impl_",1e,ce,d4,5e); }

		static void __boot();
		static  ::Dynamic FRAGMENT;
		static  ::Dynamic VERTEX;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DProgramType

#endif /* INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_ */ 
