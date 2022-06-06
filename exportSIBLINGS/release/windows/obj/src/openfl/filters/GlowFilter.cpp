#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_BlurAlphaShader
#include <openfl/filters/_GlowFilter/BlurAlphaShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_CombineKnockoutShader
#include <openfl/filters/_GlowFilter/CombineKnockoutShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_CombineShader
#include <openfl/filters/_GlowFilter/CombineShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_InnerCombineKnockoutShader
#include <openfl/filters/_GlowFilter/InnerCombineKnockoutShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_InnerCombineShader
#include <openfl/filters/_GlowFilter/InnerCombineShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_InvertAlphaShader
#include <openfl/filters/_GlowFilter/InvertAlphaShader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f54e58291eefcbc3_233_new,"openfl.filters.GlowFilter","new",0xf734d428,"openfl.filters.GlowFilter.new","openfl/filters/GlowFilter.hx",233,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_254_clone,"openfl.filters.GlowFilter","clone",0x7c629925,"openfl.filters.GlowFilter.clone","openfl/filters/GlowFilter.hx",254,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_259___applyFilter,"openfl.filters.GlowFilter","__applyFilter",0x0cceae6e,"openfl.filters.GlowFilter.__applyFilter","openfl/filters/GlowFilter.hx",259,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_277___initShader,"openfl.filters.GlowFilter","__initShader",0x188dd8ad,"openfl.filters.GlowFilter.__initShader","openfl/filters/GlowFilter.hx",277,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_348___updateSize,"openfl.filters.GlowFilter","__updateSize",0xfc3049c2,"openfl.filters.GlowFilter.__updateSize","openfl/filters/GlowFilter.hx",348,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_357___calculateNumShaderPasses,"openfl.filters.GlowFilter","__calculateNumShaderPasses",0xc270897c,"openfl.filters.GlowFilter.__calculateNumShaderPasses","openfl/filters/GlowFilter.hx",357,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_366_get_alpha,"openfl.filters.GlowFilter","get_alpha",0x780a0d7d,"openfl.filters.GlowFilter.get_alpha","openfl/filters/GlowFilter.hx",366,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_370_set_alpha,"openfl.filters.GlowFilter","set_alpha",0x5b5af989,"openfl.filters.GlowFilter.set_alpha","openfl/filters/GlowFilter.hx",370,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_377_get_blurX,"openfl.filters.GlowFilter","get_blurX",0x0b7475f0,"openfl.filters.GlowFilter.get_blurX","openfl/filters/GlowFilter.hx",377,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_381_set_blurX,"openfl.filters.GlowFilter","set_blurX",0xeec561fc,"openfl.filters.GlowFilter.set_blurX","openfl/filters/GlowFilter.hx",381,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_393_get_blurY,"openfl.filters.GlowFilter","get_blurY",0x0b7475f1,"openfl.filters.GlowFilter.get_blurY","openfl/filters/GlowFilter.hx",393,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_397_set_blurY,"openfl.filters.GlowFilter","set_blurY",0xeec561fd,"openfl.filters.GlowFilter.set_blurY","openfl/filters/GlowFilter.hx",397,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_409_get_color,"openfl.filters.GlowFilter","get_color",0xa0cfd782,"openfl.filters.GlowFilter.get_color","openfl/filters/GlowFilter.hx",409,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_413_set_color,"openfl.filters.GlowFilter","set_color",0x8420c38e,"openfl.filters.GlowFilter.set_color","openfl/filters/GlowFilter.hx",413,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_420_get_inner,"openfl.filters.GlowFilter","get_inner",0x148f97b5,"openfl.filters.GlowFilter.get_inner","openfl/filters/GlowFilter.hx",420,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_424_set_inner,"openfl.filters.GlowFilter","set_inner",0xf7e083c1,"openfl.filters.GlowFilter.set_inner","openfl/filters/GlowFilter.hx",424,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_435_get_knockout,"openfl.filters.GlowFilter","get_knockout",0xe353a13b,"openfl.filters.GlowFilter.get_knockout","openfl/filters/GlowFilter.hx",435,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_439_set_knockout,"openfl.filters.GlowFilter","set_knockout",0xf84cc4af,"openfl.filters.GlowFilter.set_knockout","openfl/filters/GlowFilter.hx",439,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_450_get_quality,"openfl.filters.GlowFilter","get_quality",0xaafc709e,"openfl.filters.GlowFilter.get_quality","openfl/filters/GlowFilter.hx",450,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_454_set_quality,"openfl.filters.GlowFilter","set_quality",0xb56977aa,"openfl.filters.GlowFilter.set_quality","openfl/filters/GlowFilter.hx",454,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_465_get_strength,"openfl.filters.GlowFilter","get_strength",0x023cc9c2,"openfl.filters.GlowFilter.get_strength","openfl/filters/GlowFilter.hx",465,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_469_set_strength,"openfl.filters.GlowFilter","set_strength",0x1735ed36,"openfl.filters.GlowFilter.set_strength","openfl/filters/GlowFilter.hx",469,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_70_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",70,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_71_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",71,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_72_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",72,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_73_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",73,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_74_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",74,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_75_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",75,0x5f568606)
namespace openfl{
namespace filters{

void GlowFilter_obj::__construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout){
            		int color = __o_color.Default(16711680);
            		Float alpha = __o_alpha.Default(1);
            		Float blurX = __o_blurX.Default(6);
            		Float blurY = __o_blurY.Default(6);
            		Float strength = __o_strength.Default(2);
            		int quality = __o_quality.Default(1);
            		bool inner = __o_inner.Default(false);
            		bool knockout = __o_knockout.Default(false);
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_233_new)
HXLINE( 234)		super::__construct();
HXLINE( 236)		this->_hx___color = color;
HXLINE( 237)		this->_hx___alpha = alpha;
HXLINE( 238)		this->_hx___blurX = blurX;
HXLINE( 239)		this->_hx___blurY = blurY;
HXLINE( 240)		this->_hx___strength = strength;
HXLINE( 241)		this->_hx___inner = inner;
HXLINE( 242)		this->_hx___knockout = knockout;
HXLINE( 243)		this->_hx___quality = quality;
HXLINE( 245)		this->_hx___updateSize();
HXLINE( 247)		this->_hx___needSecondBitmapData = true;
HXLINE( 248)		this->_hx___preserveObject = true;
HXLINE( 249)		this->_hx___renderDirty = true;
            	}

