#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch
#define INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c2a15eaaaac5f681_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_shader_framebuffer_fetch)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_shader_framebuffer_fetch_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_shader_framebuffer_fetch_obj OBJ_;
		EXT_shader_framebuffer_fetch_obj();

	public:
		enum { _hx_ClassId = 0x18fc8752 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch"); }

		inline static ::hx::ObjectPtr< EXT_shader_framebuffer_fetch_obj > __new() {
			::hx::ObjectPtr< EXT_shader_framebuffer_fetch_obj > __this = new EXT_shader_framebuffer_fetch_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_shader_framebuffer_fetch_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_shader_framebuffer_fetch_obj *__this = (EXT_shader_framebuffer_fetch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_shader_framebuffer_fetch_obj), false, "lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch"));
			*(void **)__this = EXT_shader_framebuffer_fetch_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c2a15eaaaac5f681_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::EXT_shader_framebuffer_fetch)(__this) )->FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT = 35410;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_shader_framebuffer_fetch_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_shader_framebuffer_fetch",0c,04,5a,6d); }

		int FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch */ 
