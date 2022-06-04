#ifndef INCLUDED_flixel_FlxCamera
#define INCLUDED_flixel_FlxCamera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxCameraFollowStyle)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawBaseItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawQuadsItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawTrianglesItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxAxes)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxCamera_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxCamera_obj OBJ_;
		FlxCamera_obj();

	public:
		enum { _hx_ClassId = 0x1ff7ce3b };

		void __construct(::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_Zoom);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.FlxCamera")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.FlxCamera"); }
		static ::hx::ObjectPtr< FlxCamera_obj > __new(::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_Zoom);
		static ::hx::ObjectPtr< FlxCamera_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_Zoom);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxCamera_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxCamera",97,40,7b,39); }

		static void __boot();
		static Float defaultZoom;
		static ::Array< ::Dynamic> _defaultCameras;
		static  ::flixel::graphics::tile::FlxDrawQuadsItem _storageTilesHead;
		static  ::flixel::graphics::tile::FlxDrawTrianglesItem _storageTrianglesHead;
		static  ::openfl::_Vector::FloatVector drawVertices;
		static  ::openfl::display::Sprite trianglesSprite;
		static  ::flixel::math::FlxPoint renderPoint;
		static  ::flixel::math::FlxRect renderRect;
		static ::Array< ::Dynamic> get_defaultCameras();
		static ::Dynamic get_defaultCameras_dyn();

		static ::Array< ::Dynamic> set_defaultCameras(::Array< ::Dynamic> value);
		static ::Dynamic set_defaultCameras_dyn();

		Float x;
		Float y;
		Float scaleX;
		Float scaleY;
		Float totalScaleX;
		Float totalScaleY;
		 ::flixel::FlxCameraFollowStyle style;
		 ::flixel::FlxObject target;
		 ::flixel::math::FlxPoint targetOffset;
		Float followLerp;
		 ::flixel::math::FlxRect deadzone;
		 ::Dynamic minScrollX;
		 ::Dynamic maxScrollX;
		 ::Dynamic minScrollY;
		 ::Dynamic maxScrollY;
		 ::flixel::math::FlxPoint scroll;
		 ::openfl::display::BitmapData buffer;
		int bgColor;
		 ::flixel::FlxSprite screen;
		bool useBgAlphaBlending;
		 ::openfl::display::Sprite flashSprite;
		bool pixelPerfectRender;
		int width;
		int height;
		Float zoom;
		Float viewOffsetX;
		Float viewOffsetY;
		Float viewOffsetWidth;
		Float viewOffsetHeight;
		Float viewWidth;
		Float viewHeight;
		 ::flixel::math::FlxMatrix _blitMatrix;
		bool _useBlitMatrix;
		Float alpha;
		Float angle;
		int color;
		bool antialiasing;
		 ::flixel::math::FlxPoint followLead;
		bool filtersEnabled;
		 ::openfl::geom::Rectangle _flashRect;
		 ::openfl::geom::Point _flashPoint;
		 ::flixel::math::FlxPoint _flashOffset;
		int _fxFlashColor;
		Float _fxFlashDuration;
		 ::Dynamic _fxFlashComplete;
		Dynamic _fxFlashComplete_dyn() { return _fxFlashComplete;}
		Float _fxFlashAlpha;
		int _fxFadeColor;
		 ::flixel::math::FlxPoint _lastTargetPosition;
		 ::flixel::math::FlxPoint _scrollTarget;
		Float _fxFadeDuration;
		bool _fxFadeIn;
		 ::Dynamic _fxFadeComplete;
		Dynamic _fxFadeComplete_dyn() { return _fxFadeComplete;}
		bool _fxFadeCompleted;
		Float _fxFadeAlpha;
		Float _fxShakeIntensity;
		Float _fxShakeDuration;
		 ::Dynamic _fxShakeComplete;
		Dynamic _fxShakeComplete_dyn() { return _fxShakeComplete;}
		 ::flixel::util::FlxAxes _fxShakeAxes;
		 ::flixel::math::FlxPoint _point;
		::Array< ::Dynamic> _filters;
		Float initialZoom;
		 ::openfl::display::BitmapData _fill;
		 ::openfl::display::Bitmap _flashBitmap;
		 ::openfl::display::Sprite _scrollRect;
		 ::flixel::math::FlxRect _bounds;
		 ::openfl::display::Sprite canvas;
		 ::flixel::math::FlxMatrix _helperMatrix;
		 ::openfl::geom::Point _helperPoint;
		 ::flixel::graphics::tile::FlxDrawBaseItem _currentDrawItem;
		 ::flixel::graphics::tile::FlxDrawBaseItem _headOfDrawStack;
		 ::flixel::graphics::tile::FlxDrawQuadsItem _headTiles;
		 ::flixel::graphics::tile::FlxDrawTrianglesItem _headTriangles;
		 ::flixel::graphics::tile::FlxDrawQuadsItem startQuadBatch( ::flixel::graphics::FlxGraphic graphic,bool colored,::hx::Null< bool >  hasColorOffsets, ::Dynamic blend,::hx::Null< bool >  smooth, ::flixel::graphics::tile::FlxGraphicsShader shader);
		::Dynamic startQuadBatch_dyn();

		 ::flixel::graphics::tile::FlxDrawTrianglesItem startTrianglesBatch( ::flixel::graphics::FlxGraphic graphic,::hx::Null< bool >  smoothing,::hx::Null< bool >  isColored, ::Dynamic blend);
		::Dynamic startTrianglesBatch_dyn();

		 ::flixel::graphics::tile::FlxDrawTrianglesItem getNewDrawTrianglesItem( ::flixel::graphics::FlxGraphic graphic,::hx::Null< bool >  smoothing,::hx::Null< bool >  isColored, ::Dynamic blend);
		::Dynamic getNewDrawTrianglesItem_dyn();

		void clearDrawStack();
		::Dynamic clearDrawStack_dyn();

		void render();
		::Dynamic render_dyn();

		void drawPixels( ::flixel::graphics::frames::FlxFrame frame, ::openfl::display::BitmapData pixels, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform, ::Dynamic blend, ::Dynamic smoothing, ::flixel::graphics::tile::FlxGraphicsShader shader);
		::Dynamic drawPixels_dyn();

		void copyPixels( ::flixel::graphics::frames::FlxFrame frame, ::openfl::display::BitmapData pixels, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint, ::openfl::geom::ColorTransform transform, ::Dynamic blend, ::Dynamic smoothing, ::flixel::graphics::tile::FlxGraphicsShader shader);
		::Dynamic copyPixels_dyn();

		void drawTriangles( ::flixel::graphics::FlxGraphic graphic, ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::openfl::_Vector::IntVector colors, ::flixel::math::FlxPoint position, ::Dynamic blend,::hx::Null< bool >  repeat,::hx::Null< bool >  smoothing);
		::Dynamic drawTriangles_dyn();

		 ::flixel::math::FlxRect transformRect( ::flixel::math::FlxRect rect);
		::Dynamic transformRect_dyn();

		 ::flixel::math::FlxPoint transformPoint( ::flixel::math::FlxPoint point);
		::Dynamic transformPoint_dyn();

		 ::flixel::math::FlxPoint transformVector( ::flixel::math::FlxPoint vector);
		::Dynamic transformVector_dyn();

		 ::openfl::display::DisplayObject transformObject( ::openfl::display::DisplayObject object);
		::Dynamic transformObject_dyn();

		void destroy();

		void update(Float elapsed);

		void updateScroll();
		::Dynamic updateScroll_dyn();

		void updateFollow();
		::Dynamic updateFollow_dyn();

		void updateFlash(Float elapsed);
		::Dynamic updateFlash_dyn();

		void updateFade(Float elapsed);
		::Dynamic updateFade_dyn();

		void completeFade();
		::Dynamic completeFade_dyn();

		void updateShake(Float elapsed);
		::Dynamic updateShake_dyn();

		void updateFlashSpritePosition();
		::Dynamic updateFlashSpritePosition_dyn();

		void updateFlashOffset();
		::Dynamic updateFlashOffset_dyn();

		void updateScrollRect();
		::Dynamic updateScrollRect_dyn();

		void updateInternalSpritePositions();
		::Dynamic updateInternalSpritePositions_dyn();

		void follow( ::flixel::FlxObject Target, ::flixel::FlxCameraFollowStyle Style, ::Dynamic Lerp);
		::Dynamic follow_dyn();

		void snapToTarget();
		::Dynamic snapToTarget_dyn();

		void focusOn( ::flixel::math::FlxPoint point);
		::Dynamic focusOn_dyn();

		void flash(::hx::Null< int >  Color,::hx::Null< Float >  Duration, ::Dynamic OnComplete,::hx::Null< bool >  Force);
		::Dynamic flash_dyn();

		void fade(::hx::Null< int >  Color,::hx::Null< Float >  Duration,::hx::Null< bool >  FadeIn, ::Dynamic OnComplete,::hx::Null< bool >  Force);
		::Dynamic fade_dyn();

		void shake(::hx::Null< Float >  Intensity,::hx::Null< Float >  Duration, ::Dynamic OnComplete,::hx::Null< bool >  Force, ::flixel::util::FlxAxes Axes);
		::Dynamic shake_dyn();

		void stopFX();
		::Dynamic stopFX_dyn();

		void setFilters(::Array< ::Dynamic> filters);
		::Dynamic setFilters_dyn();

		 ::flixel::FlxCamera copyFrom( ::flixel::FlxCamera Camera);
		::Dynamic copyFrom_dyn();

		void fill(int Color,::hx::Null< bool >  BlendAlpha,::hx::Null< Float >  FxAlpha, ::openfl::display::Graphics graphics);
		::Dynamic fill_dyn();

		void drawFX();
		::Dynamic drawFX_dyn();

		void checkResize();
		::Dynamic checkResize_dyn();

		void updateBlitMatrix();
		::Dynamic updateBlitMatrix_dyn();

		void setSize(int Width,int Height);
		::Dynamic setSize_dyn();

		void setPosition(::hx::Null< Float >  X,::hx::Null< Float >  Y);
		::Dynamic setPosition_dyn();

		void setScrollBoundsRect(::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< Float >  Width,::hx::Null< Float >  Height,::hx::Null< bool >  UpdateWorld);
		::Dynamic setScrollBoundsRect_dyn();

		void setScrollBounds( ::Dynamic MinX, ::Dynamic MaxX, ::Dynamic MinY, ::Dynamic MaxY);
		::Dynamic setScrollBounds_dyn();

		void setScale(Float X,Float Y);
		::Dynamic setScale_dyn();

		void onResize();
		::Dynamic onResize_dyn();

		bool containsPoint( ::flixel::math::FlxPoint point,::hx::Null< Float >  width,::hx::Null< Float >  height);
		::Dynamic containsPoint_dyn();

		Float set_followLerp(Float Value);
		::Dynamic set_followLerp_dyn();

		int set_width(int Value);
		::Dynamic set_width_dyn();

		int set_height(int Value);
		::Dynamic set_height_dyn();

		Float set_zoom(Float Zoom);
		::Dynamic set_zoom_dyn();

		Float set_alpha(Float Alpha);
		::Dynamic set_alpha_dyn();

		Float set_angle(Float Angle);
		::Dynamic set_angle_dyn();

		int set_color(int Color);
		::Dynamic set_color_dyn();

		bool set_antialiasing(bool Antialiasing);
		::Dynamic set_antialiasing_dyn();

		Float set_x(Float x);
		::Dynamic set_x_dyn();

		Float set_y(Float y);
		::Dynamic set_y_dyn();

		bool set_visible(bool visible);

		void calcOffsetX();
		::Dynamic calcOffsetX_dyn();

		void calcOffsetY();
		::Dynamic calcOffsetY_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxCamera */ 