Dynamic GlowFilter_obj::__CreateEmpty() { return new GlowFilter_obj; }

void *GlowFilter_obj::_hx_vtable = 0;

Dynamic GlowFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlowFilter_obj > _hx_result = new GlowFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool GlowFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1560c0a0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1560c0a0;
	} else {
		return inClassId==(int)0x26de6bd2;
	}
}

 ::openfl::filters::BitmapFilter GlowFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_254_clone)
HXDLIN( 254)		return  ::openfl::filters::GlowFilter_obj::__alloc( HX_CTX ,this->_hx___color,this->_hx___alpha,this->_hx___blurX,this->_hx___blurY,this->_hx___strength,this->_hx___quality,this->_hx___inner,this->_hx___knockout);
            	}


 ::openfl::display::BitmapData GlowFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_259___applyFilter)
HXLINE( 263)		int r = ((this->_hx___color >> 16) & 255);
HXLINE( 264)		int g = ((this->_hx___color >> 8) & 255);
HXLINE( 265)		int b = (this->_hx___color & 255);
HXLINE( 267)		 ::lime::graphics::Image bitmapData1 = bitmapData->image;
HXDLIN( 267)		 ::lime::graphics::Image sourceBitmapData1 = sourceBitmapData->image;
HXDLIN( 267)		 ::lime::math::Rectangle finalImage = sourceRect->_hx___toLimeRectangle();
HXDLIN( 267)		 ::lime::math::Vector2 finalImage1 = destPoint->_hx___toLimeVector2();
HXDLIN( 267)		 ::lime::graphics::Image finalImage2 = ::lime::_internal::graphics::ImageDataUtil_obj::gaussianBlur(bitmapData1,sourceBitmapData1,finalImage,finalImage1,this->_hx___blurX,this->_hx___blurY,this->_hx___quality,this->_hx___strength,null());
HXLINE( 269)		 ::lime::math::Rectangle _hx_tmp = finalImage2->get_rect();
HXDLIN( 269)		finalImage2->colorTransform(_hx_tmp, ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,0,0,0,this->_hx___alpha,r,g,b,0)->_hx___toLimeColorMatrix());
HXLINE( 271)		if (::hx::IsInstanceEq( finalImage2,bitmapData->image )) {
HXLINE( 271)			return bitmapData;
            		}
