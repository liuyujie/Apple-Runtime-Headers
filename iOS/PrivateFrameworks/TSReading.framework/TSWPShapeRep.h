//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSDShapeRep.h>

#import "CALayerDelegate.h"
#import "TSDContainerRep.h"
#import "TSWPShapeLayoutDelegate.h"

@class CALayer, NSObject<TSDContainerInfo>, NSString, TSWPRep;

@interface TSWPShapeRep : TSDShapeRep <CALayerDelegate, TSDContainerRep, TSWPShapeLayoutDelegate>
{
    _Bool _editingContainedRep;
    CALayer *_overflowGlyphLayer;
    TSWPRep *_containedRep;
}

@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=_containedRep;
- (void)shapeLayoutDidChangeContainedStorage:(id)arg1;
- (_Bool)shapeLayoutShouldUpdateInstructionalText:(id)arg1;
- (_Bool)isEditingChildRep;
- (double)pParagraphAlignmentOffset;
- (unsigned long long)enabledKnobMask;
- (id)p_overflowKnobImage;
- (void)processChangedProperty:(int)arg1;
- (_Bool)isInvisible;
- (_Bool)isDraggable;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (void)p_resetOverflowGlyphLayerIfNecessary;
- (_Bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (_Bool)canSelectChildRep:(id)arg1;
- (_Bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (_Bool)p_shouldShowTextOverflowGlyph;
- (_Bool)shouldShowKnobs;
- (_Bool)shouldShowSelectionHighlight;
- (id)hyperlinkRegions;
- (void)willBeRemoved;
- (_Bool)wantsToHandleTapsWhenLocked;
- (_Bool)wantsToHandleTapsOnContainingGroup;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (void)willEndEditingContainedRep;
- (void)willBeginEditingContainedRep;
- (void)updateChildrenFromLayout;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
