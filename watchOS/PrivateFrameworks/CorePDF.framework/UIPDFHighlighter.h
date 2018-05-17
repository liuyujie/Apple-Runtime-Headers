//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UIPDFHighlighter : NSObject
{
    NSMutableArray *_highLightLayers;
    struct CGColor *_highlightColor;
    struct CGColor *_borderColor;
    struct CGColor *_whiteColor;
    struct CGPDFPage *_page;
    float _enlargeFactor;
    float _pdfToViewScale;
    float inset;
}

@property(nonatomic) float inset; // @synthesize inset;
- (void)clear;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(_Bool)arg3;
- (void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned int)arg2 to:(id)arg3 animated:(_Bool)arg4;
- (void)addAnimation:(id)arg1;
- (void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(CDStruct_95077174)arg3 upright:(_Bool)arg4;
- (void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(CDStruct_95077174)arg3 upright:(_Bool)arg4;
- (void)addRectPath:(struct CGPath *)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(CDStruct_95077174)arg4 upright:(_Bool)arg5;
- (void)unhide;
- (void)dealloc;
- (id)init;

@end