HXLINE( 273)		return sourceBitmapData;
            	}


 ::openfl::display::Shader GlowFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_277___initShader)
HXLINE( 280)		bool _hx_tmp;
HXDLIN( 280)		if (this->_hx___inner) {
HXLINE( 280)			_hx_tmp = (pass == 0);
            		}
            		else {
HXLINE( 280)			_hx_tmp = false;
            		}
HXDLIN( 280)		if (_hx_tmp) {
HXLINE( 282)			return ::openfl::filters::GlowFilter_obj::_hx___invertAlphaShader;
            		}
HXLINE( 285)		int blurPass;
HXDLIN( 285)		if (this->_hx___inner) {
HXLINE( 285)			blurPass = 1;
            		}
            		else {
HXLINE( 285)			blurPass = 0;
            		}
HXDLIN( 285)		int blurPass1 = (pass - blurPass);
HXLINE( 286)		int numBlurPasses = (this->_hx___horizontalPasses + this->_hx___verticalPasses);
HXLINE( 288)		if ((blurPass1 < numBlurPasses)) {
HXLINE( 290)			 ::openfl::filters::_GlowFilter::BlurAlphaShader shader = ::openfl::filters::GlowFilter_obj::_hx___blurAlphaShader;
HXLINE( 291)			if ((blurPass1 < this->_hx___horizontalPasses)) {
HXLINE( 293)				Float scale = (::Math_obj::pow(((Float)0.5),( (Float)((blurPass1 >> 1)) )) * ((Float)0.5));
HXLINE( 294)				shader->uRadius->value[0] = (this->get_blurX() * scale);
HXLINE( 295)				shader->uRadius->value[1] = ( (Float)(0) );
            			}
            			else {
HXLINE( 299)				Float scale = (::Math_obj::pow(((Float)0.5),( (Float)(((blurPass1 - this->_hx___horizontalPasses) >> 1)) )) * ((Float)0.5));
HXLINE( 300)				shader->uRadius->value[0] = ( (Float)(0) );
HXLINE( 301)				shader->uRadius->value[1] = (this->get_blurY() * scale);
            			}
HXLINE( 303)			shader->uColor->value[0] = (( (Float)(((this->get_color() >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 304)			shader->uColor->value[1] = (( (Float)(((this->get_color() >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 305)			shader->uColor->value[2] = (( (Float)((this->get_color() & 255)) ) / ( (Float)(255) ));
HXLINE( 306)			shader->uColor->value[3] = this->get_alpha();
HXLINE( 307)			Float _hx_tmp;
HXDLIN( 307)			if ((blurPass1 == (numBlurPasses - 1))) {
HXLINE( 307)				_hx_tmp = this->_hx___strength;
            			}
            			else {
HXLINE( 307)				_hx_tmp = ((Float)1.0);
            			}
HXDLIN( 307)			shader->uStrength->value[0] = _hx_tmp;
HXLINE( 308)			return shader;
            		}
HXLINE( 310)		if (this->_hx___inner) {
HXLINE( 312)			if (this->_hx___knockout) {
HXLINE( 314)				 ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader shader = ::openfl::filters::GlowFilter_obj::_hx___innerCombineKnockoutShader;
HXLINE( 315)				shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 316)				shader->offset->value[0] = ((Float)0.0);
HXLINE( 317)				shader->offset->value[1] = ((Float)0.0);
HXLINE( 318)				return shader;
            			}
HXLINE( 320)			 ::openfl::filters::_GlowFilter::InnerCombineShader shader = ::openfl::filters::GlowFilter_obj::_hx___innerCombineShader;
HXLINE( 321)			shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 322)			shader->offset->value[0] = ((Float)0.0);
HXLINE( 323)			shader->offset->value[1] = ((Float)0.0);
HXLINE( 324)			return shader;
            		}
            		else {
HXLINE( 328)			if (this->_hx___knockout) {
HXLINE( 330)				 ::openfl::filters::_GlowFilter::CombineKnockoutShader shader = ::openfl::filters::GlowFilter_obj::_hx___combineKnockoutShader;
HXLINE( 331)				shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 332)				shader->offset->value[0] = ((Float)0.0);
HXLINE( 333)				shader->offset->value[1] = ((Float)0.0);
HXLINE( 334)				return shader;
            			}
HXLINE( 336)			 ::openfl::filters::_GlowFilter::CombineShader shader = ::openfl::filters::GlowFilter_obj::_hx___combineShader;
HXLINE( 337)			shader->sourceBitmap->input = sourceBitmapData;
HXLINE( 338)			shader->offset->value[0] = ((Float)0.0);
HXLINE( 339)			shader->offset->value[1] = ((Float)0.0);
HXLINE( 340)			return shader;
            		}
HXLINE( 310)		return null();
            	}


void GlowFilter_obj::_hx___updateSize(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_348___updateSize)
HXLINE( 349)		int _hx_tmp;
HXDLIN( 349)		if ((this->_hx___blurX > 0)) {
HXLINE( 349)			_hx_tmp = ::Math_obj::ceil((this->_hx___blurX * ((Float)1.5)));
            		}
            		else {
HXLINE( 349)			_hx_tmp = 0;
            		}
HXDLIN( 349)		this->_hx___leftExtension = _hx_tmp;
HXLINE( 350)		this->_hx___rightExtension = this->_hx___leftExtension;
HXLINE( 351)		int _hx_tmp1;
HXDLIN( 351)		if ((this->_hx___blurY > 0)) {
HXLINE( 351)			_hx_tmp1 = ::Math_obj::ceil((this->_hx___blurY * ((Float)1.5)));
            		}
            		else {
HXLINE( 351)			_hx_tmp1 = 0;
            		}
HXDLIN( 351)		this->_hx___topExtension = _hx_tmp1;
HXLINE( 352)		this->_hx___bottomExtension = this->_hx___topExtension;
HXLINE( 353)		this->_hx___calculateNumShaderPasses();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,_hx___updateSize,(void))

void GlowFilter_obj::_hx___calculateNumShaderPasses(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_357___calculateNumShaderPasses)
HXLINE( 358)		int _hx_tmp;
HXDLIN( 358)		if ((this->_hx___blurX <= 0)) {
HXLINE( 358)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 358)			_hx_tmp = (::Math_obj::round((this->_hx___blurX * (( (Float)(this->_hx___quality) ) / ( (Float)(4) )))) + 1);
            		}
HXDLIN( 358)		this->_hx___horizontalPasses = _hx_tmp;
HXLINE( 359)		int _hx_tmp1;
HXDLIN( 359)		if ((this->_hx___blurY <= 0)) {
HXLINE( 359)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 359)			_hx_tmp1 = (::Math_obj::round((this->_hx___blurY * (( (Float)(this->_hx___quality) ) / ( (Float)(4) )))) + 1);
            		}
HXDLIN( 359)		this->_hx___verticalPasses = _hx_tmp1;
HXLINE( 360)		int _hx_tmp2;
HXDLIN( 360)		if (this->_hx___inner) {
HXLINE( 360)			_hx_tmp2 = 2;
            		}
            		else {
HXLINE( 360)			_hx_tmp2 = 1;
            		}
HXDLIN( 360)		this->_hx___numShaderPasses = ((this->_hx___horizontalPasses + this->_hx___verticalPasses) + _hx_tmp2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,_hx___calculateNumShaderPasses,(void))

Float GlowFilter_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_366_get_alpha)
HXDLIN( 366)		return this->_hx___alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_alpha,return )

