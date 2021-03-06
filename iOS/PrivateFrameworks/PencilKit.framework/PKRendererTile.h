//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSArray;

@interface PKRendererTile : CALayer
{
    // Error parsing type: Aq, name: _renderCount
    _Bool _outOfDate;
    id <PKRendererControllerProtocol> _rendererController;
    long long _level;
    NSArray *_renderedStrokes;
    struct CGPoint _offset;
    struct CGRect _drawingFrame;
}

+ (struct CGRect)layerFrameForLevel:(long long)arg1 offset:(struct CGPoint)arg2;
+ (double)tileSizeForLevel:(long long)arg1;
@property _Bool outOfDate; // @synthesize outOfDate=_outOfDate;
@property(copy, nonatomic) NSArray *renderedStrokes; // @synthesize renderedStrokes=_renderedStrokes;
@property(readonly, nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) long long level; // @synthesize level=_level;
@property __weak id <PKRendererControllerProtocol> rendererController; // @synthesize rendererController=_rendererController;
@property(readonly, nonatomic) struct CGRect drawingFrame; // @synthesize drawingFrame=_drawingFrame;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
@property(readonly) long long renderCount;
- (void)cancel;
- (void)update;
- (void)updateFrameForScale:(double)arg1;
- (void)dealloc;
- (id)initWithLevel:(long long)arg1 offset:(struct CGPoint)arg2 drawingScale:(double)arg3;

@end

