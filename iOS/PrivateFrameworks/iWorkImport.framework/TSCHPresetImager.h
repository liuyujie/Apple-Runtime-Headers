//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSCHPresetImager : NSObject
{
}

+ (void)drawGenericImageIntoContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 preset:(id)arg3 usingRepresentativeSpecificSeriesFillProperties:(id)arg4 outShouldCache:(_Bool *)arg5;
+ (id)presetImagerForChartType:(id)arg1;
- (id)p_strokeFromStyle:(id)arg1 specific:(int)arg2 default:(int)arg3;
- (id)p_objectFromStyle:(id)arg1 specific:(int)arg2 default:(int)arg3;
- (void)p_fillPath:(struct CGPath *)arg1 withFill:(id)arg2 inContext:(struct CGContext *)arg3;
- (id)p_shadow;
- (_Bool)p_preserveAspectRatio;
- (struct CGContext *)p_newContextOfSize:(struct CGSize)arg1;
- (struct CGSize)p_nativeSize;
- (id)p_chartType;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6 shouldCache:(_Bool *)arg7;
- (struct UIEdgeInsets)swatchImageEdgeInsetsForSize:(struct CGSize)arg1;
- (struct CGSize)p_drawAndOffsetMultiDataSliderIntoContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3;
- (void)p_drawUnshadowedContentIntoContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(_Bool *)arg5;
- (void)p_drawShadowedContentIntoContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(_Bool *)arg5;
- (id)initWithChartType:(id)arg1;
- (id)p_init;

@end