Float GlowFilter_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_370_set_alpha)
HXLINE( 371)		if ((value != this->_hx___alpha)) {
HXLINE( 371)			this->_hx___renderDirty = true;
            		}
HXLINE( 372)		return (this->_hx___alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_alpha,return )

Float GlowFilter_obj::get_blurX(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_377_get_blurX)
HXDLIN( 377)		return this->_hx___blurX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_blurX,return )

Float GlowFilter_obj::set_blurX(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_381_set_blurX)
HXLINE( 382)		if ((value != this->_hx___blurX)) {
HXLINE( 384)			this->_hx___blurX = value;
HXLINE( 385)			this->_hx___renderDirty = true;
HXLINE( 386)			this->_hx___updateSize();
            		}
HXLINE( 388)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_blurX,return )

Float GlowFilter_obj::get_blurY(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_393_get_blurY)
HXDLIN( 393)		return this->_hx___blurY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_blurY,return )

Float GlowFilter_obj::set_blurY(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_397_set_blurY)
HXLINE( 398)		if ((value != this->_hx___blurY)) {
HXLINE( 400)			this->_hx___blurY = value;
HXLINE( 401)			this->_hx___renderDirty = true;
HXLINE( 402)			this->_hx___updateSize();
            		}
HXLINE( 404)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_blurY,return )

