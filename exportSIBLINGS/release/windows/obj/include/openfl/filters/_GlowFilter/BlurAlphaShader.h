#ifndef INCLUDED_openfl_filters__GlowFilter_BlurAlphaShader
#define INCLUDED_openfl_filters__GlowFilter_BlurAlphaShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,BlurAlphaShader)

namespace openfl{
namespace filters{
namespace _GlowFilter{


class HXCPP_CLASS_ATTRIBUTES BlurAlphaShader_obj : public  ::openfl::filters::BitmapFilterShader_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilterShader_obj super;
		typedef BlurAlphaShader_obj OBJ_;
		BlurAlphaShader_obj();

	public:
		enum { _hx_ClassId = 0x1b23b3a3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._GlowFilter.BlurAlphaShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters._GlowFilter.BlurAlphaShader"); }
		static ::hx::ObjectPtr< BlurAlphaShader_obj > __new();
		static ::hx::ObjectPtr< BlurAlphaShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlurAlphaShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlurAlphaShader",9c,d5,8d,23); }

		 ::openfl::display::ShaderParameter_Float uRadius;
		 ::openfl::display::ShaderParameter_Float uColor;
		 ::openfl::display::ShaderParameter_Float uStrength;
};

} // end namespace openfl
} // end namespace filters
} // end namespace _GlowFilter

#endif /* INCLUDED_openfl_filters__GlowFilter_BlurAlphaShader */ 
