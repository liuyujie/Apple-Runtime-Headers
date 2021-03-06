//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKShapeLayerPathState : NSObject
{
    float _strokeStartT0;
    float _strokeStartT1;
    float _strokeEndT0;
    float _strokeEndT1;
}

- (float)progressForShapeLayer:(id)arg1;
- (void)setProgress:(float)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(CDUnknownBlockType)arg3;
- (void)setProgress:(float)arg1 onShapeLayer:(id)arg2;
- (float)strokeEndAtProgress:(float)arg1;
- (float)strokeStartAtProgress:(float)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStrokeStartT0:(float)arg1 strokeStartT1:(float)arg2 strokeEndT0:(float)arg3 strokeEndT1:(float)arg4;
- (id)initWithStrokeStart:(float)arg1 strokeEnd:(float)arg2;
- (id)initWithShapeLayer:(id)arg1 reverse:(_Bool)arg2;
- (id)initWithShapeLayer:(id)arg1;
- (id)init;

@end