int GlowFilter_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_409_get_color)
HXDLIN( 409)		return this->_hx___color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_color,return )

int GlowFilter_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_413_set_color)
HXLINE( 414)		if ((value != this->_hx___color)) {
HXLINE( 414)			this->_hx___renderDirty = true;
            		}
HXLINE( 415)		return (this->_hx___color = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_color,return )

bool GlowFilter_obj::get_inner(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_420_get_inner)
HXDLIN( 420)		return this->_hx___inner;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_inner,return )

bool GlowFilter_obj::set_inner(bool value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_424_set_inner)
HXLINE( 425)		if ((value != this->_hx___inner)) {
HXLINE( 427)			this->_hx___renderDirty = true;
HXLINE( 428)			this->_hx___calculateNumShaderPasses();
            		}
HXLINE( 430)		return (this->_hx___inner = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_inner,return )

bool GlowFilter_obj::get_knockout(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_435_get_knockout)
HXDLIN( 435)		return this->_hx___knockout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_knockout,return )

bool GlowFilter_obj::set_knockout(bool value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_439_set_knockout)
HXLINE( 440)		if ((value != this->_hx___knockout)) {
HXLINE( 442)			this->_hx___renderDirty = true;
HXLINE( 443)			this->_hx___calculateNumShaderPasses();
            		}
HXLINE( 445)		return (this->_hx___knockout = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_knockout,return )

int GlowFilter_obj::get_quality(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_450_get_quality)
HXDLIN( 450)		return this->_hx___quality;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_quality,return )

int GlowFilter_obj::set_quality(int value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_454_set_quality)
HXLINE( 455)		if ((value != this->_hx___quality)) {
HXLINE( 457)			this->_hx___renderDirty = true;
HXLINE( 458)			this->_hx___calculateNumShaderPasses();
            		}
HXLINE( 460)		return (this->_hx___quality = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_quality,return )

Float GlowFilter_obj::get_strength(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_465_get_strength)
HXDLIN( 465)		return this->_hx___strength;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_strength,return )

