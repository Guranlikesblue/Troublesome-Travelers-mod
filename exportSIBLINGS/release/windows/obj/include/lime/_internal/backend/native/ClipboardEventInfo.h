#ifndef INCLUDED_lime__internal_backend_native_ClipboardEventInfo
#define INCLUDED_lime__internal_backend_native_ClipboardEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_45f117d879fd522d_635_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,ClipboardEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES ClipboardEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClipboardEventInfo_obj OBJ_;
		ClipboardEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x06373e3e };

		void __construct( ::Dynamic type);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.ClipboardEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.ClipboardEventInfo"); }

		inline static ::hx::ObjectPtr< ClipboardEventInfo_obj > __new( ::Dynamic type) {
			::hx::ObjectPtr< ClipboardEventInfo_obj > __this = new ClipboardEventInfo_obj();
			__this->__construct(type);
			return __this;
		}

		inline static ::hx::ObjectPtr< ClipboardEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type) {
			ClipboardEventInfo_obj *__this = (ClipboardEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClipboardEventInfo_obj), false, "lime._internal.backend.native.ClipboardEventInfo"));
			*(void **)__this = ClipboardEventInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_45f117d879fd522d_635_new)
HXDLIN( 635)		( ( ::lime::_internal::backend::native::ClipboardEventInfo)(__this) )->type = ( (int)(type) );
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClipboardEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClipboardEventInfo",12,75,f1,b4); }

		int type;
		 ::lime::_internal::backend::native::ClipboardEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_ClipboardEventInfo */ 
