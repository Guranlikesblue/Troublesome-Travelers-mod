#include <hxcpp.h>

#ifndef INCLUDED_haxe_lang_Iterable
#include <haxe/lang/Iterable.h>
#endif
#ifndef INCLUDED_haxe_lang_Iterator
#include <haxe/lang/Iterator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5f8d55efe7199781_95_boot,"haxe.lang.Iterable","boot",0x15490416,"haxe.lang.Iterable.boot","openfl/utils/Object.hx",95,0xcbd6e8e2)
namespace haxe{
namespace lang{


static ::String Iterable_obj_sMemberFields[] = {
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

::hx::Class Iterable_obj::__mClass;

void Iterable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.lang.Iterable",0a,eb,de,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Iterable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x1f692be6 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Iterable_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5f8d55efe7199781_95_boot)
HXDLIN(  95)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace haxe
} // end namespace lang
