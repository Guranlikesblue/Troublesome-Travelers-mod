#ifndef INCLUDED_lime_system_JNIStaticField
#define INCLUDED_lime_system_JNIStaticField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_241b089bf20ccbef_232_new)
HX_DECLARE_CLASS2(lime,_hx_system,JNIStaticField)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES JNIStaticField_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JNIStaticField_obj OBJ_;
		JNIStaticField_obj();

	public:
		enum { _hx_ClassId = 0x604bcd6b };

		void __construct( ::Dynamic field);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.JNIStaticField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.JNIStaticField"); }

		inline static ::hx::ObjectPtr< JNIStaticField_obj > __new( ::Dynamic field) {
			::hx::ObjectPtr< JNIStaticField_obj > __this = new JNIStaticField_obj();
			__this->__construct(field);
			return __this;
		}

		inline static ::hx::ObjectPtr< JNIStaticField_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic field) {
			JNIStaticField_obj *__this = (JNIStaticField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JNIStaticField_obj), true, "lime.system.JNIStaticField"));
			*(void **)__this = JNIStaticField_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_241b089bf20ccbef_232_new)
HXDLIN( 232)		( ( ::lime::_hx_system::JNIStaticField)(__this) )->field = field;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JNIStaticField_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JNIStaticField",27,a2,e9,3f); }

		 ::Dynamic field;
		 ::Dynamic get();
		::Dynamic get_dyn();

		 ::Dynamic set( ::Dynamic value);
		::Dynamic set_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JNIStaticField */ 
