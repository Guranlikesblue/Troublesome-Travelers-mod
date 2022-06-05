#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multi_draw_arrays
#define INCLUDED_lime_graphics_opengl_ext_EXT_multi_draw_arrays

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8283b78ee08036b7_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_multi_draw_arrays)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_multi_draw_arrays_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_multi_draw_arrays_obj OBJ_;
		EXT_multi_draw_arrays_obj();

	public:
		enum { _hx_ClassId = 0x1abc331f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_multi_draw_arrays")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_multi_draw_arrays"); }

		inline static ::hx::ObjectPtr< EXT_multi_draw_arrays_obj > __new() {
			::hx::ObjectPtr< EXT_multi_draw_arrays_obj > __this = new EXT_multi_draw_arrays_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_multi_draw_arrays_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_multi_draw_arrays_obj *__this = (EXT_multi_draw_arrays_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_multi_draw_arrays_obj), false, "lime.graphics.opengl.ext.EXT_multi_draw_arrays"));
			*(void **)__this = EXT_multi_draw_arrays_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8283b78ee08036b7_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_multi_draw_arrays_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_multi_draw_arrays",51,b2,0b,91); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_multi_draw_arrays */ 
