#ifndef INCLUDED_openfl_geom_ColorTransform
#define INCLUDED_openfl_geom_ColorTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)

namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ColorTransform_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ColorTransform_obj OBJ_;
		ColorTransform_obj();

	public:
		enum { _hx_ClassId = 0x5ba99a35 };

		void __construct(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.geom.ColorTransform")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.geom.ColorTransform"); }
		static ::hx::ObjectPtr< ColorTransform_obj > __new(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset);
		static ::hx::ObjectPtr< ColorTransform_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< Float >  __o_redOffset,::hx::Null< Float >  __o_greenOffset,::hx::Null< Float >  __o_blueOffset,::hx::Null< Float >  __o_alphaOffset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorTransform_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorTransform",a9,6b,95,57); }

		static void __boot();
		static  ::lime::utils::ArrayBufferView _hx___limeColorMatrix;
		static  ::lime::utils::ObjectPool _hx___pool;
		Float alphaMultiplier;
		Float alphaOffset;
		Float blueMultiplier;
		Float blueOffset;
		Float greenMultiplier;
		Float greenOffset;
		Float redMultiplier;
		Float redOffset;
		void concat( ::openfl::geom::ColorTransform second);
		::Dynamic concat_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::openfl::geom::ColorTransform _hx___clone();
		::Dynamic _hx___clone_dyn();

		void _hx___copyFrom( ::openfl::geom::ColorTransform ct);
		::Dynamic _hx___copyFrom_dyn();

		void _hx___combine( ::openfl::geom::ColorTransform ct);
		::Dynamic _hx___combine_dyn();

		void _hx___identity();
		::Dynamic _hx___identity_dyn();

		void _hx___invert();
		::Dynamic _hx___invert_dyn();

		bool _hx___equals( ::openfl::geom::ColorTransform ct,bool ignoreAlphaMultiplier);
		::Dynamic _hx___equals_dyn();

		bool _hx___isDefault(bool ignoreAlphaMultiplier);
		::Dynamic _hx___isDefault_dyn();

		void _hx___setArrays(::Array< Float > colorMultipliers,::Array< Float > colorOffsets);
		::Dynamic _hx___setArrays_dyn();

		int get_color();
		::Dynamic get_color_dyn();

		int set_color(int value);
		::Dynamic set_color_dyn();

		 ::lime::utils::ArrayBufferView _hx___toLimeColorMatrix();
		::Dynamic _hx___toLimeColorMatrix_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_ColorTransform */ 