Float GlowFilter_obj::set_strength(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_469_set_strength)
HXLINE( 470)		if ((value != this->_hx___strength)) {
HXLINE( 470)			this->_hx___renderDirty = true;
            		}
HXLINE( 471)		return (this->_hx___strength = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_strength,return )

 ::openfl::filters::_GlowFilter::InvertAlphaShader GlowFilter_obj::_hx___invertAlphaShader;

 ::openfl::filters::_GlowFilter::BlurAlphaShader GlowFilter_obj::_hx___blurAlphaShader;

 ::openfl::filters::_GlowFilter::CombineShader GlowFilter_obj::_hx___combineShader;

 ::openfl::filters::_GlowFilter::InnerCombineShader GlowFilter_obj::_hx___innerCombineShader;

 ::openfl::filters::_GlowFilter::CombineKnockoutShader GlowFilter_obj::_hx___combineKnockoutShader;

 ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader GlowFilter_obj::_hx___innerCombineKnockoutShader;


::hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout) {
	::hx::ObjectPtr< GlowFilter_obj > __this = new GlowFilter_obj();
	__this->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return __this;
}

::hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< Float >  __o_strength,::hx::Null< int >  __o_quality,::hx::Null< bool >  __o_inner,::hx::Null< bool >  __o_knockout) {
	GlowFilter_obj *__this = (GlowFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlowFilter_obj), true, "openfl.filters.GlowFilter"));
	*(void **)__this = GlowFilter_obj::_hx_vtable;
	__this->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return __this;
}

GlowFilter_obj::GlowFilter_obj()
{
}

::hx::Val GlowFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blurX() ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blurY() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_inner() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_quality() ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		if (HX_FIELD_EQ(inName,"__blurX") ) { return ::hx::Val( _hx___blurX ); }
		if (HX_FIELD_EQ(inName,"__blurY") ) { return ::hx::Val( _hx___blurY ); }
		if (HX_FIELD_EQ(inName,"__color") ) { return ::hx::Val( _hx___color ); }
		if (HX_FIELD_EQ(inName,"__inner") ) { return ::hx::Val( _hx___inner ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_knockout() ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_strength() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__quality") ) { return ::hx::Val( _hx___quality ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurX") ) { return ::hx::Val( get_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurX") ) { return ::hx::Val( set_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurY") ) { return ::hx::Val( get_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurY") ) { return ::hx::Val( set_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_inner") ) { return ::hx::Val( get_inner_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_inner") ) { return ::hx::Val( set_inner_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__knockout") ) { return ::hx::Val( _hx___knockout ); }
		if (HX_FIELD_EQ(inName,"__strength") ) { return ::hx::Val( _hx___strength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_quality") ) { return ::hx::Val( get_quality_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return ::hx::Val( set_quality_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return ::hx::Val( _hx___initShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateSize") ) { return ::hx::Val( _hx___updateSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_knockout") ) { return ::hx::Val( get_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_knockout") ) { return ::hx::Val( set_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_strength") ) { return ::hx::Val( get_strength_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_strength") ) { return ::hx::Val( set_strength_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return ::hx::Val( _hx___applyFilter_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { return ::hx::Val( _hx___verticalPasses ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { return ::hx::Val( _hx___horizontalPasses ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__calculateNumShaderPasses") ) { return ::hx::Val( _hx___calculateNumShaderPasses_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GlowFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__combineShader") ) { outValue = ( _hx___combineShader ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__blurAlphaShader") ) { outValue = ( _hx___blurAlphaShader ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__invertAlphaShader") ) { outValue = ( _hx___invertAlphaShader ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__innerCombineShader") ) { outValue = ( _hx___innerCombineShader ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__combineKnockoutShader") ) { outValue = ( _hx___combineKnockoutShader ); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__innerCombineKnockoutShader") ) { outValue = ( _hx___innerCombineKnockoutShader ); return true; }
	}
	return false;
}

::hx::Val GlowFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blurX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blurY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_inner(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_quality(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurX") ) { _hx___blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurY") ) { _hx___blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { _hx___color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inner") ) { _hx___inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_knockout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_strength(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__quality") ) { _hx___quality=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__knockout") ) { _hx___knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__strength") ) { _hx___strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { _hx___verticalPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { _hx___horizontalPasses=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GlowFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__combineShader") ) { _hx___combineShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::CombineShader >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__blurAlphaShader") ) { _hx___blurAlphaShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::BlurAlphaShader >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__invertAlphaShader") ) { _hx___invertAlphaShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::InvertAlphaShader >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__innerCombineShader") ) { _hx___innerCombineShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::InnerCombineShader >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__combineKnockoutShader") ) { _hx___combineKnockoutShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::CombineKnockoutShader >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__innerCombineKnockoutShader") ) { _hx___innerCombineKnockoutShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader >(); return true; }
	}
	return false;
}

void GlowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("blurX",d1,0f,01,b5));
	outFields->push(HX_("blurY",d2,0f,01,b5));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("inner",96,31,1c,be));
	outFields->push(HX_("knockout",fa,a9,a5,6f));
	outFields->push(HX_("quality",bf,04,4c,44));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__blurX",b1,68,5f,1f));
	outFields->push(HX_("__blurY",b2,68,5f,1f));
	outFields->push(HX_("__color",43,ca,ba,b4));
	outFields->push(HX_("__horizontalPasses",a3,9a,5d,02));
	outFields->push(HX_("__inner",76,8a,7a,28));
	outFields->push(HX_("__knockout",1a,1d,de,12));
	outFields->push(HX_("__quality",9f,55,9a,c5));
	outFields->push(HX_("__strength",a1,45,c7,31));
	outFields->push(HX_("__verticalPasses",b5,4b,f5,ec));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GlowFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___blurX),HX_("__blurX",b1,68,5f,1f)},
	{::hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___blurY),HX_("__blurY",b2,68,5f,1f)},
	{::hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___color),HX_("__color",43,ca,ba,b4)},
	{::hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___horizontalPasses),HX_("__horizontalPasses",a3,9a,5d,02)},
	{::hx::fsBool,(int)offsetof(GlowFilter_obj,_hx___inner),HX_("__inner",76,8a,7a,28)},
	{::hx::fsBool,(int)offsetof(GlowFilter_obj,_hx___knockout),HX_("__knockout",1a,1d,de,12)},
	{::hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___quality),HX_("__quality",9f,55,9a,c5)},
	{::hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___strength),HX_("__strength",a1,45,c7,31)},
	{::hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___verticalPasses),HX_("__verticalPasses",b5,4b,f5,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GlowFilter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::InvertAlphaShader */ ,(void *) &GlowFilter_obj::_hx___invertAlphaShader,HX_("__invertAlphaShader",8d,5a,cd,c5)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::BlurAlphaShader */ ,(void *) &GlowFilter_obj::_hx___blurAlphaShader,HX_("__blurAlphaShader",9c,fe,5b,46)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::CombineShader */ ,(void *) &GlowFilter_obj::_hx___combineShader,HX_("__combineShader",e4,ff,b6,50)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::InnerCombineShader */ ,(void *) &GlowFilter_obj::_hx___innerCombineShader,HX_("__innerCombineShader",ae,ba,10,cf)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::CombineKnockoutShader */ ,(void *) &GlowFilter_obj::_hx___combineKnockoutShader,HX_("__combineKnockoutShader",7e,2c,69,48)},
	{::hx::fsObject /*  ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader */ ,(void *) &GlowFilter_obj::_hx___innerCombineKnockoutShader,HX_("__innerCombineKnockoutShader",48,c1,89,20)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GlowFilter_obj_sMemberFields[] = {
	HX_("__alpha",3e,00,f5,8b),
	HX_("__blurX",b1,68,5f,1f),
	HX_("__blurY",b2,68,5f,1f),
	HX_("__color",43,ca,ba,b4),
	HX_("__horizontalPasses",a3,9a,5d,02),
	HX_("__inner",76,8a,7a,28),
	HX_("__knockout",1a,1d,de,12),
	HX_("__quality",9f,55,9a,c5),
	HX_("__strength",a1,45,c7,31),
	HX_("__verticalPasses",b5,4b,f5,ec),
	HX_("clone",5d,13,63,48),
	HX_("__applyFilter",a6,20,a8,09),
	HX_("__initShader",75,95,f9,59),
	HX_("__updateSize",8a,06,9c,3d),
	HX_("__calculateNumShaderPasses",44,14,02,b7),
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_blurX",28,6c,aa,f8),
	HX_("set_blurX",34,58,fb,db),
	HX_("get_blurY",29,6c,aa,f8),
	HX_("set_blurY",35,58,fb,db),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_inner",ed,8d,c5,01),
	HX_("set_inner",f9,79,16,e5),
	HX_("get_knockout",03,5e,bf,24),
	HX_("set_knockout",77,81,b8,39),
	HX_("get_quality",d6,64,46,ca),
	HX_("set_quality",e2,6b,b3,d4),
	HX_("get_strength",8a,86,a8,43),
	HX_("set_strength",fe,a9,a1,58),
	::String(null()) };

static void GlowFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___invertAlphaShader,"__invertAlphaShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___blurAlphaShader,"__blurAlphaShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___combineShader,"__combineShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___innerCombineShader,"__innerCombineShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___combineKnockoutShader,"__combineKnockoutShader");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___innerCombineKnockoutShader,"__innerCombineKnockoutShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlowFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___invertAlphaShader,"__invertAlphaShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___blurAlphaShader,"__blurAlphaShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___combineShader,"__combineShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___innerCombineShader,"__innerCombineShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___combineKnockoutShader,"__combineKnockoutShader");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___innerCombineKnockoutShader,"__innerCombineKnockoutShader");
};

