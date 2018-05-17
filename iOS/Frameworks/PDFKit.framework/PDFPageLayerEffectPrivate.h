//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSMutableDictionary, NSUUID, PDFAnnotation, PDFSelection, PDFTimer;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffectPrivate : NSObject
{
    id <PDFPageLayerInterface> pageLayer;
    NSUUID *uuid;
    struct CGRect pageFrame;
    _Bool shouldRotateContent;
    PDFAnnotation *annotation;
    NSMutableDictionary *markupEffectLayers;
    PDFSelection *selection;
    NSMutableDictionary *selectionEffectLayers;
    _Bool showTextSelectionHandle;
    struct {
        _Bool isOnFirstPage;
        _Bool isOnLastPage;
        struct CGRect firstPageRect;
        struct CGRect lastPageRect;
    } pageInfo;
    CALayer *rootSelectionLayer;
    CALayer *selectionStartHandle;
    CALayer *selectionEndHandle;
    PDFTimer *zoomTimer;
    CALayer *textMagnifierLayer;
    struct CGImage *magnifierImageMask;
    struct CGSize magnifierSize;
    CALayer *lollipopMagnifierLayer;
    struct CGImage *lollipopImageMask;
    struct CGSize lollipopSize;
}

- (void).cxx_destruct;

@end
