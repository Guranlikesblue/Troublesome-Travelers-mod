#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_Context3DElementType
#include <openfl/display/_internal/Context3DElementType.h>
#endif
namespace openfl{
namespace display{
namespace _internal{

::openfl::display::_internal::Context3DElementType Context3DElementType_obj::QUADS;

::openfl::display::_internal::Context3DElementType Context3DElementType_obj::TRIANGLES;

::openfl::display::_internal::Context3DElementType Context3DElementType_obj::TRIANGLE_INDICES;

bool Context3DElementType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("QUADS",ac,ad,d5,db)) { outValue = Context3DElementType_obj::QUADS; return true; }
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) { outValue = Context3DElementType_obj::TRIANGLES; return true; }
	if (inName==HX_("TRIANGLE_INDICES",50,cb,c3,a1)) { outValue = Context3DElementType_obj::TRIANGLE_INDICES; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Context3DElementType_obj)

int Context3DElementType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("QUADS",ac,ad,d5,db)) return 0;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return 1;
	if (inName==HX_("TRIANGLE_INDICES",50,cb,c3,a1)) return 2;
	return super::__FindIndex(inName);
}

int Context3DElementType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("QUADS",ac,ad,d5,db)) return 0;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return 0;
	if (inName==HX_("TRIANGLE_INDICES",50,cb,c3,a1)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Context3DElementType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("QUADS",ac,ad,d5,db)) return QUADS;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return TRIANGLES;
	if (inName==HX_("TRIANGLE_INDICES",50,cb,c3,a1)) return TRIANGLE_INDICES;
	return super::__Field(inName,inCallProp);
}

static ::String Context3DElementType_obj_sStaticFields[] = {
	HX_("QUADS",ac,ad,d5,db),
	HX_("TRIANGLES",8b,a0,99,7a),
	HX_("TRIANGLE_INDICES",50,cb,c3,a1),
	::String(null())
};

::hx::Class Context3DElementType_obj::__mClass;

Dynamic __Create_Context3DElementType_obj() { return new Context3DElementType_obj; }

void Context3DElementType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("openfl.display._internal.Context3DElementType",12,f8,d9,53), ::hx::TCanCast< Context3DElementType_obj >,Context3DElementType_obj_sStaticFields,0,
	&__Create_Context3DElementType_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DElementType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Context3DElementType_obj::__GetStatic;
}

void Context3DElementType_obj::__boot()
{
QUADS = ::hx::CreateConstEnum< Context3DElementType_obj >(HX_("QUADS",ac,ad,d5,db),0);
TRIANGLES = ::hx::CreateConstEnum< Context3DElementType_obj >(HX_("TRIANGLES",8b,a0,99,7a),1);
TRIANGLE_INDICES = ::hx::CreateConstEnum< Context3DElementType_obj >(HX_("TRIANGLE_INDICES",50,cb,c3,a1),2);
}


} // end namespace openfl
} // end namespace display
} // end namespace _internal