#endif

::hx::Class GlowFilter_obj::__mClass;

static ::String GlowFilter_obj_sStaticFields[] = {
	HX_("__invertAlphaShader",8d,5a,cd,c5),
	HX_("__blurAlphaShader",9c,fe,5b,46),
	HX_("__combineShader",e4,ff,b6,50),
	HX_("__innerCombineShader",ae,ba,10,cf),
	HX_("__combineKnockoutShader",7e,2c,69,48),
	HX_("__innerCombineKnockoutShader",48,c1,89,20),
	::String(null())
};

void GlowFilter_obj::__register()
{
	GlowFilter_obj _hx_dummy;
	GlowFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters.GlowFilter",36,e0,65,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlowFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &GlowFilter_obj::__SetStatic;
	__mClass->mMarkFunc = GlowFilter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GlowFilter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GlowFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GlowFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlowFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlowFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlowFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GlowFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_70_boot)
HXDLIN(  70)		_hx___invertAlphaShader =  ::openfl::filters::_GlowFilter::InvertAlphaShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_71_boot)
HXDLIN(  71)		_hx___blurAlphaShader =  ::openfl::filters::_GlowFilter::BlurAlphaShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_72_boot)
HXDLIN(  72)		_hx___combineShader =  ::openfl::filters::_GlowFilter::CombineShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_73_boot)
HXDLIN(  73)		_hx___innerCombineShader =  ::openfl::filters::_GlowFilter::InnerCombineShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_74_boot)
HXDLIN(  74)		_hx___combineKnockoutShader =  ::openfl::filters::_GlowFilter::CombineKnockoutShader_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_75_boot)
HXDLIN(  75)		_hx___innerCombineKnockoutShader =  ::openfl::filters::_GlowFilter::InnerCombineKnockoutShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters
